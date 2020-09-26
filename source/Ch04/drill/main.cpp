#include "std_lib_facilities.h"

int main(){
	double x = 0;
	double y = 0;
	char terminate = '0';
	
	while(terminate != '|'){
		cout << "Write a number: \n";
		cin >> x;

		cout << "Write another number: \n";
		cin >> y;

		cout << "The numbers are: " << x << " and " << y << endl;
		
		if(x != y){
			if(x > y){
				cout << "The smaller number is: " << y << endl;
				cout << "The larger number is: " << x << endl;
				if((x - y) < (1.0/100)){
					cout << "The numbers are almost equal." << endl;
				}
			}else{
				cout << "The smaller number is: " << x << endl;
				cout << "The larger number is: " << y << endl;
				if((y - x) < (1.0/100)){
					cout << "The numbers are almost equal." << endl;
				}
			}
		}else{
			cout << "The numbers are equal" << endl;
		}



		cin >> terminate;
	}

	return 0;
}
