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
Queue(Queue& a);//copy constructor
~Queue();//destructor
void operator=(Queue& a);//assignment operator
Type pushAndPop(Type& value); //access function
};
template<class Type>
Queue<Type>::Queue()
{
point =new Type[QUEUE_SIZE];
}
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
template<class Type>
Queue<Type>::~Queue()
{
delete [] point;
}

template<class Type>
void Queue<Type>::operator=(Queue& a)
{
 if(this==&a)
return;

delete point[];
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

template<class Type>
Type Queue<Type>::pushAndPop(Type& value)
{
Type res = point[0];
for(int x=0;x<29;x++)
{
  point[x]=point[x+1];
} 
point[29]=value;
return res;
}
#endif 
