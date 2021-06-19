#include <iostream>
#include <cctype>
using namespace std;

string question_marks(string str) {

    int qm_count = 0, d_count = 0, fdigit = 0, ldigit = 0;

    string validity_check = "False";

    for (char c : str) {

        if (c == '?' && fdigit != 0)
            qm_count++;
        
        if (isdigit(c)) {
            
            d_count++;

            if ((d_count % 2) != 0) {
                fdigit = int(c)- 48;
                ldigit = 0;
                qm_count = 0;
            } else 
                ldigit = int(c) - 48;
        }

        if ((qm_count > 3) || ((fdigit != 0 && ldigit != 0) && qm_count < 3))
            return "False";


        if (qm_count == 3 && fdigit + ldigit == 10)
            validity_check = "True";
    }

    return validity_check;

}

int main(void) {

    cout << question_marks("dsdddg8???2jdgd9???1fs7??3fgr");

    return 0;
}
