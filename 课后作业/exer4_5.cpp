#include<iostream.h>
void main()
{
	int i,a=0;
	for(i=1;i<=99;i++)
	{
		if(i*i%10==i||i*i%100==i)
		{cout<<" "<<i;
		a++;
		if(a%5==0)
			cout<<endl;
		}
	}
	if(a%5!=0)
		cout<<endl;
}