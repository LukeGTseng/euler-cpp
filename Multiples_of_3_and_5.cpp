#include <iostream>
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
using namespace std;

int main() {
int a;
int b;
int c;
int d = 0;
int e = 0;
int f = 0;
for(a = 0;a<1000;a=a+3) {
	d = d + a;
}
for(b = 0;b<1000;b=b+5) {
	e = e + b;
}
for(c = 0;c<1000;c=c+15) {
	f = f + c;
}
cout << d + e - f << endl;
}
