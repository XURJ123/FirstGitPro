#include<iostream.h>
void main()
{
	float r,l,s,pi=3.14159;
	int k;
	cout<<"请输入圆的半径r并输入1,2,3中的一个:";
	cin>>r>>k;
	l=2*pi*r;
	s=pi*r*r;
	switch(k)
	{
	case 1:cout<<"圆的面积为:"<<s<<endl;break;
	case 2:cout<<"圆的周长为:"<<l<<endl;break;
	case 3:cout<<"圆的面积为:"<<s<<endl<<"圆的周长为:"<<l<<endl;
	
	}

}