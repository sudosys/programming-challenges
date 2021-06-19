#include <iostream>
#include <cctype>
using namespace std;

string longest_word(string str) {

    str += " ";

    string cand = "", temp = "";

    for (char c : str) {

        if (isalpha(c))
            temp += c;
        else {
            if (temp.length() > cand.length()) {
                cand = temp;
                temp = "";
            }
        }
    }

    return cand;

}

int main(void) {

    cout << longest_word("I love computers!!!");

    return 0;
}