#include <iostream>
#include <string>
using namespace std;

string reverse(string str) {

    string str_cpy = str;

    int str_length = str.length() - 1;

    for (int i = 0; i <= str_length; i++)
        str_cpy[i] = str[str_length - i];

    return str_cpy;
}

int main(void) {

    cout << reverse("coderbyte");

    return 0;
}