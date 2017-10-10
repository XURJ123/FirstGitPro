#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,i,s;
	cout<<"请输入一个三位数:";
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		i=(a+b+c)/2;
		s=sqrt(i*(i-a)*(i-b)*(i-c));
		cout<<"三角形的面积为:"<<s<<endl;
	}
	else
		cout<<"无法构成三角形"<<endl;

}