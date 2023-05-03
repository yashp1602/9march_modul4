#include<iostream>
using namespace std;
class cricketer
{
	public:
		void run()
		{
			cout<<"total run = 10000"<<endl;
		}
};
class batsman : public cricketer
{
	public:
		void avg_run()
		{
			cout<<"average run = 1000"<<endl;
		}
};
main()
{
	batsman obj;
	obj.run();
	obj.avg_run();
}
