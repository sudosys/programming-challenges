#include <iostream>
#include <string>
using namespace std;

string find_intersection(string strArr[]) {

    int fnum = 0, snum = 0;

    string intersection = "";

    for (int i = 0; i < strArr[0].length(); i++) {
        size_t find_comma0 = strArr[0].find(',', i);

        if (find_comma0 != string::npos) {
            fnum = stoi(strArr[0].substr(i, (find_comma0 - i)));
            i = find_comma0;
        } else {
            fnum = stoi(strArr[0].substr(i));
            i = strArr[0].length();
        }
        
        for (int j = 0; j < strArr[1].length(); j++) {
            size_t find_comma1 = strArr[1].find(',', j);

            if (find_comma1 != string::npos) {
                snum = stoi(strArr[1].substr(j, (find_comma1 - j)));
                j = find_comma1;
            } else {
                snum = stoi(strArr[1].substr(j));
                j = strArr[1].length();
            }

        if (fnum == snum)
            intersection.append(to_string(fnum) + ", ");
        }
    }

    if (intersection.empty())
        return "false";
    else {
        intersection.erase(intersection.length() - 2);
        return intersection;
    }
}

int main(void) {

    string A[] = {"1, 3, 4, 12, 13, 32", "1, 2, 4, 12, 32, 14, 13"};

    cout << find_intersection(A);

    return 0;
}