#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int >q;
	q.push(78);
	q.push(79);
	cout<<q.front()<<endl;
	cout<<q.size()<<endl;
	if(q.empty())
	{
		cout<<"Khali Hai";
	}
	else
	{
		cout<<"Khali Nhi hai";
	}
	q.pop();
	cout<<endl;
	cout<<q.front()<<endl;
}

