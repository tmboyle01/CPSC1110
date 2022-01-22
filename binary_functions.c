/* Taylor Boyles
   CPSC 1111, spring 2021
   lab 9
   description: the purpose of this lab is to convert binary numbers to Decimal,
   and decimal numbers to binary using two seperate functions.

*/
#include<stdio.h>
#include<string.h>

// function declaration
int btod(int size, char inputBin[size]);
int dtob(int inputDec);

int main(){

    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    int bin = dtob(num); // calls the function that converts num to a binary number
    printf("The binary equivalent is: %d\n", bin); //prints teh converted num in bin


    char input[32]; // allows the array to store 32 bits
    printf("Enter a binary number: ");
    scanf("%s", input);
    int len = strlen(input); // returns the length of the string inpout
    int dec = btod(len, input); // calls the function that converts the binary number to dicimal
    printf("the decimal equivalent is: %d \n", dec);// prints the converted bin number in decimal




}

int dtob(int inputDec){ // function to convert decimal to binary

    int bin[32]; // allows the array to store 32 bits
    int i= 0;
    
    while(inputDec > 0){ //while loop that devides the number while inoputDec is greater than 0
        bin[i] = inputDec % 2; // stores remainder in an array
        inputDec /= 2; // devides the user input by two
        i++;
    }

    int ans = 0;// convert the int array into a number
    int a;
    for(a=i-1;a >= 0;a--){
        ans = ans*10 + bin[a];
    }
    return ans;
}


int btod(int size, char inputBin[size]){ // function to convert binary to a decimal
    int ans = 0;
    int count = 1;
    int i;

    for(i=size-1;i>=0;i--){// converting binary character arrary to decimal
        ans += count*(inputBin[i] - '0');
        count *= 2;
    }
    return ans;
}
