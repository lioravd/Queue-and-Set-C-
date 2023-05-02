/* Assignment C++: 2
   Author: Lior Avadyayev, ID: 206087611
   Author: Itamar Assaf, ID: 314699612
*/
#include "Menu.h"

using namespace std;



void Menu:: mainMenu(){

    while(1){

        cout << "(1) Set Menu\n"
                "(2) Integer Queue Menu\n"
                "(3) Exit" << endl;

        int choice;
        cin >> choice;
        if (choice == 1)
            setMenu();
        else if (choice == 2)
            queueMenu();
        else if (choice == 3) {
            cout << "Goodbye!" << endl;
            return;
        } else {
            cout << "Invalid selection." << endl;

        }
    }}


void Menu::setMenu() {
    Set set1;
    Set set2;
    Set Union_set;
    int choice;
    int element;
    printf("last test");
    while(1) {
        cout << "*** Welcome to Set Menu ***\n"
                "To select an item, enter\n"
                "1 Show set 1\n"
                "2 Show set 2\n"
                "3 add element to set 1\n"
                "4 add element tp set 2\n"
                "5 Show set1 U set 2 (union)\n"
                "6 to exit" << endl;


        cin >> choice;
        if (choice == 1)
            if (set1.isEmpty())
                std::cout<<"Set 1 is empty"<<std::endl;
            else
                std::cout<<set1<<std::endl;
        else if (choice == 2)
            if (set2.isEmpty())
                std::cout<<"Set 2 is empty"<<std::endl;
            else
                std::cout<<set2<<std::endl;
        else if (choice == 3) {
            std::cout << "Give a number:";
            cin >> element;
            set1 += element;
        }
        else if (choice == 4) {
            std::cout << "Give a number:";
            cin >> element;
            set2 += element;
        }
        else if (choice == 5) {
            if (set1.isEmpty() && set2.isEmpty()){
                std::cout<<"The union is empty"<<std::endl;
            }else{
                Union_set = set1 + set2;
                std::cout<<Union_set<<std::endl;

            }
        }
        else if (choice == 6) {
            return;
        }else {
            cout << "Invalid selection." << endl;

        }
    }

}


void Menu::queueMenu() {
    cout<<"Enter the size of the queue:"<<endl;
    int size;
    cin>>size;
    myQueue my_queue(size);
    while(1){
        cout << "*** Welcome to Queue Menu ***\n"
                "To select an item, enter\n"
                "1 Show Queue\n"
                "2 Insert new element\n"
                "3 Remove element\n"
                "4 Check the first element\n"
                "5 to exit" << endl;

        int choice;
        int element;
        cin >> choice;
        if (choice == 1) {
            if (my_queue.isEmpty())
                std::cout<<"The queue is empty"<<std::endl;
            else
                std::cout<<my_queue<<std::endl;
        }else if (choice == 2){
            std::cout<<"insert new element:";
            cin >> element;
            if (my_queue.enQueue(element)) {
                std::cout << "The new queue:"<<std::endl;
                std::cout<<my_queue<<std::endl;
            }
        }
        else if (choice == 3) {
            if(my_queue.deQueue()){
                if (my_queue.isEmpty())
                    std::cout << "Queue is empty"<<std::endl;
                else{
                std::cout << "The new queue:"<<std::endl;
                std::cout<<my_queue<<std::endl;
                }
            }
        }
        else if (choice == 4) {
            if (my_queue.isEmpty())
                std::cout<<"Queue is empty"<<std::endl;
            else
                std::cout<<my_queue.peek()<<std::endl;
        }
        else if (choice == 5) {
            return;
        } else {
            cout << "Invalid selection." << endl;
        }
    }}
