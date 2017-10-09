#include<iostream.h>
void main()
{
	int i;
	cout<<"Please input i:";
	cin>>i;
	switch(i/10)
	{
	case 0:cout<<"小于10\n";break;
		default:
		switch(i/100)
		{
		case 0:cout<<"10~99\n";break;
		    default:
	        switch(i/1000)
			{
	        case 0:cout<<"100~999\n";break;
	        default:cout<<"1000以上\n";
	}
	}
	}


}