#include<iostream>
#include<bits/stdc++.h>

using namespace std;
template<class T>
void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 5,b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a,b);
    cout << a << " - " << b << endl;

    char c = 'A', d = 'B';
    cout << c << " - " << d << endl;
    Swap<char>(c,d);
    cout << c << " - " << d << endl;

    system("pause>0");
    return 0;
}
