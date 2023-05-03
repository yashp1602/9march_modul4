#include<iostream>
using namespace std;
class student
{
	public:
		void roll_number()
		{
			cout<<"Roll Number = 1"<<endl;
		}
};
class test
{
	public:
		void mark()
		{
			cout<<"scienc = 46"<<endl;
			cout<<"maths = 66"<<endl;
		}
};
class result : public student, public test
{
	public:
		void total_mark()
		{
			cout<<"total mark = 112"<<endl;
		}
};
main()
{
	result obj;
	obj.roll_number();
	obj.mark();
	obj.total_mark();
}
Multilevel Inheritance.cpp
Displaying Multiple Inheritance.cpp.
