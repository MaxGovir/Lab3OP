#include <iostream>	
using namespace std;

int main() {


    char c1, c2, c3;
    cout << "Created variables of type char: c1, c2, c3." << endl;

    const char K1 = '4';
    const char K2 = '@';
    const char K3 = 'Y';

    cout << "Created const char constants: '4', '@', 'Y'." << endl;

    char a = 'A';
    char b = 'B';
    char c = 'C';

    cout << "Initialized char variables at creation: a='A', b='B', c='C'." << endl;

    cout << "\nAssigning characters from literals and hex codes...\n";

    c1 = '4';
    c2 = '@';
    c3 = 'Y';

    char h1 = 0x02;
    char h2 = 0x56;
    char h3 = 0xB6;

    cout << "Assigned literals to c1, c2, c3." << endl;
    cout << "Assigned hex codes to h1, h2, h3." << endl;

    cout << "\n--- OUTPUT ---\n";

    cout << "c1 = '" << c1 << "'\n";
    cout << "c2 = '" << c2 << "'\n";
    cout << "c3 = '" << c3 << "'\n";

    cout << "h1 = 0x02 -> as int: " << (int)h1 << " (non-printable)\n";
    cout << "h2 = 0x56 -> '" << h2 << "'\n";
    cout << "h3 = 0xB6 -> '" << h3 << "' (depends on encoding)\n";

    return 0;
}
