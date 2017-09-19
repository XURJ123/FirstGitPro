#include<iostream.h>
void main()
{
	int i;
	cout<<"Please input i:";
	cin>>i;
	if(i<10)
		 cout<<"小于10"<<endl;
	else
		if(i>=10&&i<=99)
			cout<<"10~99"<<endl;
		else
			if(i>=100&&i<=999)
				cout<<"100~999"<<endl;
			else
				cout<<i<<"大于1000"<<endl;
}