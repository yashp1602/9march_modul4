#include<iostream>
using namespace std;
class person
{
	public:
		void name()
		{
			cout<<"Yash"<<endl;
		}
		void age()
		{
			cout<<"23"<<endl;
		}
};
class student:public person
{
	public:
		void percentage()
		{
			cout<<"Percentage = 98%"<<endl;
		}
};
class teacher : public student
{
	public:
		void salary()
		{
			cout<<"Salary = 78,000";
		}
};
main()
{
	teacher obj;
	obj.name();
	obj.age();
	obj.percentage();
	obj.salary();
}
