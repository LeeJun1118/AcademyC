#include  "Object.h"

int main(void)
{
  //** ǥ�� ��.���
  /*
  int iNumber = 0;

  printf_s("�Է� : ");
  scanf_s("%d", &iNumber);

  printf_s("����� �Է��� ���� �ٷ� [ %d ] �Դϴ�.\n", iNumber);
  */


  /*
  int iNumber = 0;

  //** namespace �˻�
  std::cout << "�Է� : ";
  std::cin >> iNumber;

  std::cout << "����� �Է��� ���� �ٷ� [ " << iNumber << "�Դϴ�." << std::endl;
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