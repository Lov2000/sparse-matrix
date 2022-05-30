#include<stdio.h>
#include<stdlib.h>
typedef struct ColumnNodeType{
int col;
float element;
struct ColumnNodeType *link;
}ColumnNode;
typedef struct RowNodeType{
int row;
struct RowNodeType * next;
ColumnNode * first;
}RowNode;
typedef struct headerNodeType{
  
int nrow;
int ncolumn;
int num;
struct headerNodeType *head;
}headerNode;
typedef struct rowno{
int rownum;
int columnnum;
int value;
struct rowno *rownm;
}
rownumm;
void main()
{}

