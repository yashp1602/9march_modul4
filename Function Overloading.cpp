#include<iostream>
using namespace std;
int area(int l,int w)
{
	return l+w;
}
int area(int a,int b,int c)
{
	return 1/2*a*b;
}
float area(float r)
{
	return 3.14*r*r;
}
main()
{
	cout<<"total = "<<area(10,20)<<endl;
	cout<<"total = "<<area(10,26)<<endl;
	cout<<"total = "<<area(10.5f)<<endl;
}
