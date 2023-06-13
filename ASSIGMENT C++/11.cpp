#include<iostream>
#include <conio.h>
using namespace std;
class swap
{
	private:
		int x,y;
		public:
			void getdata()
			{
				cout<<"enter value of x,y";
				cin>>x>>y;
				cout<<"before swapping x"<<x<<"y"<<y;
			}
			void display()
			{
				cout<<"\nafter swpping x"<<x<<"y"<<y;
			}
			friend void swapno(swap &s);
};
void swap(swapno &s)
{
	int temp;
	temp=s.x
	s.x=s.y;
	s.y=temp;
}
void main()
{
	swap s;
	s.getdata();
	swapno(s);
	s.display();
	getch();
}
