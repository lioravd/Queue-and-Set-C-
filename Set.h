/* Assignment C++: 2
   Author: Lior Avadyayev, ID: 206087611
   Author: Itamar Assaf, ID: 314699612
*/
#ifndef __SET_H
#define __SET_H
#include <iostream>
#include <cstring>



class Set{
private:
    int maxSize;
    int currentSize;
    int* arr;
public:
    Set();
    Set(int maxSize);
    Set(const Set &a);
    ~Set();
    bool isEmpty();
    Set operator =(Set s);
    Set operator +=(int s);
    Set operator +(int s);
    friend Set operator+(int s, Set& obj);
    Set operator +(Set s);
    bool operator >(Set s);
    int& operator [](int s);
    friend std::ostream& operator << (std::ostream& out, Set& obj);




};



#endif // __SET_H