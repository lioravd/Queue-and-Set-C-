/* Assignment C++: 2
   Author: Lior Avadyayev, ID: 206087611
   Author: Itamar Assaf, ID: 314699612
*/
#include "myQueue.h"



myQueue::myQueue(int maxQ) {  //myQueue constructor
    this->maxQ=maxQ;
    size = 0;
}

bool myQueue::enQueue(int val) { //insert integer to queue
    if (size<maxQ) { //check if the queue isn't full and add element
        queue.push_back(val);
        size ++;
        return true;
    }else{ // if full return false and print below
        std::cout<<"Queue is full"<<std::endl;
        return false;
    }
}

bool myQueue::deQueue() { //take integer from queue
    if (this->isEmpty()) { //if empty return false
        std::cout<<"Queue is empty"<<std::endl;
        return false;
    }
    queue.erase(queue.begin());  //delete the first element in the queue
    size--;
    return true;
}

bool myQueue::isEmpty(){  //check if queue empty
    if (size>0)
        return false;
    return true;
}


int myQueue::peek() {   //showing first element in queue
    if (isEmpty()) return -1;
    return *queue.begin();
}

std::ostream& operator << (std::ostream& out, const myQueue& obj) //printing operator overloading
{
    if(obj.size!=0)
        for(int i=0;i< obj.size;i++) //creates print
            if (i==0)
                out<<obj.queue[i];
            else out<<" <- "<<obj.queue[i];
    return out;
}

myQueue::~myQueue() {
}