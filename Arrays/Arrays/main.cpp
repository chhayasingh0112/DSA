#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
    for (int i = 0; i < 4; i++) {
        cout << i << ": " << cars[i] << "\n";
    }
    return 0;
}