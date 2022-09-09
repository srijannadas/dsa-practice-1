#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;
class bank
{
	private:
		string pin,id,phone,pass,name,fname,add;
		float balance;
	public:
		void menu();
		void bank_management();
		void atm_management();
		void new_user();
		void already_user();
		void deposit();
		void withdraw();
		void payment_option();
		void tranfer_option();
		void search();
	    void edit();	
		void Delete();
		void show();
		void show_payment();
		void user_balance();
		void withdrwa_atm();
		
};
void introduction()
{
	cout<<"\n\n\n\t\t";
	for(int i=1;i<=80;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t";
	for(int i=0;i<=64;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t\t";
	for(int i=0;i<=40;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"\n\t\t\t\t\tBank ATM Management System"<<endl;
	cout<<"\n\t\t\t\t";
		for(int i=1;i<=40;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t";
	for(int i=0;i<=64;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t";
	for(int i=0;i<=80;i++)
	{
		cout<<"*";
	}
	getch();
	system("cls");
	cout<<"\n\n\t\t\t";
	for(int i=0;i<=60;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t\t";
	for(int i=0;i<=45;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t\t\tMy Best Friend Forever";
	cout<<"\n\t\t\t\t\t1.Aaryan raj B.tech Hons.(Ece)";
	cout<<"\n\t\t\t\t\t2.Abhishek Kumar";
	cout<<"\n\t\t\t\t";
	for(int i=0;i<=45;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t";
	for(int i=0;i<=60;i++)
	{
		cout<<"*";
	}
	getch();
	system("cls");
	cout<<"\n\n\n\t\t\t";
	for(int i=0;i<=70;i++)
	{
	cout<<"*";
    }
    cout<<"\n\t\t\t";
    for(int i=0;i<=70;i++)
    {
    	cout<<"*";
	}
	cout<<"\n\t\t\t\t\tSoftwere developer Introduction";
	cout<<"\n\t\t\t\t\tName: Vishal Kumar";
	cout<<"\n\t\t\t\t\tCollege: ITM GOI GWALIOR";
	cout<<"\n\t\t\t\t\tDegree Pursuing: B.tech IT(3rd Year)";
	cout<<"\n\t\t\t\t\tContact: 9006033041";
	cout<<"\n\t\t\t\t\tEmail: v4vishal7g@gmail.com";
	cout<<"\n\t\t\t";
	for(int i=0;i<=70;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t";
	for(int i=0;i<=70;i++)
	{
		cout<<"*";
	}
	getch();
	system("cls");
}
   void bank::menu()
   {
   	p:
   	int choice;
   	char ch;
   	string pin,pass,email;
   	system("cls");
   	cout<<"\n\n\t\tControl Panel"<<endl;
   	cout<<"1.Bank Management"<<endl;
   	cout<<"2.Atm Management"<<endl;
   	cout<<"Enter Your Choice:";
   	cin>>choice;
   	switch(choice)
   	{
   		case 1:
   			cout<<"\n\n\t\t Login Account";
   			cout<<"\n\nE-mail:-";
   			cin>>email;
   			cout<<"\n\n\t\tPin Code:-";
   			for(int i=1;i<=5;i++)
   			{
   				ch=getch();
   				pin=pin+ch;
   				cout<<"*";
		    }
		    cout<<"\n\n\t\tPassword:-";
			for(int i=1;i<=5;i++)
   		      {
   				ch=getch();
   				pass=pass+ch;
   				cout<<"*";
			  }
			  if(email=="v4vishal7g@gmail.com" && pin=="91289" && pass=="90060")
			  {
			  	bank_management();
			  }
			  else
			  {
			  	cout<<"\n\nYour Email, Pin & Paswword is Wrong";
			  }
   			break;
   			case 2:
   			atm_management();
   				break;
   				case 3:
   					exit(0);
   					default:
   						cout<<"\n\nInvalid Value Please Try Again..";
	   }
   	  getch();
   	  goto p;
   }
   void bank::bank_management()
   {
   	    p:
   	    int choice;
   	   system("cls");
   	   cout<<"\n\n\t\tBank Management System"<<endl;
   	   cout<<"1.New User"<<endl;
   	   cout<<"2.Already User"<<endl;
   	   cout<<"3.Depost Option"<<endl;
   	   cout<<"4.Withdraw Option"<<endl;
   	   cout<<"5.Transfer option"<<endl;
   	   cout<<"6.Payment Option"<<endl;
   	   cout<<"7.Search user record"<<endl;
   	   cout<<"8.Edit User Record"<<endl;
   	   cout<<"9.Delet User Record"<<endl;
   	   cout<<"10.Show All Record"<<endl;
   	   cout<<"11.Payment All Record"<<endl;
   	   cout<<"12.Go Back"<<endl;
   	   cout<<"Enter Your Choice:-";
   	   cin>>choice;
   	   switch(choice)
   	   {
   	   	case 1:
   	   		new_user();
   	   		break;
   	   	case 2:
   	   		already_user();
   	   		break;
   	   	case 3:
   	   	    deposit();
   	   		break;
   	   	case 4:
   	   		withdraw();
   	   	break;
   	   	case 5:
   	   		tranfer_option();
   	   		break;
   	   	case 6:
   	   		payment_option();
   	   		break;
		case 7:
			search();
   	   		break;
   	   	case 8:
   	   		edit();
   	   		break;
   		case 9:
   			Delete();
   	   		break;
   	   	case 10:
   	   		show();
   	   		break;
   	   	case 11:
   	   		show_payment();
   	   		break;
   	   	case 12:
   	   		menu();
   	   		break;
   	   		default:
   	   		cout<<"\n\nInvalid Value Please Try Again..";			
		  }
		  getch();
		  goto p;
   }
   void bank::atm_management()
   {
   	p:
   	    int choice;
   	   system("cls");
   	   cout<<"\n\n\t\tAtm Management System"<<endl;
   	   cout<<"1.User Login & Chek Balance"<<endl;
   	   cout<<"2.Withdraw Amount"<<endl;
   	   cout<<"3.Account Detailes"<<endl;
   	   cout<<"4.Go back"<<endl;
   	   cout<<"Enter Your Choice:-";
   	   cin>>choice;
   	   switch(choice)
   	   {
   	   	case 1:
   	   		user_balance();
   	   		break;
   	   		case 2:
   	   			withdrwa_atm();
   	   			break;
   	   			case 3:
   	   				
   	   				break;
   	   				case 4:
   	   					menu();
   	   					default:
   	   						cout<<"\n\nInvalid Value Please Try Again..";			
		  }
		  getch();
		  goto p;
}
void bank::new_user()
{
	p:
	system("cls");
	fstream file;
	int p;
	float b;
	string n,f,pa,a,ph,i;
	cout<<"\n\n\t\tAdd New User"<<endl;
	cout<<"\n\nUser Id:-";
	cin>>id;
	cout<<"\n\n\t\t Name:-";
    cin>>name;
	cout<<"\n\n father Name:-";
	cin>>fname;
	cout<<"\n\nAddress:-";
	cin>>add;
	cout<<"\n\nPin Code:-";
	cin>>pin;
	cout<<"\n\nPassword:-";
	cin>>pass;
	cout<<"\n\nPhone Number:-";
	cin>>phone;
	cout<<"\n\nCurrent Balance:-";
	cin>>balance;
    file.open("Bank.txt",ios::in);
    if(!file)
    {
    	file.open("bank.txt",ios::app|ios::out);
    	file<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
    	file.close();
	}
	else
	{
		file>>i>>n>>f>>a>>p>>pa>>ph>>b;
		while(!file.eof())
		{
			if(i==id)
			{
				cout<<"\n\nUser Id Alredy Exist.....";
				getch();
				goto p;
			}
			file>>i>>n>>f>>a>>p>>pa>>ph>>b;
		}
		file.close();
		file.open("bank.txt",ios::app|ios::out);
    	file<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
    	file.close();
	}
	cout<<"\n\nAdd New user Successfully"<<endl;
}
void bank::already_user()
{
	
	system("cls");
	cout<<"\n\nAlready User Account";
	fstream file;
	string t_id;
	int found=0;
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nFile Opening Error";
	}
	else
	{
		cout<<"\n\nUser Id:";
		cin>>t_id;
		file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
	    while(!file.eof())
	    {
	    	if(t_id==id)
	    	{
	    		system("cls");
	    		cout<<"\n\n\t\tAlready User Account";
	    		cout<<"\n\nUser Id:"<<id<<"  Pin Code: "<<pin<<"   password:-"<<pass;
			    found++;
			}
	       file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
		}
		file.close();
		if(found==0)
		{
			cout<<"\\nUser Id Can't Found....";
		}
	}
}
void bank::deposit()
{
	fstream file,file1;
	string t_id;
	float dep;
	int found=0;
	system("cls");
	cout<<"\n\n\t\tDeposit Amount Option"<<endl;
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nFile Opening Error";
	}
	else
	{
		cout<<"\n\nUser Id:";
		cin>>t_id;
		file1.open("bank1.txt",ios::app|ios::out);
		file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
	    while(!file.eof())
	    {
	    	if(t_id==id)
	    	{
	    		cout<<"\n\n\tEnter Amount You Want To Deposit:-";
	    		cin>>dep;
	    		balance=balance+dep;
	    		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
			    found++;
				cout<<"\n\n\t\t\tYour Amount: "<<dep<<"Successfully Deposit...";
			}
			else
			{
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
			}
	       file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==0)
		{
			cout<<"\\nUser Id Can't Found....";
		}
	}	
}
void bank::withdraw()
{
	string t_id;
	int with;
	int found=0;
	fstream file,file1;
	system("cls");
	cout<<"\n\n\t\tWithdraw Amount Option"<<endl;
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nFile Opening Error";
	}
	else
	{
		cout<<"\n\nUser Id:";
		cin>>t_id;
		file1.open("bank.txt",ios::out|ios::app);
		file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
	    while(!file.eof())
	    {
	    	if(t_id==id)
	    	{
	    		cout<<"\n\n\tEnter Amount You Want To Withdraw:-";
	    		cin>>with;
	    		if(balance>=with)
	    		{
	    		balance-=with;
	    		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
			    cout<<"\n\n\t\t\tYour Amount: "<<with<<"Successfully Withdraw..."<<endl;
			  }
			  else
			  {
			  	file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
			  	cout<<"\n\nYour Current Balance"<<balance<<"is less";
			  }
			  found++;
			}
			else
			{
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
			}
	       file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==0)
		{
			cout<<"\\nUser Id Can't Found....";
		}
    }
}
void bank::tranfer_option()
{
	fstream file,file1;
	string t_id,s_id;
	int amt,found=0;
	system("cls");
	cout<<"\n\n\tPayment Tranfer Option";
    file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nFile Opening Error";
	}
	else
	{
		   cout<<"\n\n\tEnter sender user id for transaction:-";
		   cin>>t_id;
		   cout<<"\n\nReciver User Id For Transaction:-";
		   cin>>s_id;
		   cout<<"\n\nEnter Transfer Amount:-";
		   cin>>amt;
		   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(s_id==id && amt>=balance)
					found++;
				else if(t_id==id)
					found++;
				 file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
			}
			file.close();
			if(found==2)
			{
				 file.open("bank.txt",ios::in);
				 file1.open("bank1.txt",ios::app|ios::out);
				 file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
				 while(!file.eof())
				 {
				 	if(s_id==id)
				 	{
				 		balance-=amt;
				 		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
					 }
					 else if(t_id==id)
					 {
				 		balance-=amt;
				 		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
					 }
					 else
					 {
				 		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
					 }
				 	file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
				 }
				 file.close();
				 file1.close();
				 remove("bank.txt");
		         rename("bank.txt","bank.txt");
			}
			else
			{
				cout<<"\n\n both Transaction user id's not found......";
			}
	}
}
void bank::payment_option()
{
	system("cls");
	int found=0;
	float amount;
	string t_id,b_name;
	SYSTEMTIME x;
	fstream file,file1;
	cout<<"\n\n\t\tBill Payment Option";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nFile Opening Error";
	}
	else
	{
		cout<<"\n\nUser Id:-";
		cin>>t_id;
		cout<<"\n\nBill Name:-";
		cin>>b_name;
		cout<<"\n\nBill Amount:-";
		cin>>amount;
		file1.open("bank1.txt",ios::app|ios::out);
	 file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
      while(!file.eof())
      {
      	if(t_id==id && amount<=balance)
      	{
      		balance-=amount;
      		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
      		found++;
		  }
		  else
		  {
		  	file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
		  }
      	file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
	  }
	  file.close();
	   file1.close();
	 remove("bank.txt");
      rename("bank.txt","bank.txt");
	  if(found==1)
	  {
	  	GetSystemTime(&x);
	  	file.open("bill.txt",ios::app|ios::out);
	  	file<<t_id<<" "<<b_name<<" "<<amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<"\n";
	  	file.close();
	  	cout<<"\n\n\t\t"<<b_name<<"bill Pay Sucessfully......";
	  }
	  else 
	  {
	  	cout<<"\n\n\t\tUser Id Or amount Invalid.....";
	  }	
	}
}
	void bank::search()
	{
		system("cls");
		fstream file;
		cout<<"\n\nSearch Record Option:";
		string t_id;
		int found=0;
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n\t\tFile Opening Error";
		}		
		else
		{
			cout<<"\n\nEnter Account You Want To Search:";
			cin>>t_id;
		   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id==id)
				{
					system("cls");
					cout<<"\n\nSearch Record Option:";
					cout<<"\n\n\nUser Id:-"<<id<<"  name:-"<<name<<"  Father Name:-"<<fname<<endl;
					cout<<"\nAddress:-"<<add<<" pin:-"<<pin<<" Password:-"<<pass<<" phone:-"<<phone<<endl;
					cout<<"\nCurrent balance:-"<<balance<<endl;
					found++;
				}
			   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
			}
			file.close();
			if(found==0)
			{
				cout<<"\n\nUser Id Can't Found...";
			}
		}
	}
void bank::edit()
{
	system("cls");
		int pi;
		string ph,p,n,f,a;
		float balance;
	fstream file,file1;
	cout<<"\n\n\n Edit User Record"<<endl;
	string t_id;
	int found=0;
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\tFile Opening Error";
	}
	else
	{
		cout<<"\n\n\nUser Id:-";
		cin>>t_id;
		file1.open("bank.txt",ios::app|ios::out);
	   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
		while(!file.eof())
			{
				if(t_id==id)
				{
					cout<<"\n\n\t\t Name:-";
                    cin>>n;
                    cout<<"\n\n father Name:-";
                    cin>>f;
	                cout<<"\n\nAddress:-";
                    cin>>a;
                    cout<<"\n\nPin Code:-";
	                cin>>pi;
                    cout<<"\n\nPassword:-";
                    cin>>p;
                    cout<<"\n\nPhone Number:-";
	                cin>>ph;
                    file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<<pi<<" "<<p<<" "<<ph<<" "<<balance<<" "<<endl;
				    cout<<"\n\nYour Record Udated Succesfully...";
				    found++;
				}
				else
				{
			    	file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
				}
			   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found==0)
			{
				cout<<"\n\nUser Id Can't Found...";
			}
	}
}
void bank::Delete()
{
		system("cls");
	fstream file,file1;
	cout<<"\n\n\n Edit User Record"<<endl;
	string t_id;
	int found=0;
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\tFile Opening Error";
	}
	else
	{
		cout<<"\n\n\nUser Id:-";
		cin>>t_id;
		file1.open("bank.txt",ios::app|ios::out);
	   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
		while(!file.eof())
			{
				if(t_id==id)
				{
				    cout<<"\n\nYour Record deleted Succesfully...";
				    found++;
				}
				else
				{
			    	file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
				}
			   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found==0)
			{
				cout<<"\n\nUser Id Can't Found...";
			}
    } 
}
void bank::show()
{
	system("cls");
	int found=0;
	cout<<"\n\n\tShow All Records"<<endl;
	fstream file;
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nFile opening Error";
	}
	else
	{
			file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
		while(!file.eof())
			{
				cout<<"\n\nUser Id:-"<<id<<endl;
				cout<<"\n\nName:-"<<name<<endl;
				cout<<"\n\nname:-"<<fname<<endl;
				cout<<"\n\nAddress:-"<<add<<endl;
				cout<<"\n\npin:-"<<pin<<endl;
				cout<<"\n\nPassword:-"<<pass<<endl;
				cout<<"\n\nPhone No.:-"<<phone<<endl;
				cout<<"\n\ncurrent balance:-"<<balance<<endl;
				cout<<"\n\n================================================";
			   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
			   found++;
			}
			
			file.close();
			if(found==0)
			{
				cout<<"\n\n data Base Is Empty....";
			}
	}
}
void bank::show_payment()
{
	system("cls");
	int found=0;
	string c_date;
	float amount;
	cout<<"\n\n\tShow Bill Records"<<endl;
	fstream file;
	file.open("bill.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nFile opening Error";
	}
	else
	{
			file>>id>>name>>amount>>c_date;
		while(!file.eof())
			{
				cout<<"\n\nUser Id:-"<<id<<endl;
				cout<<"\n\nBill Name:-"<<name<<endl;
				cout<<"\n\nBill Amount:-"<<amount<<endl;
				cout<<"\n\nDate:-"<<c_date<<endl;
				cout<<"\n\n================================================";
			   file>>id>>name>>amount>>c_date;
			   found++;
			}
			
			file.close();
			if(found==0)
			{
				cout<<"\n\n data Base Is Empty....";
			}
}
}
void bank::user_balance()
{
	system("cls");
	fstream file;
	string t_id,t_pin,t_pass;
	char ch;
	int found=0;
	cout<<"\n\n\tUser Login & Chek Balance";
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\n\n\tFile Openong error";
	}
	else
	{
		cout<<"\n\n\nUers id:-";
		cin>>t_id;
		cout<<"\n\n\nPin:-";
		for(int i=1;i<=5;i++)
		{
			ch=getch();
			t_pin+=ch;
			cout<<"*";
		}
		cout<<"\n\n\nPassword:-";
			for(int i=0;i<=5;i++)
		{
			ch=getch();
			t_pin+=ch;
			cout<<"*";
		}
	   file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
       while(!file.eof())
       {
       	if(t_id==id && t_pin==pin && t_pass==pass)
       	{
       		cout<<"\n\n\nyour current Balance is:-"<<balance;
       		found++;
		   }
		   	file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
	   }
	   file.close();
	   if(found==0)
	   {
	   	cout<<"\n\n\t\t User Id,pin & Password is Invalid";
	   }
	}
}
void bank::withdrwa_atm()
{
	system("cls");
	cout<<"";
	string t_id,t_pin,t_pass;
	int with;
	char ch;
	int found=0;
	fstream file,file1;
	system("cls");
	cout<<"\n\n\t\tWithdraw Amount Option"<<endl;
	file.open("bank.txt",ios::in);
	if(!file)
	{
		cout<<"\n\nFile Opening Error";
	}
	else
	{
		cout<<"\n\nUser Id:";
		cin>>t_id;
		cout<<"\n\nPin:-";
		for(int i=1;i<=5;i++)
		{
			ch=getch();
			t_pin+=ch;
			cout<<"*";
		}
			cout<<"\n\nPass:-";
		for(int i=1;i<=5;i++)
		{
			ch=getch();
			t_pass+=ch;
			cout<<"*";
		}
		file1.open("bank.txt",ios::out|ios::app);
		file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
	    while(!file.eof())
	    {
	    	if(t_id==id && t_pin==pin && t_pass==pass)
	    	{
	    		cout<<"\n\n\tEnter Amount You Want To Withdraw:-";
	    		cin>>with;
	    		if(balance>=with)
	    		{
	    		balance-=with;
	    		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
			    cout<<"\n\n\t\t\tYour Amount: "<<with<<"Successfully Withdraw..."<<endl;
			    cout<<"\n\nYour Current Balance:-"<<balance<<endl;
			  }
			  else
			  {
			  	file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
			  	cout<<"\n\nYour Current Balance"<<balance<<"is less";
			  }
			  found++;
			}
			else
			{
				file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<add<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<" "<<endl;
			}
	       file>>id>>name>>fname>>add>>pin>>pass>>phone>>balance;
		}
		file.close();
		file1.close();
		remove("bank.txt");
		rename("bank1.txt","bank.txt");
		if(found==0)
		{
			cout<<"\\nUser Id Can't Found....";
		}
    }
}

int main()
{
	bank obj;
	introduction();
	obj.menu();
}
