#include <iostream>
#include "Stack.h"
//#include <stdlib.h> 
//#include <stdio.h>

using namespace std;

Stack::Stack()
{
top=0;
height =0;
}

void Stack::push(int i)
{
Node* temp= new Node;
temp->setData(i);
temp->setNext(top);
top= temp;
height++;
}
int Stack::pop()
{

Node* temp; 
temp = top;
top=top->getNext();
int value = temp->getData();
delete temp;
height--;
return value;

}
int Stack::peek()
{

return top->getData();
}

bool Stack::isEmpty()
{
return top==0;
}
int Stack::getHeight()
{

return height;
}
Stack::~Stack()
{
while(!isEmpty())
{
 pop();

}

}

