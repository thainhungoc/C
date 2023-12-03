#include <iostream>
using namespace std;
int main() {
    int n, tram, hangChuc, donVi;
    cout<<"hay nhap mot so co 3 chu so:";
    cin >> n;
     tram = n/100;
     hangChuc = (n%100)/10;
     donVi = (n%100)%10;
    cout<<"chu so hang tram cua so "<<tram<<" la: "<<tram<<endl;
    cout<<"chu so hang chuc cua so "<<hangChuc<<" la: "<<hangChuc<<endl;
    cout<<"chu so hang don vi cua so "<<donVi <<" la: "<<donVi<<endl;
    return 0;
}
