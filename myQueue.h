/* Assignment C++: 2
   Author: Lior Avadyayev, ID: 206087611
   Author: Itamar Assaf, ID: 314699612
*/
#ifndef __MYQUEUE_H
#define __MYQUEUE_H
#include <iostream>
#include <vector>
using namespace std;

class myQueue{
private:
    vector<int> queue;
    int maxQ;
    int size;
public:
    myQueue(int maxQ);
    ~myQueue();
    bool enQueue(int val);
    bool deQueue();
    bool isEmpty();
    int peek();
    // int get_size();
    friend std::ostream& operator << (std::ostream& out, const myQueue& obj);





};




#endif //__MYQUEUE_H

