#include "../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a)
{
    for (int i = 0; i < 10; ++i) os << a[i] << '\n';
    return os;
}

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) os << a[i] << '\n';
    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int vv : v) os << vv << '\n';
    return os;
}

int main()
try {

    int* array10 = new int[10];

    int x = 100;
    for (int i = 0; i < 10; ++i){
        array10[i] = x;
        ++x;
    }

    print_array10(cout, array10);
    delete[] array10;

    int* array11 = new int[11];

    x = 100;
    for (int i = 0; i < 11; ++i){
        array11[i] = x;
        ++x;
    }

    print_array(cout, array11, 11);
    delete[] array11;

    int* array20 = new int[20];

    x = 100;
    for (int i = 0; i < 20; ++i){
        array20[i] = x;
        ++x;
    }

    print_array(cout, array20, 20);
    delete[] array20;

    cout << "---------------------------" << endl;

    vector<int> vec10(10);

    int y = 100;
    for (int& v : vec10) {
        v = y;
        ++y;
    }

    print_vector(cout, vec10);

    vector<int> vec11(11);

    y = 100;
    for (int& v : vec11) {
        v = y;
        ++y;
    }

    print_vector(cout, vec11);

    vector<int> vec20(20);

    y = 100;
    for (int& v : vec20) {
        v = y;
        ++y;
    }

    print_vector(cout, vec20);

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
