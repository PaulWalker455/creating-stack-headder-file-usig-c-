#ifndef CUSTOM_STACK_H
#define CUSTOM_STACK_H
#include<iostream>
using namespace std;
const int max_size=100;
struct stack
{
	
	int top=0;
	int stack[max_size];
	
	void push(int val)
	{
		if(top>=max_size)
		{
			cout<<"stack is overflown"<<endl;
			return;
		}
		stack[top++]=val;
	}
	void pop()
	{
		if(top<=0)
		{
			cout<<"stack is under flown"<<endl;
			return;
		}
		cout<<stack[top-1]<<" is removed"<<endl;
		top--;
	}
	void display()
	{
		if(top<=0)
		{
			cout<<"stack is empty"<<endl;
			return;
		}
		for(int i=top-1;i>=0;i--)
		{
			cout<<stack[i]<<" ";
		}
		cout<<endl;
	}
	void peek()
	{
		if(top<=0)
		{
			cout<<"stack is empty"<<endl;
			return;
		}
		cout<<"top="<<stack[top-1]<<endl;
	}
	
};

#endif