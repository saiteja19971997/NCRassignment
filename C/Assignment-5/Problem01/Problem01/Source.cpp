#include <iostream>
using namespace std;
class tym
{
public:
	int hr, min, sec;
	tym()
	{
		hr = 0;
		min = 0;
		sec = 0;
	}
	tym(int a, int b, int c)
	{
		hr = a;
		min = b;
		sec = c;
	}
	void display()
	{
		cout << " tym is" << hr << ":" << min << ":" << sec << endl;
	}
	
};
tym addi(tym t1, tym t2,tym t3)
{
	t3.hr = t1.hr + t2.hr;
	t3.min = t1.min + t2.min;
	t3.sec = t1.sec + t2.sec;
	return t3;
}
int main()
{
	tym t1(3,3,3);
	tym t2(6, 6, 6);
	tym t3;
	t3=addi(t1, t2,t3);
	t3.display();
	getchar();
	return 0;
}