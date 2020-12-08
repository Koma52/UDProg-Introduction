#include "../std_lib_facilities.h"

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v){
    vector<int> lv(v.size());

    lv = v;

    for (auto& x : lv){
        cout << x << " ";
    }

    cout << endl;

    vector<int> lv2 = v;

    for (auto& x : lv2){
        cout << x << " ";
    }
}

int main()
try {
	
    f(gv);

    cout << endl;

    vector<int> vv(10);

    int x = 1;
    for (int i = 2; i < 12; ++i){
        vv[i-2] = x;
        x*=i;
    }

    cout << "--------------------------" << endl;

    f(vv);

    cout << endl;

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
