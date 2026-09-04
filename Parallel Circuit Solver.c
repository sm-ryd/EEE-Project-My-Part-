#include <stdio.h>

void pcs();

int main()
{
      int choice;
      printf("2. Parallel Circuit Solver\n");

      printf("\nEnter your choice: ");
       scanf("%d", &choice);

      switch (choice) {
        case 2:
             pcs();
            break;
          default:
          printf("Invalid Input !");   
      }     
        return 0;
}


  void pcs(){
   float v;
   int n;
    
    printf("\nEnter the source voltage (Vs): ");
    scanf("%f", &v);

    printf("\nEnter the number of resistors: ");
    scanf("%d", &n);
    printf("\n");
     
     if (n <= 0){
        printf("Invalid resistors Input!\n");
         return ;
     }
      float resis[n], rsum;

      for(int i = 0; i < n; i++){
         printf("Enter the value of R%d (Ohms): ", i + 1);
         scanf("%f", &resis[i]);
      
       if(resis[i] <= 0.0){
        printf("Please enter a resistor value greater than 0.\n");
        return ;
       }
      rsum = (1 / resis[i]);
      } 
       float req = 1 / rsum ;
       float I = v / req;
        printf("\n");
        printf("Equivalent Resistance (Req): %.2f Ohms\n", req);
        printf("Total Current (I): %.3f Amps\n", I);
         printf("\n");
        printf("Current through each resistor (Ii): \n");

         for(int j = 0; j < n; j++){
            float Ii = v / resis[j];
           printf("R%d (%.2f Ohms): %.2f Amps\n", j+1, resis[j], Ii); 
         }

  } 
    
