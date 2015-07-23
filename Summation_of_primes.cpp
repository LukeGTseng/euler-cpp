#include <iostream>

using namespace std;

int primeChecker(int x) {
	int c = 0;
	for(int b =3;b<=x;b+=2) {
		if(x%b ==0) {
			c++;
			}
	}
	if(c ==1) {
		return 1;
	}
}

int main() {
	int a;
	for(int z = 1;z<=2000000;z++) {
		if(primeChecker(z) == 1) {
			a = a + z;	
		}
	}
	cout << a << endl;
	return 0;
}
