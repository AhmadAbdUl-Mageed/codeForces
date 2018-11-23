#include<iostream>
using namespace std;
int main(void){
	long long n, S; cin >> n >> S;
	long long sum = S/n + ((S%n) && 1);

	cout << sum;
}

