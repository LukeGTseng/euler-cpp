#include <iostream>

using namespace std;
int a;
int b;
int d;
int e;

int main() {
	
	for(int i = 1;i<=100;i++) {
		a = i*i;
		b=b+a;
	}
	for(int c =1;c<=100;c++) {
		d = d +c;
	}
	e = d*d;
	cout << e - b<<endl;
}
