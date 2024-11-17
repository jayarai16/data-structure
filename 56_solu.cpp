#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<map>
using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;

    for(auto p:m){
        cout << p.first<< " " <<p.second<<endl;
    }
    return 0;

}