#include<bits/stdc++.h>
using namespace std;
class cque
{
	public:
		int *arr;
		int front;
		int rear;
		int size;
	cque(int s)
	{
		this->size=s;
		arr=new int[s];
		front=rear=-1;
	}
	void push(int val)
	{
		if(front==0 && rear==size-1 || (rear==(front-1)%(size-1)))
		{
			cout<<"khali hai";
		}
		else if(front==-1)
		{
			front=rear=0;
		}
		else if(rear=size-1 && front!=0)
		{
			rear=0;
		}
		else
		{
			rear++;
		}
		arr[rear]=val;
	}
	int pop()
	{
		if(front==-1)
		{
			cout<<"Queue Is Empty"<<endl;
		}
		int ans=arr[front];
		arr[front]=-1;
		if(front==rear)
		{
			front=rear=-1;
		}
		else if(front==size-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
	}
	int peek()
	{
		if(front==-1)
		{
			cout<<"Khali Hai"<<endl;
		}
		else
		{
			return arr[front];
		}
	}
	bool IsEmpty()        //Home Howk
	{
		if(front==rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
	cque q(5);
	
	q.push(89);
	//q.push(86);
	//q.push(89);
	
	cout<<q.peek()<<endl;
	if(q.IsEmpty())
	{
		cout<<"khali";
	}
	else
	{
		cout<<"Not Khali";
	}

}
