//1)a)
#include <iostream>
using namespace std;
double stack[500];//creating empty stack
int n=500, top=-1;
void push(double val) {
   if(top>=n-1)
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
      cout<<"\n"<<stack[i];
      cout<<endl;
   } else
   cout<<"Stack is empty"<<endl;
}
void top_stack() {
   if(top<=-1)
   cout<<"Empty stack"<<endl;
   else {
      cout<<"The Top most element is "<< stack[top] <<endl;
   }
}
void is_empty_stack(){
 if(top<=-1)
 cout<<"Empty stack"<<endl;
 else 
 cout<<"stack is not empty"<<endl;
}
int main() {
   int ch ;
   double val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display the stack"<<endl;
   cout<<"4) Top most element"<<endl;
   cout<<"5) Is stack empty?"<<endl;
   cout<<"0)to exit"<<endl;

   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            top_stack();
            break;
         }
         case 5: {
           is_empty_stack();
          break;
         }
         case 0:
         { cout<<"Exit"<<endl;
            break;}
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=0);
   return 0;
}