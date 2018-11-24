#include<iostream>
using namespace std;
int main(void){
	long q, l, r;	cin >> q;
	for(long i = 0; i < q; i++){
		cin >> l >> r;
		if((l%2) && (r%2))
			cout << ((l + r)/-2) << endl;

		else if(!(l%2) && !(r%2))
			cout << ((l + r))/2 << endl;
		else if((r%2)){
			long sum = 0;
			l ++;
			sum = ((l+r)/-2);
			l --;
			sum += l;
			cout << sum << endl;
		}
		else if(!(r%2)){
			long sum = 0;
			l ++;
			sum = ((l+r)/2);
			l --;
			sum -= l;
			cout << sum << endl;
		}

	}
	return 0;
}
	
