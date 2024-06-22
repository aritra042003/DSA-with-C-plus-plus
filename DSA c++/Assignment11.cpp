#include <iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class Queue
{
private:
    node *front, *rear;

public:
    Queue();
    void insert(int);
    int getrear();
    int getfront();
    void deleteFront();
    ~Queue();
    int count();
};
Queue::Queue()
{
    front = NULL;
    rear = NULL;
}
void Queue::insert(int data)
{
    node *n = new node;
    n->item = data;
    n->next = NULL;
    if (rear == NULL)
    {
        front = rear = n;
    }
    else
    {
        rear->next = n;
        rear = n;
    }
}
int Queue::getfront()
{
    if (front == NULL)
        throw 1;
    return front->item;
}
int Queue::getrear()
{
    if (rear == NULL)
        throw 1;
    return rear->item;
}

void Queue::deleteFront()
{
    node *temp;
    if (front)
    {
        temp = front;
        if (front == rear)
        {
            delete front;
            front = rear = NULL;
        }
        else
        {
            temp = front;
            front = front->next;
            delete temp;
        }
    }
}

Queue::~Queue()
{
    while (front)
    {
        deleteFront();
    }
}
int Queue::count()
{
    node *temp;
    int c = 0;
    if (front == NULL)
    {
        return 0;
    }
    temp = front;
    if (temp)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
int main()
{
}