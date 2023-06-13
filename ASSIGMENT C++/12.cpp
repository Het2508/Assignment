#include<iostream>

class B;
class A
{
	protected : int x;
	public:void get(int i)
	{
		x=i;
	}
	friend void max(A,B);
};
class B
{
protected : int y;
	public:void get(int i)
	{
		y=i;
	}
	friend void max(A,B);
	};
	void max(A a,B b)
	{
	/*	if(a.x>b.y)
	{
		cout<<"A is max";
	}
	else
	{
		cout<<"B is max";
	}*/
		int temp;
		temp=a.x;
		a.x=b.y;
		b.y=temp;
		cout<<a.x;
		cout<<b.y;
	}
	int main()
	{
		clrscr();
		A a;
		B b;
		a.get(10);
		b.get(20);
		max(a,b);
		getch();
	}
