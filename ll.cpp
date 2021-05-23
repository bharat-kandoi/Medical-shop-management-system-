#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("C:\Users\Chand Mal Kandoi\Desktop\project\login.txt");
	string u,p;
	string username;
	string password="";
	cout<<"\t\t\t\t\tPlease Login\n";
	cout<<"----------------------------------------------------------------\n";
	cout<<"Username - ";
	cin>>username;
	cout<<"Password- ";
	char ch;
	ch=_getch();
	while(ch!=13)//here 13 represents carriage return which represents when enter is presed the loop stops
	{
		password.push_back(ch);
		cout<<'*';
		ch=_getch();
	}
	fin>>p;
	if(password==p)
	{
		cout<<"access granted";
	}
	else
	{
		cout<<"\naccess denied";
		//login();
	}
	fin.close();
	return 0;
}
