#include <iostream>
using namespace std;

int factorial(int num) {

    int result = 1;

    for (; num > 0; num--)
        result *= num;

    return result;

}

int main(void) {

    cout << factorial(5);

    return 0;
}