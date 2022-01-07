#include<iostream>

using namespace std;

class stack
{
	int arr[10];
	int ptr = -1;
	public:
		stack()
		{
			for(int i = 0; i<10;i++)
			{
				arr[i] = 0;
			}
		}
		bool isfull()
		{
		if (ptr == 9)
		{
			return true;
		}
		else return false;
		}
		bool isempty()
		{
			if(ptr == -1)
			return true;
			else
			return false;
		}
		void push(int x)
		{
			if(isfull())
			{
				cout<<"Stack is full"<<endl;
			}
			else
			{
				ptr++;
				arr[ptr] = x;
				cout<<"Success!"<<endl;
			}
		}
		int pop()
		{
			int temp;
			temp = arr[ptr];
			arr[ptr] = 0;
			ptr--;
			return temp;
		}
		void dispaly()
		{
			for(int i = 0; i<10;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		
};
int main()
{
	stack stack1;
	int x;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.dispaly();
	cout << "Poped :";
	x = stack1.dispaly() 
}
