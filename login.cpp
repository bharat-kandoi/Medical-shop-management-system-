#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void welcome();
void order();
void change_password();
void change_password()
{
	string u,p;
	string pass="";
	string np="";
	ofstream fout;
	ifstream fin;
	fin.open("loginp.xls");
	//fout.open("loginp.xls");
	cout<<"\t\t\t\tCHANGE PASSWORD"<<endl;
	cout<<"-*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*-";
	cout<<"\nOld Password - ";
	char ch;
	ch=getch();
	while(ch!=13)//here 13 represents carriage return which represents when enter is presed the loop stops
	{
		pass.push_back(ch);
		cout<<'*';
		ch=getch();
    }
    string cp="";
	cout<<"\nNew Password - ";
	ch=getch();
	while(ch!=13)//here 13 represents carriage return which represents when enter is presed the loop stops
	{
		np.push_back(ch);
		cout<<'*';
		ch=getch();
	}
	cout<<"\nConfirm Password - ";
	ch=getch();
	while(ch!=13)//here 13 represents carriage return which represents when enter is presed the loop stops
	{
		cp.push_back(ch);
		cout<<'*';
		ch=getch();
	}
	fin>>u>>p;
	if(pass==p)
	{
		if(np==cp)
		{
			fout.open("loginp.xls");
			cout<<"\npassword sucessfully changed"<<endl;
			cout<<"press any key to go back";
			fout<<u<<endl<<np<<endl;
			getch();
			system("cls");
			welcome();
		}
		else
		{
			cout<<"/nnew password and confirm password are not matched"<<endl;
			cout<<"press any key to try again";
			getch();
			change_password();
		}
	}
	else
	{
		cout<<"\nsorry old password is not matched"<<endl;
		cout<<"Press any key to again change password";
		getch();
		system("cls");
		change_password();
	}
	fin.close();
	fout.close();
	}
void sales();
void sell();
void sales()
{
	ifstream fin;
	fin.open("sell.xls");
	char ch;
	ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();
	}
	fin.close();
}
void see_order();
void order()
{
	//ifstream fin;
	ofstream fout;
	fout.open("order.xls",ios::app);
	//fin.open("order.xls");
	string c,m;
	int q;
	cout<<"Enter Company Name-";
	cin>>c;
	cout<<"Enter Medicine Name-";
	cin>>m;
	cout<<"Enter Quantity-";
	cin>>q;
		fout<<"Company Name-";
	fout<<c<<endl;
	fout<<"Medicine Name-";
	fout<<m<<endl;
	fout<<"Quantity-";
	fout<<q<<endl;
		cout<<"press any key to go back - "<<endl;
		getch();//it i used to take a character
		system("cls");
		welcome();
		//fin.close();
	fout.close();
}
void see_order()
{
	ifstream fin;
	fin.open("order.xls");
	char ch;
	ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();
	}
	fin.close();
}
void sell()
{
	//ifstream fin;
	ofstream fout;
	fout.open("sell.xls",ios::app);
	//fin.open("sell.xls");
	string name,sex,presc,prb,med;
	int age;
	long long int contact;
	cout<<"Sell Medicine"<<endl;
	cout<<"_______________________"<<endl;
	cout<<"Name-";
	cin>>name;
	cout<<"Age-";
	cin>>age;
	cout<<"Sex-";
	cin>>sex;
	cout<<"Contact No.-";
	cin>>contact;
	cout<<"Prescription-";
	cin>>presc;
	cout<<"Problem-";
	cin>>prb;
	cout<<"Medicine-";
	cin>>med;	
	fout<<"Sell Medicine"<<endl;
	fout<<"--------------------------------------------"<<endl;
	fout<<"Name-";
	fout<<name<<endl;
	fout<<"Age-";
	fout<<age<<endl;
	fout<<"Sex-";
	fout<<sex<<endl;
	fout<<"Contact No.-";
	fout<<contact<<endl;
	fout<<"Prescription-";
	fout<<presc<<endl;
	fout<<"Problem-";
	fout<<prb<<endl;
	fout<<"Medicine-";
	fout<<med<<endl;	
		cout<<"press any key to go back - "<<endl;
		getch();//it i used to take a character
		system("cls");
		welcome();
		//fin.close();
	fout.close();
}
void contact();
void contact()
{
	//ifstream fin;
	//ofstream fout;
	//fout.open("contact.xls");
	//fin.open("contact.xls");
		cout<<"\t\t\t\tCONTACT US"<<endl<<"\t\t\t------------------------------------------"<<endl;
		cout<<"1."<<"MOBILE NO. - 0121-5252455"<<endl<<"2."<<"PHONE NO. - 9927015464"<<endl<<"3.EMERGENCY NO. - 181"<<endl;
		cout<<"press any key to go back - "<<endl;
		getch();//it i used to take a character
		system("cls");
	//		fout<<"\t\t\t\tCONTACT US"<<endl<<"\t\t\t------------------------------------------"<<endl;
	//	fout<<"1."<<"MOBILE NO. - 0121-5252455"<<endl<<"2."<<"PHONE NO. - 9927015464"<<endl<<"3.EMERGENCY NO. - 181"<<endl;
		welcome();
		//fin.close();
	//fout.close();
}
void welcome()
	{
		int i;
		cout<<"\t\t\t\tWelcome to PharmEasy"<<endl;
		cout<<"-*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*--*-*-*-"<<endl;
		cout<<"1."<<"ORDER MEDICINE"<<endl<<"2."<<"CHECK SALES"<<endl<<"3."<<"SELL MEDICINE"<<endl<<"4."<<"SEE ORDERS"<<endl<<"5."<<"CONTACT US"<<endl<<"6.Change Password"<<endl;
        cout<<"Select any option -- ";
        cin>>i;
        switch(i)
        {
        	case 1:
        		system("cls");
        		order();
        		break;
        		case 2:
					system("cls");
					sales();
					cout<<"\npress any key to go back";
					getch();
					system("cls");
					welcome();
					break;
					case 3:
					system("cls");
					sell();
					break;
					case 4:
						system("cls");
						see_order();
						cout<<"\npress any key to go back";
					getch();
					system("cls");
					welcome();
					
						 break;
							 case 5:
						 system("cls");
						 contact();
						 break;
						 case 6:
						 	system("cls");
						 	change_password();
						 	cout<<"\npress any key to go back";
					getch();
					system("cls");
					welcome();
						 break;    							
						 default:
					 system("cls");
					 cout<<"Wrong Choice\n";
					 welcome();			        						
							}
	}
void login()
{
	ifstream fin;
	//ofstream fout;
	//fout.open("loginp.xls");
	fin.open("loginp.xls");
	string u,p;
	string username;
	string password="";
	cout<<"\t\t\t\t\tPlease Login\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"Username - ";
	cin>>username;
	cout<<"Password- ";
	char ch;
	ch=getch();
	while(ch!=13)//here 13 represents carriage return which represents when enter is presed the loop stops
	{
		password.push_back(ch);
		cout<<'*';
		ch=getch();
}
	//fout<<username<<endl<<password<<endl;
	fin>>u>>p;
	if(username==u && password==p)
	{
		system("cls");
		cout<<"\naccess granted"<<endl;
		welcome();
	}
	else
	{
		cout<<"\naccess denied"<<endl;
		cout<<"Press any key to again login";
		getch();
			system("cls");
		login();
	}
	fin.close();
	//fout.close();
}
int main()
{
	system("cls");
	getch();
	login();
	return 0;
}
