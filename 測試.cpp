#include <iostream>
#include <string>
using namespace std;

struct {
    long id;
    string name;
    int age;
} emp1, emp2;

int main() {
    emp1 = {1, "John", 33};
    emp2 = {2, "Mary", 28};

    cout << emp1.name << endl; // John
    cout << emp2.name << endl; // Mary

    return 0;
}
