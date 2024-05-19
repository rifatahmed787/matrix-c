#include<stdio.h>
int main(){

    int rows, cols;
    scanf("%d %d",&rows, &cols); 
    int element=rows*cols;   
    int a[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;
     for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(a[i][j]==0){
                count++;
            }
        }
    }

    if(element == count){
        printf("Zero Matrix");
    }else{
        printf("Not zero matrix");
    }
    return 0;
}