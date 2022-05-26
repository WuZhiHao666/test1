#include<iostream>
using namespace std;
int main()
{
	float a,b,result;
	char c;
	cout<<"请输入一个四则运算式：";
	cin>>a>>c>>b; 
	switch(c)
	{
		case'+':result=a+b;break;
		case'-':result=a-b;break;
		case'*':result=a*b;break;
		case'/':
		if(b==0)
		cout<<"除式分母为零";
		result=a/b;break;
		default :cout<<"非四则运算式";break; 
	 }
	 cout<<"结果为："<<result<<endl;
	 return 0;
}