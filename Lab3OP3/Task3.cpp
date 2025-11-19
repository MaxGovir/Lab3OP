#include <iostream>
using namespace std;

int main() {

    
    int a;
    float b;
    unsigned short c;

    
    a = 13915;
    b = 4.78e5;        
    c = 9765;

    cout << "int a = " << a << endl;
    cout << "float b = " << b << endl;
    cout << "unsigned short c = " << c << endl;

    double d;
    int e;
    char f;

    
    d = b;
    cout << "Implicit conversion: double d = b -> " << d << endl;

   
    e = (int)b;
    cout << "Explicit conversion: int e = (int)b -> " << e << endl;

    
    f = *reinterpret_cast<char*>(&a);

    cout << "Avoiding typification: char f = *reinterpret_cast<char*>(&a)\n";
    cout << "f = " << (int)f << "\n";


    return 0;
}
