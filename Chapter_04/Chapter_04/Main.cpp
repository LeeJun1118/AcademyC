#include <iostream>
#include <list>
#include <vector>


using namespace std;

list<int> NumberList;


void AddNumber(int _iNumber);
void Output(int _iNumber);


int main(void)
{
	NumberList.push_back(1);
	NumberList.push_back(2);
	NumberList.push_back(3);
	
	AddNumber(10);
	AddNumber(20);
	AddNumber(30);

	for (list<int>::iterator iter = NumberList.begin(); 
		iter != NumberList.end(); ++iter)
	{
		cout << (*iter) << endl;
	}
/*
	string str1;
	str1 = "ABCDEFG";

	string str2;
	str2 = "ABCDEFG";

	str1 += str2;
	cout << str1 << endl;

	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i] << endl;
	}
*/

	/*
	for (int num : NumberList)
	{
		cout << num << endl;
	}
	*/


	return 0;
}

void AddNumber(int _iNumber)
{
	NumberList.push_back(_iNumber);
}

void Output(int _iNumber)
{

}