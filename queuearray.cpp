#include<iostream>
using namespace std;
class queue
{
	public:
		int *arr;
		int front;
		int rear;
		int size;
	queue(int s)
	{
		this->size=s;
		front=rear=-1;
		arr=new int[s];
	}	
	void enqueue(int val)  //push
	{
		if(rear==size)
		{
			cout<<"Queue Is OverFlow"<<endl;
		}
		else
		{
			arr[rear]=val;
			rear++;
		}
	}
	int dequeue() //pop 
	{
		if(front==rear)
		{
			return -1;
		}
		else
		{
			int ans=arr[front];
			arr[front]=-1;
			front++;
		}
	}
	bool Empty()
	{
		if(rear==front)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int peek()
	{
		if(front==rear)
		{
			return -1;
		}
		else
		{
			return arr[front];
		}
	}
};
int main()
{
	queue q(5);
	q.enqueue(78);
	q.enqueue(79);
	cout<<q.peek()<<endl;
	if(q.Empty())
	{
		cout<<"Khali Hai"<<endl;
	}
	else
	{
		cout<<"khali nhi hai"<<endl;
	}
	q.dequeue();
	cout<<q.peek()<<endl;
	q.dequeue();
	cout<<q.peek()<<endl;
		if(q.Empty())
	{
		cout<<"Khali Hai"<<endl;
	}
	else
	{
		cout<<"khali nhi hai"<<endl;
	}
	
	
}
