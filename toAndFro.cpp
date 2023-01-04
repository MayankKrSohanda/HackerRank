#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main()
// {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n;
//     cin >> n;
//     while (n--) {
//         int f, b, t, d;
//         cin >> f >> b >> t >> d;
//         int curPos = 0, cntF = 0, cntB = 0, totTime;
//         while (curPos < d) {
//             curPos += b;
//             if (curPos > d) {
//                 curPos -= b;
//                 break;
//             }
//             cntB++;
//             if (curPos == d) {
//                 break;
//             }
//             curPos -= f;
//             cntF++;
//         }
//         if (curPos == d) {
//             totTime = (cntB * b + cntF * f) * t;
//         }
//         else {
//             d -= curPos;
//             totTime = (cntB * b + cntF * f) * t + d * t;
//         }
//         cout << totTime << endl;
//     }
//     return 0;
// }

// OR

int main()
{
    int n;
    cin>>n;
    while (n--) {
        int f, b, t, d, td = 0;
        cin>>f>>b>>t>>d;
        while (b < d) {
            td = td + b + f;
            d = d - (b - f);
            cout<<"td: "<<td<<endl;
            cout<<"d: "<<d<<endl;
        }
        td = td + d;
        cout<<t*td;
    }
    return 0;
}