#include<iostream>
using namespace std;

int stack[100],n=5,top=-1;
void push(int val)
{
    if(top>=n-1)
        cout<<"Stack overflow"<<endl;
    else
    {
        top++;
        stack[top]=val;
    }
}
void pop()
{
    if(top<=-1)
        cout<<"stack underflow"<<endl;
    else{
        cout<<"the popped element is: "<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are: ";
        for(int i=top;i>=0;i--)
       	cout<<stack[i]<<"\t";
        cout<<endl;
    }
    else
        cout<<"stack is empty.";
}
int main()
{
    int ch, val;
    cout<<"1) push in stack"<<endl;
    cout<<"2) pop in stack"<<endl;
    cout<<"3) display stack"<<endl;
    cout<<"4) exit"<<endl;
    do
    {
        cout<<"Enter a choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter value to be pushed: "<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"Exit"<<endl;
                exit(0);
                break;
            }
            default:
                cout<<"invalid choice."<<endl;

        }
    } while (ch!=4);
    return 0;
}