#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int num,result;
	cout<<"enter the number";
	cin>>num;
	result=factorial(num);
	cout<<"factorial is"<<result;
	return 0;
}
int factorial(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
