#include "../std_lib_facilities.h"

int* ga = new int[10] { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int* array, int n){
    int* la = new int[10];

    for (int i = 0; i < 10; ++i){
        la[i] = ga[i];
    }

    for (int i = 0; i < 10; ++i){
        cout << la[i] << " ";
    }

    cout << endl;

    int* p = new int[n];

    for (int i = 0; i < n; ++i){
        p[i] = array[i];
    }

    cout << "Elements of free-store array: " << endl;

    for (int i = 0; i < n; ++i){
        cout << p[i] << " "; 
    }

    cout << endl;

    delete[] p;

}

int main()
try {
	
    f(ga, 10);

    int* aa = new int[10];

    int x = 1;
    for (int i = 2; i < 12; ++i){
        aa[i-2] = x;
        x*=i;
    }

    cout << "---------------------------" << endl;

    f(aa, 10);

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
