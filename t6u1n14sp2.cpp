#include <iostream> //Двумерный статичный массив
using namespace std;
int main() {
    int a[5][5];
    int n, m;
    cout << "n= ";
    cin >> n;
    cout << "m= ";
    cin >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            cout << "b[" << i << "][" << j  << "]=";
            cin >> a[i][j];
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            if (a[i][j] % 2 != 0) {
                cout << i << "\t" << j << endl;
            }
        }
    return 0;
}