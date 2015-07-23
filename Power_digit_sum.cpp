#include <iostream>
#include <cmath>

using namespace std;

int main() {

unsigned long a = pow(2,15);
int b = 0;
unsigned long long c =0;
while(a!=0) {
	b = a%10;
	a = a/10;
	c = c + b;
	}

cout << c << endl;

return 0;

}
