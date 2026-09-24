#include <iostream>
using namespace std;

class Shape{
    public :
        virtual double area() = 0;

        virtual ~Shape() {}
};

class Circle: public Shape{
    private:
        double radius;
    public:
        Circle(double r): radius(r) {}

        double area() override {
            return 3.14 * radius * radius;

        }
};

class Rectangle: public Shape{
    private:
        int length;
        int width;
    public:
        Rectangle(int l, int w): length(l), width(w) {}

        double area() override {
            return  length * width;
        }
};


int main(){
    Shape* s = new Circle(5);
    Shape* r = new Rectangle(4, 6);

    cout << s->area() << endl;
    cout << r->area() << endl;  

    delete s;
    delete r;

    return 0;
}