#include <iostream>
using namespace std;
class sstack{

public:
int stack[10], top=-1;
void push(int val) {
   if(top>=9)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
};
int main() {
	sstack s1;
	s1.push(10);
	s1.push(5);
	s1.push(3);
	cout<<"After pushing : ";
	s1.display();
	s1.pop();
	cout<<"After popping : ";
	s1.display();,
  
   return 0;
}
