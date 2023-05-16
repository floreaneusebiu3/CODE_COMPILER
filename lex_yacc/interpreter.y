%{
#include <stdio.h>
#include <limits.h>

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include<stdbool.h>
#include "types.h"

memory_type memory[26]; 
void yyerror(const char* s);
extern char* yytext;
int table[3][3];
int round;
%}

%union {
  tic ticValue;
  int iValue;      
  float fValue;
  char* sValue;
  char *typee;
  nodeType *nPtr;  
};

%token <iValue> INTEGER 
%token <sValue> STRING
%token <fValue> FLOAT 
%token <typee> TYPEE
%token <iValue> VARIABLE
%token <ticValue> PUT
%token WHILE IF PRINT REPEAT UNTIL FOR SWITCH CASE END_SWITCH DEFAULT START
%nonassoc IFX
%nonassoc ELSE

%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%type <nPtr> statement expr stmt_list case_stmt default_stmt

%start      program

%%
program   : function '.'                                         { exit(0); }
          ;

function  : function statement                                   {                   
                                                                   execute($2); 
                                                                   freeNode($2); 
                                                                 }
          | /* NULL */
          ;
 
statement : ';'                                                  { $$ = opr(';', 2, NULL, NULL); }
          | expr ';'                                             { $$ = $1; }
          | START                                                { $$ = opr(START, 0); }
          | PUT                                                  { $$ = opr(PUT, 2, con(($1).x), con(($1).y)); }
          | PRINT expr ';'                                       { $$ = opr(PRINT, 1, $2); }
          | VARIABLE '=' expr ';'                                { $$ = opr('=', 2, id($1), $3); }
          | TYPEE VARIABLE ';'                                   { $$ = opr(TYPEE, 2, text($1), id($2)); }  
          | WHILE '(' expr ')' statement                         { $$ = opr(WHILE, 2, $3, $5); }
          | REPEAT statement UNTIL '(' expr ')' ';'              { $$ = opr(REPEAT, 2, $2, $5); }
          | FOR statement expr ';' statement '{' stmt_list '}'   { $$ = opr(FOR, 4, $2, $3, $5, $7); }
          | SWITCH '(' VARIABLE ')' case_stmt case_stmt default_stmt  END_SWITCH                               
                                                                 { $$ = opr(SWITCH, 4, id($3), $5, $6, $7); } 
          | IF '(' expr ')' statement %prec IFX                  { $$ = opr(IF, 2, $3, $5); }
          | IF '(' expr ')' statement ELSE statement             { $$ = opr(IF, 3, $3, $5, $7); }
          | '{' stmt_list '}'                                    { $$ = $2; }
          ;

stmt_list : statement
          | stmt_list statement                                  { $$ = opr(';', 2, $1, $2); }
          ;

case_stmt: CASE INTEGER ':' stmt_list                            { $$ = opr(CASE, 2, con($2), $4); }
          ;

default_stmt: DEFAULT ':' stmt_list                              { $$ = opr(DEFAULT, 1, $3); }
          ;
expr      : INTEGER                                              { $$ = con($1); }
          | FLOAT                                                { $$ = conF($1); } 
          | STRING                                               { $$ = conS($1); }
          | VARIABLE                                             { $$ = id($1); }
          | TYPEE                                                { $$ = text($1);}
          | '-' expr %prec UMINUS                                { $$ = opr(UMINUS, 1, $2); }
          | expr '+' expr                                        { $$ = opr('+', 2, $1, $3); }
          | expr '-' expr                                        { $$ = opr('-', 2, $1, $3); }
          | expr '*' expr                                        { $$ = opr('*', 2, $1, $3); }
          | expr '/' expr                                        { $$ = opr('/', 2, $1, $3); }
          | expr '<' expr                                        { $$ = opr('<', 2, $1, $3); }
          | expr '>' expr                                        { $$ = opr('>', 2, $1, $3); }
          | expr GE expr                                         { $$ = opr(GE, 2, $1, $3); }
          | expr LE expr                                         { $$ = opr(LE, 2, $1, $3); }
          | expr NE expr                                         { $$ = opr(NE, 2, $1, $3); }
          | expr EQ expr                                         { $$ = opr(EQ, 2, $1, $3); }
          | '(' expr ')'                                         { $$ = $2; }
          ;
%%
data_ execute(nodeType *node) {
  data_ data;
  data_ aux;
  data_ aux2;
  data.intValue = INT_MAX;
  data.floatValue = INT_MAX;
  if (!node) 
      return data; 
  switch(node->type) {
      case typeCon: data.intValue = node->con.value; return data;
      case typeConF: data.floatValue = node->con.valueF; return data;
      case typeConS: data.stringValue = node->con.valueS; return data;
      case typeId :  
                    if(memory[node->id.i].type == NULL) {
                         yyerror("error:undeclared variable");
                         return data;
                    }
                    if (strcmp(memory[node->id.i].type, "int") == 0) {
                         data.intValue = atoi(memory[node->id.i].value);
                         return data;
                    }
                    if (strcmp(memory[node->id.i].type, "float") == 0) {
                        data.floatValue = atof(memory[node->id.i].value);
                        return data;
                    }
                    if (strcmp(memory[node->id.i].type, "string") == 0) {
                        data.stringValue = (char*)malloc(100 * sizeof(char));
                        data.stringValue = memory[node->id.i].value;
                        return data;
                    }
                    yyerror("error:incorrect assigment");
                    return data;
                    
      case typeOpr : switch(node->opr.oper) 
                    { case START  :  for (int i = 0; i < 3; i++) 
                                     for (int j = 0; j < 3; j++) 
                                        table[i][j] = 0;
                                     round = 0;
                                     printTable(table);
                                     if (round % 2 == 0) 
                                        printf("\nO's round\n");
                                     else 
                                        printf("\nX's round\n");
                                     return data;

                    case PUT :       if(round < 9 && !isWin(table)) {
                                         playRound(table, &round, execute(node->opr.op[0]).intValue, execute(node->opr.op[1]).intValue);
                                         if (!isWin(table)) {
                                             printTable(table);
                                             if (round % 2 == 0) 
                                                 printf("\nO's round\n");
                                             else 
                                                 printf("\nX's round\n");                                      
                                         }    
                                      }
                                      return data;

                    case WHILE  :   if(node->opr.op[0]->opr.oper == '<' || node->opr.op[0]->opr.oper == '>' || 
                                         node->opr.op[0]->opr.oper == EQ  || node->opr.op[0]->opr.oper == NE ||
                                         node->opr.op[0]->opr.oper == GE  || node->opr.op[0]->opr.oper == LE ) {
                                         while (execute(node->opr.op[0]).intValue) {
                                             execute(node->opr.op[1]);
                                          }
                                     } 
                                    return data;

                    case REPEAT :   if(node->opr.op[1]->opr.oper == '<' || node->opr.op[1]->opr.oper == '>' || 
                                         node->opr.op[1]->opr.oper == EQ  || node->opr.op[1]->opr.oper == NE ||
                                         node->opr.op[1]->opr.oper == GE  || node->opr.op[1]->opr.oper == LE ) {
                                         do {
                                            execute(node->opr.op[0]);
                                         } while (execute(node->opr.op[1]).intValue);
                                    } 
                                    return data;
                                          
                      case IF    :       if(node->opr.op[0]->opr.oper == '<' || node->opr.op[0]->opr.oper == '>' || 
                                         node->opr.op[0]->opr.oper == EQ  || node->opr.op[0]->opr.oper == NE ||
                                         node->opr.op[0]->opr.oper == GE  || node->opr.op[0]->opr.oper == LE ) {
                                           if (execute(node->opr.op[0]).intValue) 
                                                execute(node->opr.op[1]);
                                            else if (node->opr.nops > 2) 
                                                execute(node->opr.op[2]);
                                         } 
                                         return data; 

                      case FOR  :        if(node->opr.op[1]->opr.oper == '<' || node->opr.op[1]->opr.oper == '>' || 
                                         node->opr.op[1]->opr.oper == EQ  || node->opr.op[1]->opr.oper == NE ||
                                         node->opr.op[1]->opr.oper == GE  || node->opr.op[1]->opr.oper == LE ) {
                                           execute(node->opr.op[0]).intValue;
                                           while (execute(node->opr.op[1]).intValue) {
                                            execute(node->opr.op[3]);
                                            execute(node->opr.op[2]);
                                          }
                                          } 
                                          return data; 
                      case SWITCH :    if(strcmp(memory[node->opr.op[0]->id.i].type, "int") == 0) {
                                           if (execute(node->opr.op[0]).intValue == execute(node->opr.op[1]->opr.op[0]).intValue) {
                                                execute(node->opr.op[1]->opr.op[1]);
                                                return data;
                                           }
                                           if (execute(node->opr.op[0]).intValue == execute(node->opr.op[2]->opr.op[0]).intValue) {
                                                execute(node->opr.op[2]->opr.op[1]);
                                                return data;
                                           }
                                       execute(node->opr.op[3]->opr.op[0]);
                                       }  
                                       return data;

                      case '='    :   saveValueInMemory(node); return data;

                      case TYPEE  :   memory[node->opr.op[1]->id.i].type = (char*)malloc(10 * sizeof(char));
                                      memory[node->opr.op[1]->id.i].type = getString(node->opr.op[0]);
                                      return data;

                      case PRINT :    aux = execute(node->opr.op[0]); 
                                      if (aux.intValue != INT_MAX)  {
                                          printf("%d\n", execute(node->opr.op[0]).intValue); 
                                          return data;
                                      }
                                      if (aux.floatValue != INT_MAX) {
                                          printf("%f\n", execute(node->opr.op[0]).floatValue); 
                                          return data;
                                      }
                                      if (aux.stringValue != NULL) {
                                          printf("%s\n", execute(node->opr.op[0]).stringValue); 
                                          return data;
                                      }
                                      return data;

                      case ';':       execute(node->opr.op[0]); 
		                                      return execute(node->opr.op[1]); 

                      case '+'   :    aux = execute(node->opr.op[0]);
                                      if (aux.intValue != INT_MAX) 
                                        data.intValue = execute(node->opr.op[0]).intValue + execute(node->opr.op[1]).intValue;
                                      if (aux.floatValue != INT_MAX) 
                                        data.floatValue = execute(node->opr.op[0]).floatValue + execute(node->opr.op[1]).floatValue;
                                      return data;

                      case '-'   :    aux = execute(node->opr.op[0]);
                                      if (aux.intValue != INT_MAX) 
                                        data.intValue = execute(node->opr.op[0]).intValue - execute(node->opr.op[1]).intValue;
                                      if (aux.floatValue != INT_MAX) 
                                        data.floatValue = execute(node->opr.op[0]).floatValue - execute(node->opr.op[1]).floatValue;
                                      return data;

                      case '*'   :    aux = execute(node->opr.op[0]);
                                      if (aux.intValue != INT_MAX) 
                                        data.intValue = execute(node->opr.op[0]).intValue * execute(node->opr.op[1]).intValue;
                                      if (aux.floatValue != INT_MAX) 
                                        data.floatValue = execute(node->opr.op[0]).floatValue * execute(node->opr.op[1]).floatValue;
                                      return data;

                      case '/'   :    aux = execute(node->opr.op[0]);
                                      if (aux.intValue != INT_MAX) 
                                        data.intValue = execute(node->opr.op[0]).intValue / execute(node->opr.op[1]).intValue;
                                      if (aux.floatValue != INT_MAX) 
                                        data.floatValue = execute(node->opr.op[0]).floatValue / execute(node->opr.op[1]).floatValue;
                                      return data;

                      case '<'   :    aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue < aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue < aux2.floatValue;
                                      return data;

		                  case '>':       aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue > aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue > aux2.floatValue;
                                      return data;

		                  case GE:        aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue >= aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue >= aux2.floatValue;
                                      return data; 

		                  case LE:        aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue <= aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue <= aux2.floatValue;
                                      return data; 

		                  case NE:        aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue != aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue != aux2.floatValue;
                                      return data;
                                      
		                  case EQ:        aux = execute(node->opr.op[0]);
                                      aux2 = execute(node->opr.op[1]);
                                      if (aux.intValue != INT_MAX && aux2.intValue != INT_MAX) 
                                        data.intValue = aux.intValue == aux2.intValue;
                                      if (aux.floatValue != INT_MAX  && aux2.floatValue != INT_MAX) 
                                        data.intValue = aux.floatValue == aux2.floatValue;
                                      return data;
                  }
  }
  }

char *getString(nodeType *node) {
  char *s = malloc(10 * sizeof(char));
  sprintf(s, "%s", node->txt.value);
  return s;
}

void saveValueInMemory(nodeType * node) {
  if(memory[node->opr.op[0]->id.i].value == NULL)
  memory[node->opr.op[0]->id.i].value = (char*)malloc(100 * sizeof(char));
  if (strcmp(memory[node->opr.op[0]->id.i].type, "int") == 0) 
        sprintf(memory[node->opr.op[0]->id.i].value, "%d", execute(node->opr.op[1]).intValue); 
  if (strcmp(memory[node->opr.op[0]->id.i].type, "float") == 0) 
        sprintf(memory[node->opr.op[0]->id.i].value, "%f", execute(node->opr.op[1]).floatValue);      
  if (strcmp(memory[node->opr.op[0]->id.i].type, "string") == 0) 
        sprintf(memory[node->opr.op[0]->id.i].value, "%s", execute(node->opr.op[1]).stringValue);    
}

void freeNode(nodeType *p) 
{ 
  int i; 
  if (!p) 
    return; 
  if (p->type == typeOpr) { 
    for (i = 0; i < p->opr.nops; i++) 
      freeNode(p->opr.op[i]); 
  } 
  free (p); 
} 

nodeType *text(char* value) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(textNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeText; 
  p->txt.value = value; 
  return p; 
} 

nodeType *con(int value) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(conNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeCon; 
  p->con.value = value; 
  return p; 
} 

nodeType *conF(float value) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(conNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeConF; 
  p->con.valueF = value; 
  return p; 
} 

nodeType *conS(char* value) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(conNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeConS;
  p->con.valueS = (char*)malloc(100 * sizeof(char));
  p->con.valueS = value; 
  return p; 
} 

nodeType *id(int i) 
{ 
  nodeType *p; 
  /* allocate node */ 
  if ((p = malloc(sizeof(idNodeType))) == NULL) 
    yyerror("out of memory"); 
  /* copy information */ 
  p->type = typeId; 
  p->id.i = i; 
  return p; 
} 

nodeType *opr(int oper, int nops, ...) 
{ 
  va_list ap; 
  nodeType *p; 
  size_t size; 
  int i; 
  /* allocate node */ 
  size = sizeof(oprNodeType) + (nops - 1) * sizeof(nodeType*); 
  if ((p = malloc(size)) == NULL) 
    yyerror("out of memory"); 
  /* copy information */
  p->type = typeOpr; 
  p->opr.oper = oper; 
  p->opr.nops = nops; 
  va_start(ap, nops); 
  for (i = 0; i < nops; i++) 
    p->opr.op[i] = va_arg(ap, nodeType*); 
  va_end(ap); 
  return p; 
}

void yyerror(const char* s) {
    fprintf(stderr, "Error: %s, input: %s\n", s, yytext);
}

int main(void) 
{
  yyparse();
  return 0; 
}

bool isWin(int t[3][3]){
    for (int i = 0; i < 3; i++){
        if ((t[0][i] == 1 && t[1][i] == 1 && t[2][i] == 1) ||
            (t[0][i] == 2 && t[1][i] == 2 && t[2][i] == 2) ||
            (t[i][0] == 1 && t[i][1] == 1 && t[i][2] == 1) ||
            (t[i][0] == 2 && t[i][1] == 2 && t[i][2] == 2)){
                return true;
            }
    }
    if ((t[0][0] == 1 && t[1][1] == 1 && t[2][2] == 1) ||
        (t[0][0] == 2 && t[1][1] == 2 && t[2][2] == 2) ||
        (t[0][2] == 1 && t[1][1] == 1 && t[2][0] == 1) ||
        (t[0][2] == 2 && t[1][1] == 2 && t[2][0] == 2)){
            return true;
        }
    return false;
}

void printTable(int table[3][3]){
    for (int i = 0; i<3; i++){
        printf("\n-------\n|");

        for (int j = 0; j<3; j++){
            if (table[i][j] == 0)
                printf(" |");
            if (table[i][j] == 1)
                printf("O|");
            if (table[i][j] == 2)
                printf("X|");
        }
    }
    printf("\n-------\n");
}

void playRound(int table[3][3], int* round, int x, int y){
    printf("ROUND = %d\n", (*round));
    char playerChar;
    int playerVal;
    if ((*round) % 2 == 0){
        playerChar = 'O';
        playerVal = 1;
    }
    else {
        playerChar = 'X';
        playerVal = 2;
    }
    if (table[x-1][y-1] == 0 && x >= 1 && x <=3 && y >= 1 && y <=3){
        (*round) ++;
        table[x-1][y-1] = playerVal;
        if (isWin(table)){
            printTable(table);
            printf("\n%c won!\n", playerChar);
        }
    }
}