#include<iostream.h>
#include<iomanip.h>
float fun(double h)
{
	double a=h*100,b;
	if(a-(int)a>=0.5)
	{
		a=a+1;
		b=a/100;
	}
	else
	{
		b=a/100;
	}
	return h;
}
void main()
{
	double h,y;
	cout<<"请输入一个正数h:";
	cin>>h;
	float fun(double h);
	y=fun(h);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<y<<endl;
	cout.unsetf(ios::fixed);
}