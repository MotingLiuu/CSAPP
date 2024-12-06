#include <stdio.h>

void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *y ^ *x;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt){
    int first, last;
    for(first=0, last = cnt-1; first <= last; first++, last--){
        if(first == last){
            break;
        }
        inplace_swap(&a[first], &a[last]);
    }
}

int main(){
    int x = 12345;
    int y = 54321;
    int a[5] = {1, 2, 3, 4, 5};
    reverse_array(a, 5);
    inplace_swap(&x, &y);
    printf("x = %d, y = %d \n", x, y);
    for(int i=0; i<5; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}