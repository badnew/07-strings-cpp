#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char str[] = "Hello";

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    cout << len << endl;
    cout << strlen(str) << endl;

    _getch();
    return 0;
}