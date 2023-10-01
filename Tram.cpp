#include <iostream>
using namespace std;
int main() {
    int n, a, b, capacity=0, max=0, lastcapacity=0;
    cin>> n;
    while (n){
        cin >> a>> b;
        capacity=(lastcapacity-a)+b;
        lastcapacity=capacity;
        if (capacity>max)
            max=capacity;
        n--;
    }
    cout<< max;
    return 0;
}
