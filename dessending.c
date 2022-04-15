#include<stdio.h> 

int main(){
    int array[10];

    int i;
    int j;
    int temp;


    for(i=0; i < 10; i++ ) {

        printf("Enter array element ");
        scanf("%d",&array[i]);
    }


    for(i=0; i < 10; i++){

        for(j=i+1; j < 10 ; j++){

            if(array[i]-array[j] < 0){
                 temp = array[i];


                array[i] = array[j];
                array[j] =temp;

           





            }
        }
    }
    // 
    for(i=0; i < 10; i++){

        printf("%d ", array[i]);
    }

}