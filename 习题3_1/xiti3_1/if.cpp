#include<iostream.h>
void main()
{
	int i;
	cout<<"Please input i:";
	cin>>i;
	if(i<10)
		 cout<<i<<"<10"<<endl;
	else
		if(i>=10&&i<=99)
			cout<<"10¡Ü"<<i<<"¡Ü99"<<endl;
		else
			if(i>=100&&i<=999)
				cout<<"100¡Ü"<<i<<"¡Ü999"<<endl;
			else
				cout<<i<<"¡Ý1000"<<endl;
}