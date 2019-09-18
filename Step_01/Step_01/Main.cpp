#include <iostream>


//** typedef  = 닉네임 설정하는 키워드.
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

  printf_s("국어 점수 입력 : ");
  scanf_s("%d", &stu.iKor);

  printf_s("영어 점수 입력 : ");
  scanf_s("%d", &stu.iEng);

  printf_s("수학 점수 입력 : ");
  scanf_s("%d", &stu.iMath);

  printf_s("국어 점수 : %d\n", stu.iKor);
  printf_s("영어 점수 : %d\n", stu.iEng);
  printf_s("수학 점수 : %d\n", stu.iMath);
  */


  //[포인터]
  //** 1. & = 주소, * = 가리키는것
  //** 2. 포인터는 동적할당
  //** 3. . 아니면 ->


  /*
  Student* stu = (Student*)malloc(sizeof(Student));

  printf_s("국어 점수 입력 : ");
  scanf_s("%d", &stu->iKor);

  printf_s("영어 점수 입력 : ");
  scanf_s("%d", &stu->iEng);

  printf_s("수학 점수 입력 : ");
  scanf_s("%d", stu->iMath);

  printf_s("국어 점수 : %d\n", stu->iKor);
  printf_s("영어 점수 : %d\n", stu->iEng);
  printf_s("수학 점수 : %d\n", stu->iMath);
  */




  return 0;
}


//** OOP(Object Oriented Programing) 의 특징 5가지.

//** 1. 정보은닉.

//** 2. 캡슐화.

//** 3. 추상화.

//** 4. 상속.

//** 5. 다형성.

