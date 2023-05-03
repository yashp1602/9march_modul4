#include<iostream>
using namespace std;
template <class T>
void swapping(T &a,T &b)
{
	T t=a;
	  a=b;
	  b=t;
}
main()
{
	char a='A',b='b';
	int x=10,y=20;
	cout<<"before swap A : "<<a<< "| B : "<<b<<endl;
	swapping(a,b);
	cout<<"after swap A : "<<a<< " | B : "<<b<<endl;
	
	cout<<"before swap x : "<<x<< " | Y : "<<y<<endl;
	swapping(x,y);
	cout<<"after swap x : "<<x<< "| Y : "<<y<<endl;

}
