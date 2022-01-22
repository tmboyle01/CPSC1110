/*  Taylor Boyles, February 17, 2021
    CPSC 1110 section 001
    asg01
    1. This program asks the user for a decimal number and then converts that number
       to different bases.
    2. Before I got started I probably throught it would take someware between 2-4 hours to code
    3. It took me btween 12-18 hours to code.


*/
#include <stdio.h>


int main(void){

 // Variables
  int num;
  int b;
  int c;
  int count;
  int input;
  char answer;
  int max_count;
  int min_count;
  int j;
  int h;
  char ignore;

  // askes user to inter a number
  printf("Enter an integer (non-negative): ");
  scanf("%d", &num);
  printf("Sum of digits:\n");

 count = 0;
 max_count = 0;
 min_count = 11;

 for(b = 10; b>=2; b = b - 1){ //for loop decrements the bases
   input = num;
   count = 0;

    while(input!=0){ //while loop calculates the differnet bases
        c = input % b;

        count = count + c;
        input/=b;

}
if (count > max_count){ // calculates the max count of all the bases
  max_count = count;
  j = b;

}
if (count < min_count){ // calculates the min count of all the bases
  min_count = count;
  h = b;
}

  printf("Base %d:   %d\n", b, count); // prints the bases and the base conversion #

}
printf("%d has the greatest sum of digits in base %d and the least sum of digits in base %d\n",num, j, h);




  printf("Input another number? Y/N: "); //askes the user if they want to input another #
  scanf(" %c", &answer);
  while ((ignore = getchar()) != '\n' && ignore !=EOF)
  ;//new

     while (answer == 'Y'){
        printf("Enter an integer (non-negative): "); // if number is yes, then askes to enter anothe number
        scanf("%d", &num);
        printf("Sum of digits:\n");

count = 0;
max_count = 0;
min_count = 11;

for(b = 10; b>=2; b = b - 1){ // for loop that decrements the bases
 input = num;
 count = 0;
  while(input!=0){ // while loop that calculates the base conversions
      c = input % b;

      count = count + c;
      input/=b;

}
if (count > max_count){ // calculates the max count in the set
max_count = count;
j = b;

}
if (count < min_count){ // calculates the min count in the set
min_count = count;
h = b;
}

printf("Base %d:   %d\n", b, count); // prints out the base and the base converstions

}
printf("%d has the greatest sum of digits in base %d and the least sum of digits in base %d\n",num, j, h);
}
return 0;
}
