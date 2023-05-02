/* Assignment C++: 2
   Author: Lior Avadyayev, ID: 206087611
   Author: Itamar Assaf, ID: 314699612
*/
#include "Set.h"


Set::Set(){
    maxSize=1000;
    arr = new int[maxSize];
    currentSize = 0;
}

Set::Set(int maxSize) {
    this->maxSize=maxSize;
    arr = new int[maxSize];
    currentSize = 0;
}

Set::Set(const Set &a) {
    maxSize=a.maxSize;
    currentSize=a.currentSize;
    arr = new int[maxSize];
    for(int i=0;i<a.currentSize;i++)
        arr[i]= a.arr[i];
}

Set::~Set() {
    delete arr;
}

bool Set::isEmpty() {
    if (currentSize>0)
        return false;
    else
        return true;
}

Set Set::operator = (Set a) {
    maxSize=a.maxSize;
    currentSize=a.currentSize;
    delete arr;
    arr = new int[maxSize];
    for(int i=0;i<a.currentSize;i++)
        arr[i]= a.arr[i];
    return 0;
}

Set Set ::operator  += (int a) {
    for (int i = 0; i < currentSize; i++)
        if (arr[i] == a)
            return 0;
    if (currentSize < maxSize){
        arr[currentSize] = a;
        currentSize ++;
    }else{
        int* temp;
        maxSize ++;
        currentSize++;
        temp = new int[maxSize];
        for(int i=0;i<currentSize;i++)
            temp[i]= arr[i];
        temp[currentSize - 1] = a;
        arr = temp;
    }
    return 0;
}

Set Set ::operator + (int a) {
    Set temp;
    for(int i=0;i<currentSize;i++)
        if (arr[i] == a) return *this;
    if (currentSize < maxSize){
        temp.maxSize=maxSize;
        temp.currentSize=currentSize+1;
    }else{
        temp.maxSize=maxSize+1;
        temp.currentSize=currentSize+1;
    }
    for(int i=0;i<currentSize;i++)
        temp.arr[i] = arr[i];
    temp.arr[temp.currentSize-1]=a;
    return temp;
}

Set operator+(int s, Set& obj){
    return obj + s;
}

Set Set::operator + (Set a) {
    int new_max_size = maxSize+a.maxSize;
    Set temp(new_max_size);
    Set sectemp;
    temp = *this;
    for (int i=0 ; i<a.currentSize ; i++){
        temp = temp + a.arr[i];
    }
    return temp;
}

bool Set::operator > (Set s) {
    if(currentSize>s.currentSize) return true;
    else return false;
}

int& Set::operator[](int s) {
    return arr[s];
}

std::ostream& operator << (std::ostream& out, Set& obj){
    if(obj.currentSize!=0)
        out<<"{";
    for(int i=0 ; i<obj.currentSize ; i++) {
        out << obj[i];
        if (i < obj.currentSize - 1)
            out << ", ";
    }
    out<<"}";
    return out;
}