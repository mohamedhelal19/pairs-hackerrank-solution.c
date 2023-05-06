#include <stdio.h>
#include <stdlib.h>

void B_sort(int n , int* arr){
    int i;
    int j;
    int temp;

    for(i=0; i<n ; i++){
        for(j=i+1 ; j<n ; j++){
            if(*(arr+i)>*(arr+j)){
                temp = *(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    }

int pairs(int k , int n , int* arr){
    int i=0;
    int j=0;
    int count=0;
    B_sort(n,arr);

    while(j<n){
        int diff=arr[j]-arr[i];

        if(diff==k){
            count++;
            i++;
            j++;
        }
        else if(diff<k){
            j++;
        }
        else{
            i++;
        }
    }
    return count;
    }
int main()
{
     int arr[] = {1, 5, 3, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int result = pairs(target, n, arr);

    printf("Number of pairs with difference %d: %d\n", target, result);

    return 0;
}
