#include<iostream>
using namespace std;
int main(void){
	long n, k;	cin >> n >> k;
	long nOfSheets = (n*8/k) + (((n*8)%k) && 1) + (n*5/k) + (((n*5)%k) &&1) + (n*2/k) + (((n*2)%k && 1));
	cout << nOfSheets;
	return 0;
}
