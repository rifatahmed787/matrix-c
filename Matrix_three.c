#include<stdio.h>
int main(){

    int rows, cols;
    scanf("%d %d",&rows, &cols);    
    int a[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // access the row
    int e;
    scanf("%d", &e);
    for(int i=0; i<cols; i++){
        printf("%d ", a[e][i]);
      
    }
       printf("\n");
   
    // access the column
    int c;
    scanf("%d", &c);
    for(int i=0; i<rows; i++){
        printf("%d\n", a[i][c]);
    }
    return 0;
}