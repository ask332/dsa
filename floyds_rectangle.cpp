// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void floyds_tri(int rows){
    int k = 1;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
int main() {
    // Write C++ code here
    
    floyds_tri(5);
    return 0;
}
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/
