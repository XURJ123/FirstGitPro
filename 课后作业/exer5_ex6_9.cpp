#include<iostream.h>
void fun(int m)
{
	int i,n;
	for(i=1,n=0;i<=m;i++)
	{
		if(i%7==0||i%11==0)
		{
			cout<<i<<" ";
			n++;
		}
	}
	cout<<" n="<<n<<endl;
}
void main()
{
	int m;
	cout<<"������һ������m:";
	cin>>m;
	void fun(int m);
	fun(m);
}