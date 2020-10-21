#include "std_lib_facilities.h"

int main(){
	cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
	string first_name;

	cin >> first_name;

	cout << "Enter the name of another friend: \n";

	string friend_name;

	cin >> friend_name;

	char friend_sex = '0';
	
	cout << "Enter an 'm' if your friend is male or 'f' if female: \n";

	cin >> friend_sex;

	while (!(friend_sex == 'm' || friend_sex == 'f')){
		cerr << "Please give a valid character: 'm' for male, 'f' for female!" << endl;
		cin >> friend_sex;
	}
	
	cout << "Enter the age of the recipient: \n";

	int age;

	cin >> age;

	cout << "Dear, " << first_name << "!\n";
	
	cout << "How are you?\nI am fine\nI miss you\nWe should meet sometimes.\nWhen are you available?" << endl;


	cout << "Have you seen " << friend_name << " lately?\n";


	if(friend_sex == 'm'){
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}

	if(friend_sex == 'f'){
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if(age <= 0){
		simple_error("you're kidding!");
	}

	if(age < 12){
		cout << "Next year you will be " << age + 1 << ".\n";
	}

	if(age == 17){
		cout << "Next year you will be able to vote." << endl;
	}

	if(age > 70){
		cout << "I hope you are enjoying retirement." << endl;
	}

	cout << endl << "Yours sincerely," << endl << endl;

	cout << "Marci" << endl; 

	return 0;
}
