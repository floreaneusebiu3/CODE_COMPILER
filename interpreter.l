%{
#include <stdlib.h>
#include "types.h"
#include <string.h>
#include "y.tab.h"
%}

%%
 
  /* variables */
[a-z]           {
                   yylval.iValue = *yytext - 'a';
                   return VARIABLE;
                }
[\"][a-zA-Z1-9]+[\"] {
                        char *aux = (char*)malloc(100 * sizeof(char));
                        strcpy(aux, yytext);
                        int len = strlen(aux);
                        memmove(aux, aux + 1, len - 1);
                        aux[len - 2] = '\0';
                        yylval.sValue = aux;
                        return STRING;
                     }

[-]*[0-9]+[.][0-9]+ {
                        yylval.fValue = atof(yytext);
                        return FLOAT;
                     }

  /* integers */                 
[-]*[0-9]+      {
                   yylval.iValue = atoi(yytext);
                   return INTEGER;
                }

  /* operators */
[-()<>=+/*;{}.:] return *yytext;

">="            return GE;
"<="            return LE;
"=="            return EQ;
"!="            return NE;
"while"         return WHILE;
"if"            return IF;
"else"          return ELSE;
"print"         return PRINT;
"repeat"        return REPEAT;
"until"         return UNTIL;
"for"           return FOR;
"switch"        return SWITCH;
"case"          return CASE;
"endSwitch"    return END_SWITCH;
"default"      return DEFAULT;

"int"           {
                  //printf("lex: %s\n", yytext);
                  yylval.typee = "int";
                  return TYPEE;
                }

"string"        {
                  //printf("lex: %s\n", yytext);
                  yylval.typee = "string";
                  return TYPEE;
                }

"float"         {
                  //printf("lex: %s\n", yytext);
                  yylval.typee = "float";
                  return TYPEE;
                }

[ \t\n]+        ;      

.               yyerror("Unknown character.\n");


