#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char str1[80], str2[80];

    cout << "Enter string1: ";
    cin.getline(str1, 80);
    cout << "Enter string2: ";
    cin.getline(str2, 80);

    system("cls");

    cout << "str1: \"" << str1 << "\"\n";
    cout << "str2: \"" << str2 << "\"\n\n";

    // copy str1 to str2
    // strcpy(str2, str1);

    // to look how it works, let's output the value
    int value = strcmp(str1, str2);
    cout << value << endl;

    // comparison of two strings
    if (!strcmp(str1, str2)) {
        cout << "The strings are equal.\n";
    } else {
        cout << "The strings aren't equal.\n";
    }

    _getch();
    return 0;
}