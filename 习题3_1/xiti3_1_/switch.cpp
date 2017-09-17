#include<iostream.h>
void main()
{
	int i,t;
	cout<<"Please input i:";
	cin>>i;
	if(i<10) t=1;
	if(i>=10&&i<=99) t=2;
	if(i>=100&&i<=999) t=3;
	if(i>=1000) t=4;
	switch(t)
	{
	case 1:cout<<i<<"<10\n";break;
	case 2:cout<<"10¡Ü"<<i<<"¡Ü99\n";break;
	case 3:cout<<"100¡Ü"<<i<<"¡Ü999\n";break;
	case 4:cout<<i<<"¡Ý1000\n";
	
	}


}