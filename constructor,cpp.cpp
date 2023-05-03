#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"Hello and welcome to student";
		}
		student(float a,float b)
		{
			cout<<"\n a = "<<a+b;
			cout<<"\n a = "<<a-b;
			cout<<"\n a = "<<a*b;
			cout<<"\n a = "<<a/b;
		}
};
main()
{
	student s1=student();
	student s2=student(12,25);
}
