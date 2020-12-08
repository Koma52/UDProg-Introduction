#include "../std_lib_facilities.h"

int main()
try {

    int birth_year = 2002;

    cout << "Decimal: " << birth_year << '\n' << hex
         << "Hexadecimal: " << birth_year << '\n' << oct
         << "Octal: " << birth_year << '\n';
    
    cout << dec << 18 << endl;

    int a; int b; int c; int d;

    cin >> a >>oct >> b >> hex >> c >> d;
    cout << a << " " << b << " " << c << " " << d << endl;

    double number = 1234567.89;

    cout << "Defaultfloat: " << defaultfloat << number << endl;
    cout << "Fixed: " << fixed << number << endl; // Ez a legpontosabb, mert nem kerekít
    cout << "Scientific: " << scientific << number << endl;

    cout << '|' << setw(8) << "Márton" << '|' << setw(13) << "Kónya"
         << '|' << setw(16) << "30/266-4026"
         << '|' << setw(30) << "konyamarci02@protonmail.com" << "|\n"
         << '|' << setw(7) << "Bence" << '|' << setw(12) << "Veit"
         << '|' << setw(16) << "30/123-4567"
         << '|' << setw(30) << "veitbence@protonmail.com" << "|\n"
         << '|' << setw(8) << "Tamás" << '|' << setw(12) << "Vass"
         << '|' << setw(16) << "30/123-4567"
         << '|' << setw(30) << "vasstamas@protonmail.com" << "|\n"
         << '|' << setw(8) << "Márton" << '|' << setw(13) << "Szentléleki"
         << '|' << setw(16) << "30/123-4567"
         << '|' << setw(30) << "szmarton@protonmail.com" << "|\n"
         << '|' << setw(8) << "Dávid" << '|' << setw(12) << "Xu"
         << '|' << setw(16) << "30/123-4567"
         << '|' << setw(30) << "xudavid@protonmail.com" << "|\n"
         << '|' << setw(9) << "Máté" << '|' << setw(12) << "Bethlen"
         << '|' << setw(16) << "30/123-4567"
         << '|' << setw(30) << "bethlenmate@protonmail.com" << "|\n";



	return 0;
} 
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	return 1;
} 
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}
