
#include<iostream>
#include<string>

using namespace std;

bool check_neighbours(char test[][1000], int row_index, int char_index, bool valid){
    if (valid){
        return valid;
    }

    // check left
    if (row_index-1 >= 0){
        if (test[row_index - 1][char_index] == '#'){
            valid = true;
        }
    }
    if (char_index-1 >= 0){
        if (test[row_index][char_index - 1] == '#'){
            valid = true;
        }
    }

    if (char_index + 1 < 1000){
        if (test[row_index][char_index + 1] == '#'){
            valid = true;
        }
    }

    if (row_index + 1 < 1000){
        if (test[row_index + 1][char_index] == '#'){
            valid = true;
        }
    }

    if (row_index-1 >= 0 && char_index-1 >= 0){
        if (test[row_index - 1][char_index - 1] == '#'){
            valid = true;
        }
    }

    if (row_index-1 >= 0 && char_index + 1 < 1000){
        if (test[row_index - 1][char_index + 1] == '#'){
            valid = true;
        }
    }

    if (row_index + 1 < 1000 && char_index-1 >= 0){
        if (test[row_index + 1][char_index - 1] == '#'){
            valid = true;
        }
    }

    if (row_index + 1 < 1000 && char_index + 1 < 1000){
        if (test[row_index + 1][char_index + 1] == '#'){
            valid = true;
        }
    }

    return valid;
}

int main() {
  
    const int MAX = 1000;
    char test[MAX][MAX];
    FILE *fp;

    fp = fopen("3.txt", "r");

    int total_sum = 0;

    int row_index = 0;
    while(fgets(test[row_index], MAX, fp) != NULL){

        int char_index = MAX; 
        int temp_digit = 0;
        int exp = 1; 
        bool current_digit_is_valid = false;
        while (char_index >= 0){
            
            if (test[row_index][char_index] >= '0' && test[row_index][char_index] <= '9'){
                current_digit_is_valid = check_neighbours(test, row_index, char_index, current_digit_is_valid);
                temp_digit += (test[row_index][char_index] - '0') * exp;
                exp *= 10;
            } else {

                if (current_digit_is_valid){
                    total_sum += temp_digit;
                }

                // reset everything
                current_digit_is_valid = false;
                temp_digit = 0;
                exp = 1;
            }
            char_index--;            
        }
        row_index++; 
    }

    cout << total_sum << endl;

    fclose(fp);
    return 0;
}