#include <iostream>


//** typedef  = �г��� �����ϴ� Ű����.
/*
typedef struct tagName
{

}NAME;
*/


struct Student
{
  int iKor;
  int iEng;
  int iMath;
};




int main(void)
{
  /*
  Student stu;

  printf_s("���� ���� �Է� : ");
  scanf_s("%d", &stu.iKor);

  printf_s("���� ���� �Է� : ");
  scanf_s("%d", &stu.iEng);

  printf_s("���� ���� �Է� : ");
  scanf_s("%d", &stu.iMath);

  printf_s("���� ���� : %d\n", stu.iKor);
  printf_s("���� ���� : %d\n", stu.iEng);
  printf_s("���� ���� : %d\n", stu.iMath);
  */


  //[������]
  //** 1. & = �ּ�, * = ����Ű�°�
  //** 2. �����ʹ� �����Ҵ�
  //** 3. . �ƴϸ� ->


  /*
  Student* stu = (Student*)malloc(sizeof(Student));

  printf_s("���� ���� �Է� : ");
  scanf_s("%d", &stu->iKor);

  printf_s("���� ���� �Է� : ");
  scanf_s("%d", &stu->iEng);

  printf_s("���� ���� �Է� : ");
  scanf_s("%d", stu->iMath);

  printf_s("���� ���� : %d\n", stu->iKor);
  printf_s("���� ���� : %d\n", stu->iEng);
  printf_s("���� ���� : %d\n", stu->iMath);
  */




  return 0;
}


//** OOP(Object Oriented Programing) �� Ư¡ 5����.

//** 1. ��������.

//** 2. ĸ��ȭ.

//** 3. �߻�ȭ.

//** 4. ���.

//** 5. ������.

