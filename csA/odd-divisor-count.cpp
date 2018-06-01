#include <iostream>
#include <math.h>
#define fastcin ios_base::sync_with_stdio(0), cin.tie(NULL)

using namespace std;

int main() {
    int a, b, c, sum = 0;
    fastcin;
    cin >> a >> b;
    
    for (; a < b ; a++) {
        c = sqrt(a);
        
        if (c * c == a)
            sum++;
    }
    
    cout << sum << "\n";
    return 0;
}