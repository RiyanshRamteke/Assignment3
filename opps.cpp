#include <iostream>
#include <string>
using namespace std;

class Book
{
    int price;
    string name;

public:

    Book()
    {
        price = 0;
        name = "";
    }

    Book(int p, string n)
    {
        price = p;
        name = n;
    }

    Book operator+(Book b)
    {
        Book temp;
        temp.price = price + b.price;
        temp.name = name + " & " + b.name;
        return temp;
    }

    void display()
    {
        cout << "Book Name: " << name << endl;
        cout << "Total Price: " << price << endl;
    }
};

int main()
{
    Book b1;
    Book b2(500, "C++");
    Book b3(300, "Python");

    cout << "First Book:" << endl;
    b2.display();

    cout << endl << "Second Book:" << endl;
    b3.display();

    b1 = b2 + b3;

    cout << endl << "After Operator Overloading:" << endl;
    b1.display();

    return 0;
}