//Bubble sort code
#include "bubble_sort_lib.h"
#include <stdio.h>
void bubble_sort(int array[],int size){
    int temp = 0;
    for(int i = 0;i <= size - 1;i++){
        for(int j = 0;j <= size -1 - 1; j++){
             if(array[j] > array[j+1]){
              temp = array[j];
              array[j] = array[j + 1];
              array[j + 1] = temp;
             }
        }
    }
    printf("your sorted array:");
    for(int i = 0; i <= size - 1; i++){
        printf(" %d , " , array[i]);
    }
}
