#include<iostream>
#define n 100
using namespace std;
class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr = new int [n];
        top =-1;
    }

    void push(int x)
    {
        if(top == n-1)
        {
            cout<<"Stack Overflow";
            return;
        }
        else{
             top++;
             arr[top] = x;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"No elements in stack";
        }
        else{
            top--;
        }
    }
    int topE()
    {
        if(top==-1)
        {
            cout<<"No elements in stack";
        }
        return arr[top];

    }
    bool isEmpty()
    {
        if(top==-1)
            return true;

    }
    void display()
    {
        for(int i=0 ; i<=top ; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(5);
    s.push(9);
    cout<<"Top element is "<< s.topE()<<endl;
    s.pop();
    cout<<"Top element is "<< s.topE()<<endl;;
    s.display();
    return 0;
}