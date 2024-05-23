#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    
    if (n <= 0) {
        cout << "Number of elements should be greater than zero." << endl;
        return 1; 
    }
    
    double product = 1.0;
    
    
    for (int i = 0; i < n; i++) {
        double number;
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        product *= number;
    }
    
    
    cout << "The product of the entered numbers is: " << product << endl;
    
    return 0; 
}
