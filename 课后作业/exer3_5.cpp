#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,i,s;
	cout<<"������һ����λ��:";
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		i=(a+b+c)/2;
		s=sqrt(i*(i-a)*(i-b)*(i-c));
		cout<<"�����ε����Ϊ:"<<s<<endl;
	}
	else
		cout<<"�޷�����������"<<endl;

}