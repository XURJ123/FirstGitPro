#include<stdio.h>
#include<iostream.h>
void fun(char a[],char b[])
{
	int i=0,j=0;
	while(a[i++]!='\0');
	i--;
	while(b[j]!='\0')
	{
		a[i++]=b[j++];
	}
	a[i]='\0';
}
void main()
{
	char a[100],b[100];
	cout<<"�������һ���ַ���:"<<endl;
	gets(a);
	cout<<"������ڶ����ַ���:"<<endl;
	gets(b);
	fun(a,b);
	cout<<"�µ��ַ���Ϊ:"<<endl;
	puts(a);
}