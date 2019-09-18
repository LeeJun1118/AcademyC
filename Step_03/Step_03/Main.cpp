#include <iostream>


typedef struct tagObject
{
  int iNumber;
}OBJ;


int main(void)
{
  //OBJ* pObj = (OBJ*)malloc(sizeof(OBJ));
  OBJ* pObj = new OBJ;
  
  pObj->iNumber = 10;

  printf_s("%d\n", pObj->iNumber);

  //free(pObj);
  delete pObj;
  pObj = NULL;

  if(pObj != NULL)
    printf_s("%d\n", pObj->iNumber);

  return 0;
}