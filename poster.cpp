#include<iostream>
using namespace std;

int main() {
    int gn, p, t, tot;
    float d = 0, na; // Initialize 'd' to 0
    cout << "SPORTS COMPLEX\n================\nG.no \t G.name \t G.price\n1. \t Vollyball \t 50/-\n2. \t Football \t 100/-\n3. \t Golf \t\t 150/-\n4. \t Swimming \t 200/-" << endl;
    cout << "Enter any game number (1-4)" << endl;
    cin >> gn;
    switch (gn) {
        case 1: 
            p = 50;
            break;
        case 2: 
            p = 100;
            break;
        case 3: 
            p = 150;
            break;
        case 4: 
            p = 200;
            break;
        default:
            cout << "Invalid game number." << endl;
            return 1; // Exit with an error code
    }
    cout << "Enter total number of hours to play" << endl;
    cin >> t;
    tot = p * t;
    
    if (tot >= 1000) {
        d = 0.075 * tot;
        cout << "Discount given" << endl;
    }
    else {
        cout << "No discount" << endl;
    }
    
    na = tot - d;
    cout << "Total amount: " << tot << endl;
    cout << "Discount: " << d << endl;
    cout << "Net Amount: " << na << endl;
    
    return 0;
}
