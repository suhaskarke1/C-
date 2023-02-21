# include<iostream>

using namespace std;

class Base
{
	public :
	int A,B;
	
	Base()
	{
	cout<<"Inside A Base Constructor"<<"\n";
	}
	~Base()
	{
		cout<<"Inside Base Destructor "<<"\n";
		
	}
	void fun()
	{
		cout<<"Inside Base Fun"<<"\n";
	}
};

class Derived :public Base
{
	public :
	int X,Y;
	Derived()
	{
		cout<<"Inside Derived Constructor \n";
	}
	~ Derived()
	{
		cout<<"Inside Derived Destructor \n";
	}
	void gun()
	{
		cout<<"Inside gun Derived\n";
		
	}
};
int main()
{
	
	//Derived dobj;//static memory allocation
	
	Derived * ptr=NULL;
	ptr =new Derived;// Dyanamic memory allocation
	
	ptr->fun();
	ptr->gun();
	
	delete ptr;
	return 0;
}