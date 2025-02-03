#include<iostream>
#include<fstream>
#include<string>

using namespace std;
void login();
void registration();
void forgot();

int main()
{
	int c;
	cout<<"\t\t\t_____________________________________________\n\n\n";
	cout<<"\t\t\t__ 		Welcome to Aushidhi              _\n\n\n";
	cout<<"\t\t\t__ 				MENU		              _\n\n\n";
	cout<<"\t\t\t__ 	                                      _\n\n\n";
	cout<<"\t\t |Press 1 to Login 						|\n"<<endl;
	cout<<"\t\t |Press 2 to Register 						|\n"<<endl;
	cout<<"\t\t |Press 3 to if you forgot password 			|\n"<<endl;
	cout<<"\t\t |Press 4  to EXIT	  						|\n"<<endl;
	cout<<"\n\t\t Please Enter your Choice					:"<<endl;
	cin>>c;
	cout<<endl;
	switch(c)
	{
		case 1:
			login();
			break;
			
		case 2:
			registration();
			break;
		case 3:
			forgot();
			break;
			
		case 4:
			cout<<"\t\t\t Thankyou!\n\n";
			break;
		default:
			system("cls");
			cout<<"\t\t Please Select Option Given above\n"<<endl;
			main();
			
	}
}
void login()
{
	int count;
	string userId,password,id,pass;
	system("cls");
	cout<<"\t\t\t Please Enter User Name & Passsword: "<<endl;
	cout<<"\t\t\t USERNAME : ";
	cin>>userId;
	cout<<"\\t\t\tPassword : ";
	cin>>password;
	
	ifstream input("records.txt");
	
	while(input>>id>>pass)
	{
		if(id==userId && pass==password)
		{
			count=1;
			system("cls");
			
		}
	}
	input.close();
	
	if(count==1)
	{
		cout<<userId;
		cout<<"\n LoGIN is SucessFull\n Thanks for login \n";
		main();
		
	}
	else{
		cout<<"\n LOgin  Error Plaese Check your username password\n";
		main();
		
	}
	
}
void registration(){
	string ruserId,rpassword,rid,rpass;
	system("cls");
	cout<<" Enter THe Username: ";
	cin>>ruserId;
	cout<<"Enter THe Password: ";
	cin>>rpassword;
	
	ofstream fout("records.txt", ios::app);
	fout<<ruserId<<' '<<rpassword<<endl;
	system("cls");
	cout<<"/n/t/t/t/ Regestriation is sucessfull\n";
	main();
	
	
}
void forgot()
{
	int option;
	system("cls");
	cout<<"\t\t\t you forgot the password Not worries\n ";
	cout<<"press 1 to search your id by username:"<<endl;
	cout<<"press 2 to go Back main menu:"<<endl;
	cout<<"Enter your choice:";
	cin>>option;
	switch(option)
	{
		case 1:{
			int count=0;
			string suserId,sId,spass;
			cout<<"\n\t\tEnter the Usename which you rtembered:";
			cin>>suserId;
			
			ifstream fin("records.txt");
			while(fin>>sId>>spass)
			{
				if(sId==suserId)
				{
					count=1;
					
					
				}
				
			}
			fin.close();
			if(count==1)
			{
				cout<<"\n\n Your Account is Found\n";
				cout<<"\n\n Your Password is :"<<spass;
				main();
				
			}
			else {
				cout<<"\n\t Sorry Your Account is Not Found\n:"<<endl;
				main();
			}
			break;
		}
		case 2:
			{
				main();
				
			}
			default:
				cout<<"\t\\t Wronrg choice! Plaese try again:"<<endl;
				forgot();
	}
}
