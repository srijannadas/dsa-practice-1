#include<iostream>
using namespace std;
class deque
{
	public:
		int *arr;
		int front;
		int rear;
		int size;
	deque(int s)
	{
		this->size=s;
		arr=new int[s];
		front=-1;
		rear=-1;
	}
	
	bool pushfront(int val)
	{
		if(Isfull())
		{
			return false;
		}
		else if(empty())
		{
			front=rear=0;
		}
		else if(front==0 && rear!=size-1)
		{
			front=size-1;
		}
		else
		{
			front--;
		}
		arr[front]=val;
		return true;
	}
	
	bool pushrear(int val)
	{
		if(Isfull())
		{
			return false;
		}
		else if(empty())
		{
			front=rear=0;
		}
		else if(rear==size-1 && front!=0)
		{
			rear=0;
		}
		else
		{
			rear++;
		}
		arr[rear]=val;
		return true;
	}
     
    int popfront()
	{
		if(empty())
		{
			return -1;
		}
		
		int ans=arr[front];
		arr[front]=-1;
		
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
		return ans;
	 } 
     
     int poprear()
     {
     	if(empty())
     	{
     		return -1;
		}
		
		int ans=arr[rear];
		arr[rear]=-1;
		
		if(front==rear)
		{
			front=rear=-1;
		}
		
		else if(rear==0)
		{
			rear=size-1;
		}
		else
		{
			rear--;
		}
		return ans;
	 }
     
	int getfront()
	{
		if(empty())
		{
			return -1;
		}
		else
		{
			return arr[front];
		}
	}
	
	int getrear()
	{
		if(empty())
		{
			return -1;
		}
		else
		{
			return arr[rear];
		}
	}
	
	bool empty()
	{
		if(front==-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool Isfull()
	{
		if(front==0 && rear==size-1 || (front!=0 && rear==(front-1)% (size-1)))
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
	deque d(6);
	d.pushfront(89);
	d.pushrear(98);
	
	cout<<d.getfront()<<endl;
	cout<<d.getrear()<<endl;
	
}
