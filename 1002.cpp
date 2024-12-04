#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
 
int main() {
    double r;
    cin >> r;
    r=3.14159*r*r;
    cout << "A=" << setprecision(4) << r  <<endl;
 
    return 0;
}