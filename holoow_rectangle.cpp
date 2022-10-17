// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void hollow_rect(int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(!(i % (rows - 1)) | !(j % (cols - 1)))
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
int main() {
    // Write C++ code here
    
    hollow_rect(5,4);
    return 0;
}
/*

Output :-
* * * * 
*     * 
*     * 
*     * 
* * * * 

*/
