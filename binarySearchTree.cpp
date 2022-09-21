#include<iostream>
#include<queue>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int d)
	{
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};

node* insertion(node* &root, int d)
{
	if(root==NULL)
	{
		root=new node(d);
		return root;
	}
	if(d>root->data)
	{
		root->right=insertion(root->right,d);
	}
	else
	{
		root->left=insertion(root->left,d);
	}
	return root;
}
void takeinput(node* &root)
{
	int data;
	cin>>data;
	while(data!=-1)
	{
		root=insertion(root,data);
		cin>>data;
	}
}
void levelorder(node* &root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
	  node* temp=q.front();
		q.pop();
		if(temp==NULL)
		{
		cout<<endl;
		if(!q.empty())
		{
			q.push(NULL);
		}
	    }
	    else
	    {
	    	cout<<temp->data<<" ";
	    	if(temp->left)
	    	{
	    		q.push(temp->left);
			}
			if(temp->right)
			{
				q.push(temp->right);
			}
		}
	}
}
bool search(node* &root,int &x)
{
	if(root==NULL)
	{
		return false;
	}
	if(root->data==x)
	{
		return true;
	}
	
	if(root->data>x)
	{
		return search(root->left,x);
	}
	else
	{
		return search(root->right,x);
	}
}
void inorder(node* &root)
{
	if
	(root==NULL)
	{
		return ;
	}
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	return;
}
int main()
{
	node* root=NULL;
	cout<<"Enter Data For Inserting "<<endl;
	takeinput(root);
	
	levelorder(root);
	
	inorder(root);
	
    int x;
    cout<<"Enter data You Want To Search ";
    cin>>x;
    bool found=search(root,x);
    if(found)
    {
    	cout<<"Present"<<endl;
	}
	else
	{
		cout<<"Absent"<<endl;
	}
}
