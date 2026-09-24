#include <iostream>
using namespace std;

class Employee{
    public:
        string name;

        virtual void work() = 0;
};

class Developer : public Employee {
    public:
        void work() override {
            cout << "Developer writes code." << endl;
        }
};

class Designer : public Employee{
    public:
        void work() override {
            cout << "Designer creates designs." << endl;
        }
};

int main (){

    Employee* e1 = new Developer();
    Employee* e2 = new Designer();

    e1->work();
    e2->work();

    delete e1;
    delete e2;

    return 0;
}