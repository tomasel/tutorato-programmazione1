

/*
o   H   H   H   o
-   o   H   o   H
-   -   o   H   H   
-   o   -   o   H
o   -   -   -   o
*/

#include <iostream>

using namespace std;

int main(){
    int n = 5;
    int m = 5;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == j || i == n-j-1)
                cout << "o ";
            else if (i < j)
                cout << "H ";
            else
                cout << "- ";;
        }
        cout << endl;
    }

    return 0;
}
