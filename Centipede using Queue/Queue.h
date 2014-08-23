#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 30
template<class Type>
class Queue
{
private:
Type* point; 

public:
Queue();//default constructor
Queue(Queue<Type>& a);//copy constructor
~Queue();//destructor
void operator=(Queue<Type>& a);//assignment operator
Type pushAndPop(Type& value); //access function to get the value from one end and pop from other end
};
//default constructor
template<class Type>
Queue<Type>::Queue()
{
point =new Type[QUEUE_SIZE];
}
//copy constructor
template<class Type>
Queue<Type>::Queue(Queue<Type>& a)
{
if(a.point!=0)
{

point =new Type[QUEUE_SIZE];

for(int x =0;x<QUEUE_SIZE;x++)
{
point[x]=a.point[x];
}

}
else
point = 0;

}
//destructor
template<class Type>
Queue<Type>::~Queue()
{
delete [] point;
}
//assignment operator
template<class Type>
void Queue<Type>::operator=(Queue& a)
{
 if(this==&a)
return;

delete [] point;
if(a.point!=0)
{

point =new Type[QUEUE_SIZE];

for(int x =0;x<QUEUE_SIZE;x++)
{
point[x]=a.point[x];

}

}
else
point = 0;

}
//access function to get the value from one end and pop from other end
template<class Type>
Type Queue<Type>::pushAndPop(Type& value)
{
Type res = point[0];
for(int x=0;x<QUEUE_SIZE-1;x++)
{
  point[x]=point[x+1];
} 
point[QUEUE_SIZE-1]=value;
return res;
}
#endif 
