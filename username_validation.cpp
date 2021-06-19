#include <iostream>
#include <cctype>
using namespace std;

string username_validation(string str) {

    string valid = "true";

    if (str.length() > 25 || str.length() < 4)
        valid = "false";
    else if (!(isalpha(str[0])))
        valid = "false";
    else if (str[str.length() - 1] == '_')
        valid = "false";

    for (char c : str)
        if(!(isalnum(c) || c == '_'))
            valid = "false";

    return valid;

}

int main(void) {

    cout << username_validation("u__hello_world123");

    return 0;
}