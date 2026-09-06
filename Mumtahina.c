#include <stdio.h>

int main()

{
int number_press;
do {
printf("======= EEE Pocket Tool =======\n");
printf("1. Series circuit solver press");
printf("\n2. Parallel circuit solver press");
printf("\n3. Resistor value determiner press");
printf("\n4. Equivalent resistance press");
printf("\n5. Voltage divider Calculator press");
printf("\n0. Exit");
printf("\nEnter your choice: ");
scanf("%d", &number_press);

if (number_press == 1)
{
Series_circuit_solver();
}

if (number_press == 2)
{
Parallel_circuit_solver();
}

if (number_press == 3)
{
resistor_value_determiner();
}

if (number_press == 4)
{
equivalent_resistance();
} 

if (number_press == 5)
{
voltage_divider();
}

}
while (number_press != 0); 

    
return 0;
}