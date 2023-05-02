/* Assignment C++: 2
   Author: Lior Avadyayev, ID: 206087611
   Author: Itamar Assaf, ID: 314699612
*/
#include "Menu.h"


int main() {
    Menu* My_menu = new Menu;
    My_menu->mainMenu();
    Set t1 = Set();
    t1+=1;
    t1+=2;
    t1+=3;
    t1+=4;
    t1+=5;
    t1=t1+9;
    t1=10+t1;
    Set t2= Set(5);
    printf("%d %d\n",t1[2],t1[6]);
    t2+=7;
    Set t3=t1+t2;
    printf("%d\n",t3[5]);
    myQueue q = myQueue(10);
    cout<<q.isEmpty()<<endl;
    cout<<q.enQueue(5)<<endl;
    cout<<q.peek()<<endl;
    cout<<q.enQueue(10)<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.peek()<<endl;



    return 0;
}
