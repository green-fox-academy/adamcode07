#include <stdio.h>
#include <stdlib.h>


int anagram(){

    char string_a[] = "kutya";
    char string_b[] = "aytuk";

    char temp;

    int i, j;
    int n = strlen(string_a);
    int n1 = strlen(string_b);


    if(n != n1){
        printf("Words %s and %s are not the same length \n", string_a, string_b);
        return 0;
    }

    for(i = 0; i < n - 1; i++){
        for (j = 0; j < n - 1 - i; j++){
            if (string_a[j] > string_a[j+1]){

                       temp = string_a[j];
                string_a[j] = string_a[j+1];
               string_a[j+1]= temp;
            }
            if (string_b[j] > string_b[j+1]){

                       temp = string_b[j];
                string_b[j] = string_b[j+1];
               string_b[j+1]= temp;
            }
        }
    }

    printf("%s \n", string_a);
    printf("%s \n", string_b);
    printf("%d \n", n);
    printf("%d \n", n1);

    for(i = 0; i < n; i++){
        if (string_a[i] != string_b[i]){
            printf("These are not anagrams \n");
            return 0;
  //      } else {
    //    printf("These are anagrams");
      //  return 0;
        }
    }
    if (i == n){
        printf("These are anagrams");
    }
}

int main(){

    anagram();

    return 0;
}
