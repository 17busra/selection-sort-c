#include <stdio.h>


void Selection(int dizi[], int n) {
  
  int i , j ,min;
  
    for (i = 0; i < n - 1; i++) {
      min = i;
        for ( j = i+1; j < n ; j++) {
          if(dizi[j] < dizi[min]){
            min = j;
          }
        }
        if(min != i){
        
           int temp = dizi[i];
            dizi[i] = dizi[min];
            dizi[min] = temp;
        
        }
      }
      
      
}
          


int main() {
    int n = 6;
    int dizi[] = {29,5,8,11,2,24}; 

    Selection(dizi, n);

    for (int i = 0; i < n; i++) {
        printf("%d ,", dizi[i]);
    }
    
    return 0;
}
