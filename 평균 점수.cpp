#include <iostream>

using namespace std;

int main() {
	int student[100];
	int sum=0;
	int avr = 0;
	int i;
	//cin >> student[i];
	
	for(i = 0; i < 5; i++) {
		cin >> student[i];
		if(student[i]%5 ==0 && student[i] >= 0 && student[i] <= 100) {	
			if(student[i] < 40){
				student[i] = 40;
				sum = student[i] + sum;
			}
			else {
				sum = student[i] + sum;
		
			}
		}
	}
	avr = sum/5;
	cout << avr;
	
	return 0;
}
