#include <iostream>

using namespace std;

int is_prime(int x) {
    if (x == 1) return 0;
    for( int i{ 2 } ; i < x ; i++ ) {
        if( x % i == 0 ) 
            return 0;
    }
    cout << x << '\n';
    return 0;
}

int main(){
	int x, y, t;
	cin >> t;

	while ( t-- ) { 
	    cin >> x >> y;
        for (; x <= y; x++) {
            is_prime(x);
        }
	}

	return 0;
}