#include<iostream>
using namespace std;
#define MAX_SIZE 5
template<class type>
class stack
{
	int TOP;
	int count;
	type stk[MAX_SIZE];
	public:
	stack()
	{
		TOP=-1;
		count=0;
	}
	void push()
	{
		if(TOP>=MAX_SIZE-1)
		{
			cout<<"\033[31mstack overflow\033[0m"<<endl;
			return;
		}
		cout<<"\033[35menter element of type "<<typeid(stk[0]).name()<< " to push:\033[0m"<<endl;
		TOP++;
		cin>>stk[TOP];
	}
	void pop()
	{
		if(TOP<=-1)
		{
			cout<<"\033[31mstack is underflow\033[0m"<<endl;
			return;
		}
		cout<<"\033[35mDeleted element:\033[0m"<<stk[TOP]<<endl;
		TOP--;
	}
	void display_stack()
	{
		if(TOP<=-1)
		{
			cout<<"\033[36mstack is empty\033[0m"<<endl;
			return;
		}
		int i;
		cout<<endl<<"\033[34m**********************************\033[0m"<<endl;
		for(i=0;i<=TOP;i++)
		{
			cout<<stk[i]<<" ";
		}
		cout<<endl;
		cout<<"\033[34m**********************************\033[0m"<<endl;
	}
	void submenu()
	{
		int c=0,op2;
		if(count>=1)
		{
			while(c<3)
			{
				cout<<"\033[35menter your choice"<<endl;
				cout<<"1)continue_old stack"<<endl<<"2)new_stack\033[0m"<<endl;
				cin>>op2;
				if(op2==1||op2==2)
					break;
				else
					cout<<"\033[35mplease enter correct choice\033[0m"<<endl;
				c++;
			}
		}
		if(c==3)
		{
			return;
		}
		while(1)
		{
			if(op2==2)
			{
				TOP=-1;
				count=0;
			}
			int op;
			cout<<"1)push"<<endl<<"2)pop"<<endl<<"3)display_stack"<<endl<<"4)main_menu"<<endl;
			cin>>op;
			switch(op)
			{
				case 1:push();break;
				case 2:pop();break;
				case 3:display_stack();break;
				case 4:if(TOP>=0)
					count++;
					return;
				default:cout<<"\033[35mpls enter correct choice\033[0m"<<endl;
			}
		}
	}
};
int main()
{
	int op,c=0;
	stack<int>obj1;
	stack<char>obj2;
	stack<float>obj3;
	stack<double>obj4;
	stack<string>obj5;

	cout<<"\033[20C\033[4m\033[37m Welcome to stack application\033[0m"<<endl<<endl;
	while(1)
	{
		cout<<"\033[32mchoose the type of stack from below\033[0m"<<endl;
		cout<<"\033[33m1)int"<<endl<<"2)char"<<endl<<"3)float"<<endl<<"4)double"<<endl<<"5)string"<<endl<<"6)exit\033[0m"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:cout<<"\033[34mint stack application is ready to use\033[0m"<<endl;c=0;obj1.submenu();
			       break;
			case 2:cout<<"\033[34mchar stack application is ready to use\033[0m"<<endl;c=0;obj2.submenu();
			       break;
			case 3:cout<<"\033[34mfloat stack application is ready to use\033[0m"<<endl;c=0;obj3.submenu();
			       break;
			case 4:cout<<"\033[34mdouble stack application is ready to use\033[0m"<<endl;c=0;obj4.submenu();break;
			case 5:cout<<"\033[34mstring stack application is ready to use\033[0m"<<endl;c=0;obj5.submenu();break;
			case 6:exit(0);
			default:
			       if(c==0)
			       {
				       cout<<"\033[35mplease read the options carefully\033[0m"<<endl;
				       c++;
			       }
			       else if(c==1)
			       {
				       cout<<"\033[31mlast chance please take care\033[0m"<<endl;
				       c++;
			       }
			       else if(c==2)
			       {
				       cout<<"\033[34mThanks for using our application,pls read the manual carefully and come back again\033[0m"<<endl;
				       exit(0);
			       }
		}
	}

}
