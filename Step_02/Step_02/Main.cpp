#include <iostream>








//** ��ü�������� Ư¡ 5����.

//** 1. ��������.
//** 2. ĸ��ȭ.

//** 3. �߻�ȭ.
//** 4. ���.
//** 5. ������.


// struct  = ����ü 
//** struct => class



//** [01] ���� ���� ����
class Object
{
  int iKor;
  int iEng;
  int iMath;
};



//** [02] ĸ��ȭ ����1
struct tagStudent
{
  int iKor;
  int iEng;
  int iMath;

  void Output()
  {
    printf_s("���� ���� : %d\n", iKor);
    printf_s("���� ���� : %d\n", iEng);
    printf_s("���� ���� : %d\n", iMath);
  }
};



//** [03] ĸ��ȭ ����2
class Student
{
public:
  int iKor;
  int iEng;
  int iMath;

  void Output()
  {
    printf_s("���� ���� : %d\n", iKor);
    printf_s("���� ���� : %d\n", iEng);
    printf_s("���� ���� : %d\n", iMath);
  }
};




//** [04] �������� & ĸ��ȭ ����
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
    printf_s("���� ���� : %d\n", iKor);
    printf_s("���� ���� : %d\n", iEng);
    printf_s("���� ���� : %d\n", iMath);
  }
};




int main(void)
{
  //** [01] ���� ���� ����

  /*
  Object Obj;

  Obj.iKor;
  Obj.iEng;
  Obj.iMath;


  printf_s("���� ���� �Է� : ");
  scanf_s("%d", &Obj.iKor);

  printf_s("���� ���� �Է� : ");
  scanf_s("%d", &Obj.iEng);

  printf_s("���� ���� �Է� : ");
  scanf_s("%d", &Obj.iMath);

  printf_s("���� ���� : %d\n", Obj.iKor);
  printf_s("���� ���� : %d\n", Obj.iEng);
  printf_s("���� ���� : %d\n", Obj.iMath);
  */










  /*************************************

  //** [02] ĸ��ȭ ����1

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

  //** [03] ĸ��ȭ ����2

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
  
  //** [04] �������� & ĸ��ȭ ����
  
  *********************************/
  /*
  Player p;

  p.Initialize();
  p.Output();
  */



  //** �������� ���� ������ �߽��ϰ� ��ü���� ���� ��ü�� �߽��Ѵ�.
  //** ���������� �ڵ尡 ���������� ����ȴٸ� ��ü������ ��� ������� �����غ���.


//** ��� || ��ũ��Ʈ
//** �ڵ��� || ������


//** ��ũ��Ʈ ������ ��

//** ��ǥ : ������ �����ϴ� ��.
//** ���� 
//** 1. ��ǻ���� ��ġ�� Ž���Ѵ�.
//** 2. ������ ���ٸ� ������ �Ÿ��� ����ϰ� �ش� ��ġ�� �̵��Ѵ�.
//** 3. �̵����� ������ �߻� �� �� �� �ֱ⶧���� ����ó���� ���ش�.
//** 4. ��ǻ�� �տ� �����ߴ��� Ȯ���ϰ� ���࿡ �����ߴٸ� ��ǻ���� ������ �Ҵ�. (Ž�� �������� ��)
//** 5. ��ǻ���� ������ ������ �ִ� �������� Ȯ���ϰ� ������ �ִٸ� �ذ� �� ����ó���� ���ְ� ���ٸ� ��ǻ�͸� �Ҵ�.
//** 6. ��ǻ���� �ֺ���Ⱑ ��� ��ġ�� �ִ��� Ž���� ���� �嵿�ϴ��� Ȯ��.
//** 7. ���α׷��� ������ų�� �ִ� �������� Ȯ���� �����̶�� ���α׷��� ����.

  return 0;
}




