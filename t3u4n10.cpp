#include <iostream>
#include <cmath>
using namespace std;

int main(){
    for (int i = 8; i >=4; --i) {
        for (int k = 6; k > (9 - i); --k){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}