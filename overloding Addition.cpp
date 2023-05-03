#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}
float sum(float a,float b)
{
	return a+b;
}
main()
{
	cout<<"total = "<<sum(10,20)<<endl;
	cout<<"total = "<<sum(10,20,30)<<endl;
	cout<<"total = "<<sum(10.5f,20.55f)<<endl;
}
