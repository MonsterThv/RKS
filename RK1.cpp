#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float sum = 0;
    for (int i = 1; i <= 10; i++) {
        float a = 1 / sqrt(i * i * i);
        sum += a;
        cout << a << endl;
    }
    cout << sum;
}