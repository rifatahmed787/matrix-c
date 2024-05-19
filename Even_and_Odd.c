#include<stdio.h>

void odd_even(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

   int countOdd=0, countEven=0;
   for(int i=0; i<n; i++){
     if(a[i]%2==0){
        countEven++;
     }else{
        countOdd++;
     }
   }
   printf("%d %d", countEven, countOdd);
}
int main(){

    odd_even();
    return 0;
}