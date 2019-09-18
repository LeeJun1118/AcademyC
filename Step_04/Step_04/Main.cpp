#include  "Object.h"

int main(void)
{
  //** 표준 입.출력
  /*
  int iNumber = 0;

  printf_s("입력 : ");
  scanf_s("%d", &iNumber);

  printf_s("당신이 입력한 값은 바로 [ %d ] 입니다.\n", iNumber);
  */


  /*
  int iNumber = 0;

  //** namespace 검색
  std::cout << "입력 : ";
  std::cin >> iNumber;

  std::cout << "당신이 입력한 값은 바로 [ " << iNumber << "입니다." << std::endl;
  */


  /*
  ObjectD::Output();
  ObjectD::Output();
  */

  cout << "Winstone Games" << endl;


  Object Obj;
  Obj.Output();
  Obj.Output(10);

  return 0;
}