#include<iostream> 
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};

    int matrix[4][3] = {{1,2,3}, {4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int colms =3;

    for (int i=0; i<rows; i++){
        for(int j=0; j<colms; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}