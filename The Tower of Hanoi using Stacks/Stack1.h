
class Node
{
private:
Node* next;
int data;

public:
Node* getNext(){return next;}
int getData(){return data;}
void setNext(Node* d){next=d;}
void setData(int a){data=a;}


};


void push(int value);
int pop();
int peek();
bool isEmpty();
int getHeight();

