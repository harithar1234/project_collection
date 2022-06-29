//1)b)
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include<stdio.h>

using namespace std;

int top=-1;
void push(double stack[],double val) {
    
      top++;
      stack[top]=val;
   
}
double pop(double stack[]) {
   double val;
   if(top<=-1)
   {cout<<"Invalid postfix expression.too many operators"<<endl;
   exit(0);}
   else { val=stack[top];
      top--;
   }
   return val;
}
int main()
{
    string s;   //declare a string
    cout<<"Enter the postfix expression:\n";
    cin>>s;     //getting the postfix expression
    s.push_back(','); //to avoid segmentation faults
   
    int n=(s.size()/2);
    string answer[n+1]; // string array to store the strings

    stringstream string_stream(s);  // creating string stream object
   
   int i=0;            // declaring i and assign  to 0
   while(string_stream.good())   // loop will continue if string stream is error free
   {string a;       
    getline( string_stream, a, ',' );   //calling getline fuction
    answer[i]=a;
     i++;
     }

double stack[n], last,lastbutone;
for(i=0;i<n;i++)
   { //checking if answer[i] is an integer
     //isdigit(answer[i][0])!=0 first character of answer[i] is a digit
     //isdigit(answer[i][1])!=0 second character of answer[i] is a digit.useful for negative integers
     if((isdigit(answer[i][0])!=0)||(isdigit(answer[i][1])!=0))
       {   stringstream geek(answer[i]);
           int x = 0;
           geek>> x;
           //converting string to integer
           push(stack,x);
       }
     else{
          if(((answer[i]).compare("+")) == 0)
          {last=pop(stack);
          lastbutone=pop(stack);
          push(stack,(lastbutone+last));}
          else if(((answer[i]).compare("-")) == 0)
          {last=pop(stack);
          lastbutone=pop(stack);
          push(stack,(lastbutone-last));}
          else if(((answer[i]).compare("*")) == 0)
          {last=pop(stack);
          lastbutone=pop(stack);
          push(stack,(lastbutone*last));}
          else if(((answer[i]).compare("/")) == 0)
          {last=pop(stack);
          lastbutone=pop(stack);
          push(stack,(lastbutone/last));}
          else if((((answer[i]).compare("")) == 0)||(((answer[i]).compare(" ")) == 0))
          ;
          else
          {cout<<"Invalid postfix expression.Invalid operator typed";
          exit(0);}
} }

if(top==0)
cout<<"\nvalue="<<pop(stack);
else
cout<<"Invalid postfix expression.too many numbers";

    return 0;
}