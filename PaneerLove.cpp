#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, p, cost, min;
    cin >> a >> p;
    cost = a * p;
    min = p;
    while (--n) {
        cin >> a >> p;
        if (min > p) {
            min = p;
        }
        cost += a * min;
    }
    cout << cost;
    return 0;
}