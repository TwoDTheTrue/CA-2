#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calculator = Calculator();
    cout << calculator.Add(3, 5) << endl;
    return 0;
}
