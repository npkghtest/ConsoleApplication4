#include <iostream>
#include <cmath>
using namespace std;

struct Triangle {
    double    pointA[2],
        pointB[2],
        pointC[2];
};

int main() {

    Triangle t;

    double  a1 = t.pointA[0] = 15,
        a2 = t.pointA[1] = 10,
        b1 = t.pointB[0] = 5,
        b2 = t.pointB[1] = 6;

    cout << sqrt(pow(a1 - b1, 2) + pow(a2 - b2, 2));

    return 0;
}