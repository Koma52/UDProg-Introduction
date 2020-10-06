#include "std_lib_facilities.h"

int main(){
	int round = 0;
	double sum = 0;
	double small = 0;
	double large = 0;
	double z = 0;
	const double diff = 1.0/100;    // The number used by the almost equal part
	string unit = "";
	vector<double> values;

	while(cin >> z >> unit){
		if(unit == "cm"){
		if(round == 0){
			large = z;
			small = z;
		}
		if(z > large){
			large = z;
			cout << large << " is the largest number so far." << endl;
		}
		else if(z < small){
			small = z;
			cout << small << " is the smallest number so far." << endl;
		}
		sum += z * 0.01;
		values.push_back(z * 0.01);
		round++;
		}
                else if(unit == "m"){
		if(round == 0){
			large = z;
			small = z;
		}
		if(z > large){
			large = z;
			cout << large << " is the largest number so far." << endl;
		}
		else if(z < small){
			small = z;
			cout << small << " is the smallest number so far." << endl;
		}
		sum += z;
		values.push_back(z);
		round++;
		}
                else if(unit == "in"){
		if(round == 0){
			large = z;
			small = z;
		}
		if(z > large){
			large = z;
			cout << large << " is the largest number so far." << endl;
		}
		else if(z < small){
			small = z;
			cout << small << " is the smallest number so far." << endl;
		}
		sum += z * 0.0254;
		values.push_back(z * 0.0254);
		round++;
		}
                else if(unit == "ft"){
		if(round == 0){
			large = z;
			small = z;
		}
		if(z > large){
			large = z;
			cout << large << " is the largest number so far." << endl;
		}
		else if(z < small){
			small = z;
			cout << small << " is the smallest number so far." << endl;
		}
		sum += z * 0.3048;
		values.push_back(z * 0.3048);
		round++;
		}
		else{
			cout << "Illegal unit. Please use 'm', 'cm', 'in' or 'ft'!" << endl;
		}
	}
	cout << "The smallest number is: " << small << endl;
	cout << "The largest number is: " << large << endl;
	cout << "The sum of the values in meters: " << sum << endl;
	cout << "The number of values entered: " << round << endl;
	cout << "The values in increasing order:" << endl;

	sort(values);

	for(auto value : values){
		cout << value << endl;
	}

	return 0;
}
