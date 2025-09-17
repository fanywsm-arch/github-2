#include <iostream>
using namespace std;

int main() {
	float tb, bb, BMI;
	
	cout << "masukkan nilai tb" << endl;
	cin >> tb;
	cout << "masukkan nilai bb" << endl;
	cin >> bb;
	
	BMI = bb / (tb * tb);
	
	if  (BMI < 18.5){	
		cout << "nilai BMI= " << BMI << " underweight" << endl;
	} else if (BMI >= 18.5 && BMI <23){
		cout << "nilai BMI = " << BMI << " normal" << endl;
	} else if ( BMI >= 23 && BMI < 30){
		cout << " nilai BMI = " << BMI << " overweight" << endl;
	} else if ( BMI >= 30){ 
		cout << "nilai BMI = " << BMI << endl;
	}
	
	return 0;
}

