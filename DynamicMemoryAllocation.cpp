# include<iostream>
using namespace std;

class Demo
{
	public :
	int X;
	int Y;
	
	Demo()
	{
		cout<<"Inside Constructor"<<"\n";
		
	}
	~ Demo()
	{
		cout<<"Inside destructor "<<"\n";
		
	}
	void fun()
	{
		cout<<"Inside fun \n";
	}
	
};

int main()
{
	//Demo obj //static
	Demo *ptr=NULL;
	
	ptr = new Demo;
	ptr->fun();
	cout<<"Value of X"<<ptr->X<<"\n";
	delete ptr;
	
	return 0;
}