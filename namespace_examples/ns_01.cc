#include <iostream>
using namespace std;

namespace first {
    int val = 500;
}

int val = 100;

int main() {
    int val = 200;
    cout << first::val << '\n';
    cout << val << '\n';
    cout << ::val << '\n';
    return 0;
}

/*
Output:
500
200
100
*/