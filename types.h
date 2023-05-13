#include<stdbool.h>
typedef enum { typeCon, typeConF,typeConS, typeText, typeId, typeOpr} nodeEnum;

/* constants */
typedef struct {
  nodeEnum type; /* type of node */
  int value; /* value of constant */
  float valueF;
  char* valueS;
} conNodeType;

typedef struct {
  nodeEnum type; /* type of node */
  char* value; /* value of constant */
} textNodeType;

/* identifiers */
typedef struct {
  nodeEnum type; /* type of node */
  int i; /* subscript to ident array */
} idNodeType;

/* operators */
typedef struct {
  nodeEnum type; /* type of node */
  int oper; /* operator */
  int nops; /* number of operands */
  union nodeTypeTag *op[1]; /* operands (expandable) */
} oprNodeType;

typedef union nodeTypeTag {
  nodeEnum type; /* type of node */
  conNodeType con; /* constants */
  textNodeType txt;
  idNodeType id; /* identifiers */
  oprNodeType opr; /* operators */
} nodeType;

typedef struct {
  char *value;
  char *type;
}memory_type;

typedef struct {
  int intValue;
  float floatValue;
  char* stringValue;
}data_;

typedef struct {
  int x;
  int y;
}tic;
/* prototypes */
nodeType *opr(int oper, int nops, ...);
nodeType *id(int i);
nodeType *text(char* value);
nodeType *con(int value);
nodeType *conF(float value);
nodeType *conS(char* value);
data_ execute(nodeType *node);
void freeNode(nodeType *p);
void saveValueInMemory(nodeType * node);
char *getString(nodeType *node);
void playTicTacToe();
void playRound(int table[3][3], int* round, int x, int y);
void printTable(int table[3][3]);
bool isWin(int t[3][3]);