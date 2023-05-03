#include<iostream>
using namespace std;
class student
{
	int value=23;
	int amount=20000;
	int balance=100000;
	public:
		void getage()
		{
			cout<<"\nthe value is "<<value;
			cout<<"\nthe amount is "<<amount;
			cout<<"\nthe balance is "<<balance;
		}
};
main()
{
	student s1;
	s1.getage();
}
