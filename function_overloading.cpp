#include<bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    return a + b;
}


int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

int main() {

    cout << "Sum of 2 and 3 is: " << add(2, 3) << endl;
    cout << "Sum of 2, 3, and 4 is: " << add(2, 3, 4) << endl;
    cout << "Sum of 2.5 and 3.5 is: " << add(2.5, 3.5) << endl;

    return 0;
}
