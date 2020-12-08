#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) os << a[i] << '\n';
    return os;
}

int main()
try {

    int num = 7;
    int* p1 = &num;

    cout << "The pointer: " << p1 << "and the number: " << *p1 << endl;

    int* p2 = new int[7];
    int x = 1;
    for (int i = 0; i < 7; ++i){
        p2[i] = x;
        x*=2;
    }

    cout << "The pointer: " << p2 << "and the array: " << endl;

    // for (int i = 0; i < 7; ++i){
    //     cout << p2[i] << " ";
    // }
    print_array(cout, p2, 7);

    cout << "-----------------------------------" << endl;

    int* p3 = p2;

    p2 = p1;
    p2 = p3;

    cout << "The pointer 'p1': " << p1 << "the value: " << *p1 << endl;
    cout << "The pointer 'p2': " << p2 << "the value: " << *p2 << endl;

    delete[] p2;

    p1 = new int[10];
    p2 = new int[10];

    x = 1;
    for (int i = 0; i < 10; ++i){
        p1[i] = x;
        x*=2;
    }

    for (int i = 0; i < 10; ++i){
        p2[i] = p1[i];
    }

    cout << "-----------------------------------" << endl;
    print_array(cout, p2, 10);

    cout << "-----------------------------------" << endl;

    vector<int> v1 (10);
    vector<int> v2 (10);

    int y = 1;
    for (int& v : v1) {
        v = y;
        y*=2;
    }

    v2 = v1;

    for (int v : v2) cout << v << endl;
    

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