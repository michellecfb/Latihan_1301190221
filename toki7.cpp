#include <iostream>

using namespace std;

int main() 
{
    int faktor = 0, n;
    cin >> n;
    for (int i = 2 ; i <= n; i++) {
        for (int j = 1 ; j <= n ; j++) {
            if (i % j == 0) {
                faktor++;
            }
        }
        int pangkat = 0;
        if (faktor == 2 && n % i == 0) {
            while (n % i == 0) {
                n /= i;
                pangkat++;
            }
            if (pangkat > 1 && n > 2) {
                cout << i << "^" << pangkat << " x ";
            } else if (pangkat > 1 && n <= 2) {
                cout << i << "^" << pangkat;
            } else if (pangkat <= 1 && n > 2) {
                cout << i << " x ";
            } else if (n <= 2 && pangkat <= 1) {
                cout << i;
            }
        }
        faktor = 0;
    }
}