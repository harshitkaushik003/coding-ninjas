// int length(Node *head) {
//     // Write your code here
//     if (head == NULL)
//     {
//         return 0; 
//     }
    
//     head = head->next;
//     return 1 + length(head);
// }
#include <iostream>
using namespace std;
class Vehicle {
    int seats;
    int speed;

    public:
    Vehicle(int seats, int speed) {
    cout<<"Vehicle ";
    this->seats = seats;
    this->speed = speed;
    }
};

class Car : public Vehicle {
    int id;
    public:
    Car(){
        cout<<"Car ";
    }
};

int main(){
    Car obj1;
}