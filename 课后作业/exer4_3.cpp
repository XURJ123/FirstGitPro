#include<iostream.h>
void main()
{
	int i,a,sum=0;
	cout<<"请输入一个正整数:";
	cin>>i;
	for(a=0;a==0;sum++)
	{
		if(i%2!=0)
			i=i*3+1;
		else
			i=i/2;
		if(i==1)
			a=1;
		else
			a=0;
	}
	cout<<"共有"<<sum-1<<"个步骤"<<endl;

}