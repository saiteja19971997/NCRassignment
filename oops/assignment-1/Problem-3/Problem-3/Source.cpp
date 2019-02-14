#include<iostream>
using namespace std;
class complex
{
public:
	int real;
	int img;
	complex()
	{
		real = 0;
		img = 0;
	}
	complex(int x, int y)
	{
		real = x;
		img = y;
	}
	complex(int x)
	{

		real = x;
		img = x;
	}
	complex add(complex c1)
	{
		complex t;
		t.real = c1.real + real;
		t.img = c1.img + img;
		return t;
	}
	void display()
	{
		cout << real << "  " << img;
		getchar();
	}
	
	/*complex operator +(complex c)
	{
		complex t;
		t.real = real + c.real;
		t.img = img + c.img;
		return t;
	}*/
	
	//friend complex operator +(complex t1, complex t2);
	//friend complex operator *(int t, complex t1);
};
/*complex operator +(complex t1, complex t2)
{
	complex t;
	t.real = t1.real + t2.real;
	t.img = t1.img + t2.img;
	return t;
}
complex operator *(int x, complex t1)
{
	complex t;
	t.real = t1.real*x;
	t.img=t1.img*x;
	return t;
}*/
int main()
{
	complex c1(4, 3);
	complex c2(3, 4);
	complex c3;
	c3 = c2.add(c1);
	c3.display();
	return 0;
}