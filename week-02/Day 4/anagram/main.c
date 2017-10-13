#include <stdio.h>
#include <stdlib.h>


int anagram(){

    char string_a[] = "kerekerdo";
    char string_b[] = "redorekek";

    char swap;

    int i, j;
    int n = strlen(string_a);
    int n1 = strlen(string_b);


    if(n != n1){
        printf("Words %d and %d are not the same length \n", string_a, string_b);
        return 0;
    }

    for(i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            if (string_a[j] > string_b[j+1]){
                       swap = string_a[j];
                string_a[j] = string_a[j+1];
               string_a[j+1]= swap;
            }
        }
    }

    for(i = 0; i < n; i++){
        //if string_a[i] != string_b[i]{
            printf("These are not anagrams \n");
            return 0;
//        } else {
        printf("These are anagrams");
        return 0;
        }
    }
//}

int main(){

    anagram();

    return 0;
}
