#include<iostream.h>
float fun(int n)
{
	float s=0,a=0;
	int i;
	for(i=1;i<=n;i++)
	{
		a=a+i;
		s=s+1.0/a;
	}
	return s;
}
void main()
{
	int n;
	float S;
	cout<<"������һ����Ϊ0��������n:";
	cin>>n;
	S=fun(n);
	cout<<"S="<<S<<endl;
}