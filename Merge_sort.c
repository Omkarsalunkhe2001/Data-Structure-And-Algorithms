#include<stdio.h>

void merge(int *arr, int *leftArray, int ls, int *rightArray, int rs){

    int i=0, j=0, k=0;
    while(i<ls && j<rs){
        if(leftArray[i] <= rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        }else{
            arr[k]=rightArray[j];
            j++;
        }
        k++;

    } 
    while(i<ls){
        arr[k]=leftArray[i];
        i++;
        k++;
    }
    while(j<rs){
        arr[k]=rightArray[j];
        j++;
        k++;
    }
}

void mergesort(int *arr, int n){
    
   if (n < 2)
        return;

int ls = n / 2;
int rs = n - ls;

int leftArray[ls], rightArray[rs], i;

for(i=0; i<ls; i++)
    leftArray[i]=arr[i];
for(i=ls; i<n; i++)
    rightArray[i-ls]=arr[i];

mergesort(leftArray, ls);
mergesort(rightArray, rs);
merge(arr, leftArray, ls, rightArray, rs);
    
}

int main(){
    int i, size;
    printf("Enter Array size :");
    scanf("%d", &size);
    int a[size];

    printf("Enter Array values :");
    for(i=0; i<size; ++i){
        scanf("%d", &a[i]);

    }

    mergesort(a, size);

    for(int i=0; i<size; i++)
        printf("%d ", a[i]);

   return 0;

}