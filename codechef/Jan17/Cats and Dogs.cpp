#include <iostream>
using namespace std;

#ifndef ll
#define ll long long
#endif

int main(int argc, char const *argv[])
{
	long int T; 
	cin >> T;
	while(T--) {
		ll int Cat, Dogs, Legs, tot;
		cin >> Cat >> Dogs >> Legs;

		ll int temp;
		tot = ((Cat + Dogs) * 4);

		if(Legs >= Dogs * 4 && Legs <= tot) {
			temp = Legs - (Dogs * 4);
			if(temp % 4 == 0) {
				temp /= 4;
				Cat -= temp;
				if(Cat <= Dogs * 2) {
					cout << "yes" << endl;
				} else {
					cout << "no" << endl;
				}
			} else {
				cout << "no" << endl;
			}
		} else {
			cout << "no" << endl;
		}
	} 
	return 0;
}
