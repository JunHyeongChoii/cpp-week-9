#include "queue.h"

// TODO: Queue 클래스 구현 작성

void Queue::push(int data)
{
    LinkedList::insert(data,LinkedList::size_);
}

int Queue::peek()
{
    LinkedList::get(0);
}

int Queue::pop()
{
    LinkedList::remove(0);
}