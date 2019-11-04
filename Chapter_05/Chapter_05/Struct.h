#pragma once
typedef struct tagVector3
{
	float x, y, z;
	tagVector3() {};
	tagVector3(float _x, float _y) :x(_x), y(_y), z(0) {};
	tagVector3(float _x, float _y, float _z) :x(_x), y(_y), z(_x) {};


}Vector3;


typedef struct Student
{
	int number;
	string name;
	int score;
};