#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* Next;
	Node(int d)
	{
		this->data=d;
		this->Next=NULL;
		}	
		~Node()
		{
			int value=this->data;
			if(this->Next!=NULL)
			{
				delete Next;
				Next=NULL;
			}
		}
};
void InsertNode(Node* &tail,int element,int d)
{
	//Empaty list
	if(tail==NULL)
	{
		Node* newNode= new Node(d);
		tail=newNode;
		newNode->Next=newNode;
	}
	//Assuming that the element is present in the list
	else
	{
		Node* curr=tail;
		while(curr->data!=element)
		{
			curr=curr->Next;
		}
		//element found -> list is representing element wala node
		Node* temp=new Node(d);
		temp->Next=curr->Next;
		curr->Next=temp;
	}
}
void DeleteNode(Node* &tail,int value)
{
	if(tail==NULL)
	{
		cout<<"List Is Empty Please chek Again"<<endl;
		return;
	}
	else
	{
		Node* prev=tail;
		Node* curr=prev->Next;
		while(curr->data!=value)
		{
			prev=curr;
			curr=curr->Next;
		}
		prev->Next=curr->Next;
		if(curr==prev)
		{
			tail=NULL;
		}
		else if(tail==curr)
		{
			tail=prev;
		}
		curr->Next=NULL;
		delete curr;
	}
}
void print(Node* &tail)
{
	Node* temp=tail;
	if(tail==NULL)
	{
		cout<<"List Is Empty";
		return;
	}
	do
	{
		cout<<tail->data<<" ";
		tail=tail->Next;
	}while(tail!=temp);
	cout<<endl;
}
int main()
{
	Node* tail=NULL;
	InsertNode(tail,5,3);
	print(tail);
    InsertNode(tail,3,5); 
	print(tail);
	InsertNode(tail,5,7); 
	print(tail);
	InsertNode(tail,3,4); 
	print(tail);
	InsertNode(tail,4,6); 
	print(tail);
	DeleteNode(tail,3);
	print(tail);
	
}
