#include <iostream>

using namespace std;

struct User
{
    int age;
};

class Circle
{
    const double PI = 3.14156;
    int x, y;
    double radius;
public:
    //Circle(int x, int y, double r) : x{ x }, y{ y }, radius{ r } {}
    Circle(int x, int y, double r)
    {
        this->x = x;
        this->y = y;
        radius = r;
        cout << "circle full construct\n";
    }

    // Circle() : x{ 0 }, y{ 0 }, radius{ 1 } {} // modern sintaxis
    /*Circle()
    {
        x = 0;
        y = 0;
        radius = 1;
        cout << "circle default construct\n";
    }*/
    Circle() : Circle(0, 0, 1) {} // delegat constructor
    

    // Circle(double r) : x{ 0 }, y{ 0 }, radius{ 1 } {}
    /*Circle(double r)
    {
        x = 0;
        y = 0;
        radius = r;
        cout << "circle radius construct\n";
    }*/
    Circle(double r) : Circle(0, 0, r) {}

    // Circle(int x, int y) : x{ x }, y{ y }, radius{ 1 } {}
    /*Circle(int x, int y)
    {
        this->x = x;
        this->y = y;
        radius = 1;
        cout << "circle coordinate construct\n";
    }*/
    Circle(int x, int y) : Circle(x, y, 1) {}

    

    void SetRadius(double r)
    {
        radius = (r > 0 ? r : -r);
    }
    double GetRadius()
    {
        return radius;
    }

    double Perimetr()
    {
        return 2 * PI * radius;
    }

    double Square()
    {
        return PI * radius * radius;
    }
};

int main()
{
    Circle c1;
    //c1.SetRadius(5.5);
    cout << "Perimetr = " << c1.Perimetr() << "\n";
    cout << "Square = " << c1.Square() << "\n";

    Circle c2(10);
    //c1.SetRadius(5.5);
    cout << "Perimetr = " << c2.Perimetr() << "\n";
    cout << "Square = " << c2.Square() << "\n";

    Circle c3(5, 7);
    //c1.SetRadius(5.5);
    cout << "Perimetr = " << c3.Perimetr() << "\n";
    cout << "Square = " << c3.Square() << "\n";

    /*int num1 = 10.8;
    int num3{ 10 };*/

    /*User user;
    user.age = 10;

    User* uptr = new User;
    uptr->age = 20;*/


    int n;
    int* nptr = &n;
}
