#include <iostream>








//** 객체지향언어의 특징 5가지.

//** 1. 정보은닉.
//** 2. 캡슐화.

//** 3. 추상화.
//** 4. 상속.
//** 5. 다형성.


// struct  = 구조체 
//** struct => class



//** [01] 정보 은닉 예제
class Object
{
  int iKor;
  int iEng;
  int iMath;
};



//** [02] 캡슐화 예제1
struct tagStudent
{
  int iKor;
  int iEng;
  int iMath;

  void Output()
  {
    printf_s("국어 점수 : %d\n", iKor);
    printf_s("영어 점수 : %d\n", iEng);
    printf_s("수학 점수 : %d\n", iMath);
  }
};



//** [03] 캡슐화 예제2
class Student
{
public:
  int iKor;
  int iEng;
  int iMath;

  void Output()
  {
    printf_s("국어 점수 : %d\n", iKor);
    printf_s("영어 점수 : %d\n", iEng);
    printf_s("수학 점수 : %d\n", iMath);
  }
};




//** [04] 정보은닉 & 캡슐화 응용
class Player
{
private:
  int iKor;
  int iEng;
  int iMath;

public:
  void Initialize()
  {
    iKor = 10;
    iEng = 20;
    iMath = 30;
  }

  void Output()
  {
    printf_s("국어 점수 : %d\n", iKor);
    printf_s("영어 점수 : %d\n", iEng);
    printf_s("수학 점수 : %d\n", iMath);
  }
};




int main(void)
{
  //** [01] 정보 은닉 예제

  /*
  Object Obj;

  Obj.iKor;
  Obj.iEng;
  Obj.iMath;


  printf_s("국어 점수 입력 : ");
  scanf_s("%d", &Obj.iKor);

  printf_s("영어 점수 입력 : ");
  scanf_s("%d", &Obj.iEng);

  printf_s("수학 점수 입력 : ");
  scanf_s("%d", &Obj.iMath);

  printf_s("국어 점수 : %d\n", Obj.iKor);
  printf_s("영어 점수 : %d\n", Obj.iEng);
  printf_s("수학 점수 : %d\n", Obj.iMath);
  */










  /*************************************

  //** [02] 캡슐화 예제1

  **************************************/

  /*
  tagStudent tStudent[2];

  tStudent[0].iKor = 1;
  tStudent[0].iEng = 2;
  tStudent[0].iMath = 3;


  tStudent[1].iKor = 100;
  tStudent[1].iEng = 200;
  tStudent[1].iMath = 300;


  tStudent[0].Output();
  tStudent[1].Output();
  */










  /*************************************

  //** [03] 캡슐화 예제2

  **************************************/

  /*
  Student Student[2];

  Student[0].iKor = 1;
  Student[0].iEng = 2;
  Student[0].iMath = 3;

  Student[1].iKor = 100;
  Student[1].iEng = 200;
  Student[1].iMath = 300;

  Student[0].Output();

  Student[1].Output();
  */





  /********************************
  
  //** [04] 정보은닉 & 캡슐화 응용
  
  *********************************/
  /*
  Player p;

  p.Initialize();
  p.Output();
  */



  //** 절차지향 언어는 절차를 중시하고 객체지향 언어는 객체를 중시한다.
  //** 절차지향적 코드가 순차적으로 실행된다면 객체지향은 어떻게 실행될지 생각해보자.


//** 언어 || 스크립트
//** 자동형 || 수동형


//** 스크립트 개념의 예

//** 목표 : 게임을 접속하는 것.
//** 순서 
//** 1. 컴퓨터의 위치를 탐색한다.
//** 2. 문제가 없다면 나와의 거리를 계산하고 해당 위치로 이동한다.
//** 3. 이동간에 문제가 발생 할 수 도 있기때문에 예외처리를 해준다.
//** 4. 컴퓨터 앞에 도착했는지 확인하고 만약에 도착했다면 컴퓨터의 전원을 켠다. (탐색 먼저진행 후)
//** 5. 컴퓨터의 전원이 켜질수 있는 상태인지 확인하고 문제가 있다면 해결 및 예외처리를 해주고 없다면 컴퓨터를 켠다.
//** 6. 컴퓨터의 주변기기가 어디에 위치해 있는지 탐색후 정상 장동하는지 확인.
//** 7. 프로그램을 가동시킬수 있는 상태인지 확인후 정상이라면 프로그램을 실행.

  return 0;
}




