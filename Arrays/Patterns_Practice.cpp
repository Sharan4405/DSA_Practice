#include <bits/stdc++.h>
using namespace std;
void Patterns(int n){
    int cn = 0;
    for(int i = n - 1; i >=0; i--){
        for(int j = 0; j < n - i  ; j++){
            cout << j + 1 << " ";
        }
        for(int j = 2*i ; j >=0; j--){
           cout << " " << " ";

        }
        for(int j = n - i; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 5;
    Patterns(n);
    return 0;

}