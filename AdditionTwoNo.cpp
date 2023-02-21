# include<iostream>

using namespace std;

int Addition(int iNo1,int iNo2)
{
	int Sum=0;
	Sum=iNo1+iNo2;
}
int main()
{
	int i=11;
	int j=10;
	int iRet=0;
	iRet=Addition(i,j);
	cout<<"Addition is :"<<iRet<<"\n";
	
	return 0;
}