#include <iostream>
using namespace std;

namespace first {
    int val1 = 500;
}

namespace first {
    int val2 = 501;
}

int main() {
    cout << first::val1 << "\n";
    cout << first::val2 << "\n";
    return 0;
}