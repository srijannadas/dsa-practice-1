#include<iostream>
#include<conio.h>
using namespace std;
class singlylinklist
{
	private:
		struct node
		{
			int data;
			node *next_add;
		};
		node* head=NULL;
	public:
	   int insert(int &n);
	   void display();
	   void search();
	   void sum_count();
	   void update();
	   void Delete();
};
int singlylinklist::insert(int &n)
{
	node *new_node=new node();
	new_node -> data = n;
	new_node->next_add=NULL;
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
		node *ptr=head;
		while(ptr -> next_add != NULL)
		{
			ptr=ptr->next_add;
		}
		ptr->next_add=new_node;
	}
}

void singlylinklist::display()
{
	system("cls");
	cout<<"\n\nDisplay Record";
	if(head==NULL)
	{
		cout<<"\n\nLink List Is Empty";
	}
	else
	{
		node *ptr=head;
		while(ptr!=NULL)
		{
			cout<<"\n Value :- "<<ptr->data<<" ";
			ptr=ptr->next_add;
		}
	}
}
void singlylinklist::search()
{
	system("cls");
	int n,count=0;
	cout<<"\n\n\t\tSaerch Record";
	if(head==NULL)
	{
		cout<<"\n\nLinklist Is Empty";
	}
	else
	{
		cout<<"\n\nSearch value:-";
		cin>>n;
		node *ptr =head;
		while(ptr!=NULL)
		{
			if(n==ptr->data)
			{
				cout<<"\n\n Value id found :- "<<n;
				count++;
			}
			ptr=ptr->next_add;
		}
		if(count==0)
		{
			cout<<"\n\n Value Not Found :- "<<n;
		}
	}
}
void singlylinklist::sum_count()
{
	system("cls");
	int sum=0,count=0;
	cout<<"\n\n\t\t\tSum And Count";
	if(head==NULL)
	{
		cout<<"\n\n\tlinklist Is Empty";
	}
	else
	{
		node *ptr=head;
		while(ptr!=NULL)
		{
			sum=sum+ptr->data;
			count++;
			ptr=ptr->next_add;
		}
		cout<<"\n\nTotal Value of Node in Linklist:-"<<sum;
		cout<<"\n\ntotal Nodes In Link List:-"<<count;
	}	
}
void singlylinklist::update()
{
	system("cls");
	int n,count=0;
	cout<<"\n\n\t\t\tUpdate";
	if(head==NULL)
	{
		cout<<"\n\nLink List is Empty";
	}
	else
	{
	    cout<<"\n\nEnter Value for Update:-";
	    cin>>n;
		node* ptr=head;
		while(ptr!=NULL)
		{
			if(n==ptr->data)
			{
				cout<<"\n\n New Value:-";
				cin>>n;
				ptr->data=n;
				count++;
				break;
			}
			ptr=ptr->next_add;
		}
		if(count==0)
		{
			cout<<"\n\nNot Record Found";
		}
	}
}
void singlylinklist::Delete()
{
	system("cls");
	cout<<"\n\n\t\tDelete record";
	int n,count=0;
	if(head==NULL)
	{
		cout<<"\n\n\tLink List is Empty";
	}
	else
	{
		cout<<"\n\n Enter Value For Delete:-";
		cin>>n;
		if(head->data==n)
		{
			node *ptr=head;
			head=ptr->next_add;
			cout<<"\n\n Node is Deleted..";
			delete ptr;
			count++;
		}
		else
		{
			node *pre=head;
			node *ptr=head->next_add;
			while(ptr!=NULL)
			{
				if(n==ptr->data)
				{
					pre->next_add=ptr->next_add;
					cout<<"\n\n Node Is Deleted...";
					count++;
					delete ptr;
					break;
				}
			   pre = ptr;
			   ptr = ptr->next_add;
			}
			if(count==0)
			{
				cout<<"\n\n Record Not Found";
			}
		}
	}
}
int main()
{
	int n;
	singlylinklist s;
    p:
    	system("cls");
    	cout<<"\n\n\t\tControl panel";
    	cout<<"\n\n\1.insert Record";
    	cout<<"\n\n\2.display Record";
    	cout<<"\n\n3.Search Record";
    	cout<<"\n\n4.Sum_count";
    	cout<<"\n\n5.Update Record";
    	cout<<"\n\n6.Delete Record";
    	cout<<"\n\n7.Exit"<<endl;
    	int ch;
    	cout<<"\n\nEnter Your Choice:-";
    	cin>>ch;
    	switch(ch)
    	{
    		case 1:
    			system("cls");
    			cout<<"\n\n\t\tinsert record";
    			cout<<"\n\nEnter Value:-";
    			cin>>n;
    			s.insert(n);
    			break;
    		case 2:
			    s.display();
				break;
			case 3:
			    s.search();
				break;
			case 4:
			    s.sum_count();
				break;
			case 5:
				s.update();
				break;
			case 6:
			    s.Delete();
				break;			
			case 7:
			     exit(0);
				default:
				cout<<"Invalid Value Please try Again..."; 		 		
		}
	getch();
	goto p;
	return 0;
}
