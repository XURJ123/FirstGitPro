#include<iostream.h>
#define N 20
void main()
{
	int i,a[N];
	cout<<"ǰ"<<N<<"��Ϊ:"<<endl;
	for(i=0;i<N;i++)
	{
		if(i==0||i==1)
		{
			a[i]=1;
		}
		else
			a[i]=a[i-1]+a[i-2];
		cout<<"��"<<i+1<<"�� "<<a[i]<<endl;
	}

}