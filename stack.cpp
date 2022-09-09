#include<iostream>
#include<stack>
using namespace std;
class Stack
{
public:
	int* arr;
	int size;
	int top;
	Stack(int size)
	{
		this->size = size;
		arr = new int[size];
		top = -1;
    }
	void push(int element)
	{
		if (size - top > 1)
		{
			top++;
			arr[top] = element;
		}
		else
		{
			cout << "Stack OverFlow";
		}
	}
	void pop()
	{
		if (top >= 0)
		{
			top--;
		}
		else
		{
			cout << "Stack UnderFlow" << endl;
		}
	}
	int peek()
	{
		if (top >= 1)
		{
			return arr[top];
		}
		else
		{
			cout << "Stack Is Empty"<<endl;
			return -1; 
		}
	}
	bool isEmpty()
	{
		if (top == -1)
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
	Stack St(5);
	St.push(33);
	St.push(44);
	St.push(55);
	St.push(66);
	St.push(77);
	cout << St.peek() << endl;
     St.pop();
     cout << St.peek() << endl;
	 St.pop();
	 cout << St.peek() << endl;
	 St.pop();	
	 cout << St.peek() << endl;
			if(St.isEmpty())
			{
				cout<<"Stack Is Empty"<<endl;
			}
			else
			{
				cout<<"Stack Is Not Empty"<<endl;
		}
}
