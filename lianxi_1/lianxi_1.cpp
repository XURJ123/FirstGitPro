#include<iostream.h>
float fun(int);
void main()
{
	int n;
	float s;
	cout<<"请输入一个数:";
	cin>>n;
	s=fun(n);
	cout<<"s="<<s<<endl;
}
float fun(int n)
{
	int i;
	float s,t;
	for(i=1,t=0,s=0;i<=n;i++)
	{
		t=t+i;
		s=s+1/t;
	}
	return s;
}
