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
	cout<<"请输入第一个字符串:"<<endl;
	gets(a);
	cout<<"请输入第二个字符串:"<<endl;
	gets(b);
	fun(a,b);
	cout<<"新的字符串为:"<<endl;
	puts(a);
}