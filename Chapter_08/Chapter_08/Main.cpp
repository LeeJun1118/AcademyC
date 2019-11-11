#define _crt_secure_no_warnings

#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <map>


using namespace std;

int main(void)
{
	/*list<int> Num;
	Num.push_back(1);
	
	for (list<int>::iterator iter = Num.begin(); iter != Num.end();iter++)
	{
		cout << *iter << endl;
		
	}*/
	 
	//map<int, int> NumberList;

	/*NumberList[0] = 1;
	NumberList[1] = 2;
	NumberList[2] = 3;
	NumberList[3] = 4;
	NumberList[4] = 5;

	cout << NumberList[0] << endl;*/

	/*NumberList.insert(make_pair(0, 1));
	cout << NumberList[0] << endl;*/

	/*map<int, string> NameList;

	NameList.insert(make_pair(0, "È«±æµ¿"));
	NameList.insert(make_pair(1, "ÀÓ²©Á¤"));
	
	for (map<int, string>::iterator iter = NameList.begin(); 
		iter != NameList.end(); iter++)
	{
		cout << (*iter).first << ":" << (*iter).second << endl;
	}*/

	map<int, list<string>> NameList;
	list<string> name;
	name.push_back("È«±æµ¿");
	name.push_back("ÀÓ²©Á¤");

	NameList.insert(make_pair(0,name));
	
	for (map<int, list<string>>::iterator iter = NameList.begin();
		iter != NameList.end(); iter++)
	{
		//cout << (*iter).first << endl;

		for (list<string>::iterator iter2 = (*iter).second.begin(); 
			iter2 != (*iter).second.end(); iter2++)
		{
			//cout << (*iter2) << endl;
			cout << (*iter).first << ". " << (*iter2) << endl;
		}
		cout << endl;

	}

	
	return 0;
}
