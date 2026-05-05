#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    bool Upper = (ch >= 'A' && ch <= 'Z');
    bool Lower = (ch >= 'a' && ch <= 'z');

    cout << "Uppercase: " << Upper << endl;
    cout << "Lowercase: " << Lower << endl;
    cout << "Not a letter: " << !(Upper || Lower) << endl;

    return 0;
}