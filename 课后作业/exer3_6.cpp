#include<iostream.h>
void main()
{
	float r,l,s,pi=3.14159;
	int k;
	cout<<"������Բ�İ뾶r������1,2,3�е�һ��:";
	cin>>r>>k;
	l=2*pi*r;
	s=pi*r*r;
	switch(k)
	{
	case 1:cout<<"Բ�����Ϊ:"<<s<<endl;break;
	case 2:cout<<"Բ���ܳ�Ϊ:"<<l<<endl;break;
	case 3:cout<<"Բ�����Ϊ:"<<s<<endl<<"Բ���ܳ�Ϊ:"<<l<<endl;
	
	}

}