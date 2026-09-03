#include <stdio.h>

void vdc();

int main()
{
      int choice;
      printf("5. Voltage Divider Calculator\n");

      printf("\nEnter your choice: ");
       scanf("%d", &choice);

      switch (choice) {
        case 5:
             vdc();
            break;
          default:
          printf("Invalid Input !");   
      }     
        return 0;
}
 
 void vdc(){
    float r1, r2, Vo, Vi;
    int cho;
     
     printf("\n1. Output Voltage Determiner\n");
     printf("2. Resistance Calculator for Desired Output\n");

    printf("\nWhat do you want to determine ? ");
     scanf("%d", &cho);

     switch (cho) {
        case 1:

          printf("\nEnter Vin: ");
           scanf("%f", &Vi);
          printf("Enter R1: ");
           scanf("%f", &r1);
          printf("Enter R2: ");
           scanf("%f", &r2);

       Vo = Vi * (r2 / (r1 + r2));

       printf("\nThe output Voltage is: %.2f", Vo);
       break;   

        case 2:

          printf("\nEnter Vin: ");
           scanf("%f", &Vi);
          printf("Enter Vo: ");
           scanf("%f", &Vo);
          printf("Enter R1: ");
           scanf("%f", &r1); 

          r2 = r1 * (Vo / (Vi - Vo));

          printf("\nThe Resistance is: %.2f", r2);
          break;

          default:
            printf("Wrong Choice!");  
     }
 }


