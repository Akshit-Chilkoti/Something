#include <iostream>
#include <string>
#include "something.h"
using namespace std;

int main()
{
    string somestuff;
    cout << "The Something CLI\n\a";
    cout << "Something: ";
    cin >> somestuff;
    something(somestuff);
}