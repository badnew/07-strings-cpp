#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char str[80] = "\001Hello";

    cout << "str: \"" << str << "\"\n";

    _getch();
    return 0;
}