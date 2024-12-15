#include <stdio.h>

void userArray(int integers[3][3]){

    printf("Enter 9 integers consecutive to represent 3 rows of 3 digits: \n");
    scanf("%d %d %d %d %d %d %d %d %d", &integers[0][0], &integers[0][1], &integers[0][2], &integers[1][0],     
                                        &integers[1][1], &integers[1][2], &integers[2][0], &integers[2][1],         
                                        &integers[2][2]);

    printf("\nArray of 9 integers in 3 rows and 3 columns \n");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", integers[i][j]); // the inside loop will iterate both indexes i and j for all of the rows and columns that we have.
        }
        printf("\n");  //just to make it not look cluttered.

    
    }
   
}

void calculateSum(int integers[3][3]){

    printf("\nSum of each row\n");

    int row1 = integers[0][0] + integers[0][1] + integers[0][2];
    int row2 = integers[1][0] + integers[1][1] + integers[1][2];
    int row3 = integers[2][0] + integers[2][1] + integers[2][2];

    printf("Row 1 sum: %d\n", row1);
    printf("Row 2 sum: %d\n", row2);
    printf("Row 3 sum: %d\n", row3);
}

int main (){

    int integers[3][3];
    
    userArray(integers);
    calculateSum(integers);
    
    return 0;
}