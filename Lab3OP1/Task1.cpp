#include <iostream>
using namespace std;

int main() {


    unsigned short a;
    int b;
    float c;
    double d;

    cout << "Created variables: unsigned short, int, float, double." << endl;

    unsigned short* pa;
    int* pb;
    float* pc;
    double* pd;

    cout << "Created pointer variables: unsigned short*, int*, float*, double*." << endl;


    void* pv;

    cout << "Created untyped pointer: void*." << endl;


    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;

    cout << "Pointers initialized with addresses of the variables." << endl;


    *pa = 177;
    *pb = -189;
    *pc = 84.353535f;
    *pd = -2.6e13;

    cout << "Variables initialized using pointer dereferencing (*pointer)." << endl;


    cout << "\n--- VARIABLE SIZES (bytes) ---\n";
    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(b) = " << sizeof(b) << endl;
    cout << "sizeof(c) = " << sizeof(c) << endl;
    cout << "sizeof(d) = " << sizeof(d) << endl;

    cout << "sizeof(pa) = " << sizeof(pa) << endl;
    cout << "sizeof(pb) = " << sizeof(pb) << endl;
    cout << "sizeof(pc) = " << sizeof(pc) << endl;
    cout << "sizeof(pd) = " << sizeof(pd) << endl;

    cout << "sizeof(pv) = " << sizeof(pv) << endl;


    cout << "\n--- Untyped pointer assignments ---\n";
    pv = pa;
    cout << "pv = pa (void* now stores address of unsigned short*)" << endl;

    pv = pb;
    cout << "pv = pb (void* now stores address of int*)" << endl;

    pv = pc;
    cout << "pv = pc (void* now stores address of float*)" << endl;

    pv = pd;
    cout << "pv = pd (void* now stores address of double*)" << endl;

    cout << "\n--- VALUES OF VARIABLES ---\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}