#include <iostream>

using namespace std;

int primeChecker(int a) {
	int c =0;
	for(int b = 3;b<=a;b++) {
		if(a%b == 0) {
			c++;
			
		}
	}
	if(c == 1) {

	return 1;

	}else{

	return 0;

	}
}

int main() {
int b= 0;
for(int a=0;;a++) {
	
	if(primeChecker(a)==1) {	
	b++;
	
	
	}
	
	if(b == 10001) {
	cout << a << endl;
	return 0;
	}
}
}
