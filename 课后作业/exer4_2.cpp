#include<iostream.h>
void main()
{
	int year,i,sum,leap;
	sum=0;
	for(year=2000,i=0;year<=3000;year++)
	{		
		if(year%400==0)
			leap=1;
		else
			if(year%4==0&&year%100!=0)
				leap=1;
			else
				leap=0;
		if(leap)
		{
			sum++;
			cout<<"\t"<<year;
			i++;
			if(i%10==0)
				cout<<endl;
		}
	}
	if(i%10!=0)
		cout<<endl<<"闰年的总年数为:"<<sum<<endl;

}