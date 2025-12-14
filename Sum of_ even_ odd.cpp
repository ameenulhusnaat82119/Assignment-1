#include <iostream>
using namespace std;

int main() {
    int n, num;
    int Sum_even = 0; 
    int Sum_odd = 0;

    cout << "Enter  integer numbers: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num % 2 == 0)
            Sum_even += num;
        else
            Sum_odd += num;
    }

    cout << "Sum of Even Numbers = " << Sum_even << endl;
    cout << "Sum of Odd Numbers = " << Sum_odd << endl;

    return 0;
}
