#include <iostream>
using namespace std;
int main() {
    int n, tram, chuc, donVi;
    cout<<"Hay nhap mot so o 3 chu so";
    cin>>n;
    tram = n/100;
    chuc=(n%100)/10;
    donVi= (n%100)%10;
    cout<<"chu so hang tram cua so "<<n<<" la: "<<tram<<endl;
    cout<<"chu so hang chuc cua so "<<n<<" la: "<<chuc<<endl;
    cout<<"chu so hang don vi cua so "<<n<<" la: "<<donVi<<endl;
    return 0;
}
