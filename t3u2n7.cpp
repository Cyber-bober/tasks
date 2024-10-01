#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    switch (x)
    {
        case 1: cout << "понедельник "; 
        if (x = 1) cout << "10:00-14:00"; break;
        case 2: cout << "вторник "; 
        if (x = 2) cout << "10:00-14:00"; break;
        case 3: cout << "среда "; 
        if (x = 3) cout << "10:00-14:00"; break;
        case 4: cout << "четверг "; 
        if (x = 4) cout << "10:00-14:00"; break;
        case 5: cout << "пятница "; 
        if (x = 5) cout << "10:00-14:00"; break;
        case 6: cout << "суббота "; 
        if (x = 6) cout << "выходной"; break;
        case 7: cout << "воскресенье "; 
        if (x = 7) cout << "выходной"; break;
        default: cout << "вы ошиблись";
    }
    
    return 0;

}