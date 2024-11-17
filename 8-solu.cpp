#include <iostream>
using namespace std;

int main(){
    char ch;
    cout <<" enter any char \n ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "lowercase\n";
    }
    else {
        cout<< "upercase\n";
    }
    

    return 0;
}