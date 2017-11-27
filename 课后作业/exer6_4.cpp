#include<iostream.h>
#define N 20
void main()
{
	int i,a[N];
	cout<<"前"<<N<<"项为:"<<endl;
	for(i=0;i<N;i++)
	{
		if(i==0||i==1)
		{
			a[i]=1;
		}
		else
			a[i]=a[i-1]+a[i-2];
		cout<<"第"<<i+1<<"项 "<<a[i]<<endl;
	}

}