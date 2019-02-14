#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	string name;
	char grade;
	int marks1,marks2,marks3;
};
class collegeCourse:public student
{
public:
	void set_data(string sname,int len,char grade,int mark1,int mark2,int mark3)
	{
		name = sname;
	}
	
	void display_name()
	{
		getchar();
		cout << name;
		getchar();

	}
};
int main()
{
	student s;
	collegeCourse c;
	string name;
	cout << "enter name";
	cin >> name;
	int len = name.length();
	c.set_data(name, len, 'a', 0, 0, 0);
	c.display_name();
	getchar();
	return 0;
	//getline(cin,name);

	

}