#include<iostream>
#include<string>
using namespace std;

int main(){
    char str[] = { 'a', 'b', 'c', '\0'};

    cout << strlen(str) << endl;
    return 0;

}