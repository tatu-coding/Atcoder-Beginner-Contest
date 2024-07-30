#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x, y;
    cin >> x >> y;

    int price[3];
    price[0] = a * x + b * y;

    int min = price[0];

    if ((a + b) > c * 2) {
        if (x > y) {
            price[1] = a * (x - y) + c * 2 * y;
            price[2] = c * 2 * x;    
        } else {
            price[1] = b * (y - x) + c * 2 * x;
            price[2] = c * 2 * y;
        }

        for (int i = 1; i < 3; i++) {
            if (min > price[i]) {
                min = price[i];
            }
        }   
        cout << min << endl;
    } else {
        cout << price[0] << endl;
    }
}