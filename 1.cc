

#include <iostream>

using namespace std;

int main(){
   
    // read file 1.txt
    const int MAX = 1000;
    char test[MAX][MAX];
    FILE *fp;

    fp = fopen("1.txt", "r");

    // On each line, read in the string and parse digits
    int total_sum = 0;
    int i = 0;
    while(fgets(test[i], MAX, fp) != NULL){
        int calib = 0;
        int index = 0;
        int last_digit = 0;
        while(test[i][index] != '\n'){
            // if is digit
            if(test[i][index] >= '0' && test[i][index] <= '9'){
                if (calib == 0){
                    calib += (test[i][index] - '0') * 10;
                }
                last_digit = test[i][index] - '0';
            }
            index++;
        }

        calib += last_digit;

        cout << i << " - " << calib << endl;

        total_sum += calib;

        i++;
    }

    cout << total_sum << endl;

    fclose(fp);
    return 0;
}