#include <iostream>
using namespace std;

int main() {

    cout << "=== PART 1: Опис та ініціалізація змінних базових типів ===\n";

    
    int a;
    float b;
    unsigned short c;

    
    a = 13915;
    b = 4.78e5;        
    c = 9765;

    cout << "int a = " << a << endl;
    cout << "float b = " << b << endl;
    cout << "unsigned short c = " << c << endl;




    cout << "\n=== PART 2: Опис та ініціювання нових змінних ===\n";

    
    double d;
    int e;
    char f;

    
    d = b;
    cout << "Неявне приведення: double d = b -> " << d << endl;

   
    e = (int)b;
    cout << "Явне приведення: int e = (int)b -> " << e << endl;

    
    f = *reinterpret_cast<char*>(&a);

    cout << "Обхід суворої типізації: char f = *reinterpret_cast<char*>(&a)\n";
    cout << "Отримане значення f = " << (int)f << " (виведено як код символу)\n";


    return 0;
}
