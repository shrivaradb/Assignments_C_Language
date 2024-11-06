#include <stdio.h>

int main() 
{
    int food;
    int quantity;
    int a,b,c,d,e,f,g;
    int total=0;
    a=60;
    b=60;
    c=100;
    d=65;
    e=120;
    f=150;
    g=30;

    printf("Select items from the menu below. Enter the number for each item and type '0 0' when done:\n");
    printf("1- Idli Sambar - Rs. %d\n",a);
    printf("2- Vada Sambar - Rs. %d\n",b);
    printf("3- Pav Bhaji - Rs. %d\n",c);
    printf("4- Burger - Rs. %d\n",d);
    printf("5- Pizza - Rs. %d\n",e);
    printf("6- Roti Sabji - Rs. %d\n",f);
    printf("7- Gulab Jamun - Rs. %d\n",g);

    while (1) /*The while loop here allows the user to select as many food items as they want,
                prompting for each selection until they choose to finish. */
    {
        printf("Enter a food item number and the quantity you want(or '0' to finish): \n");
        scanf("%d %d", &food,&quantity);

        if (food == 0) /*In this program, `food == 0` serves as a condition to stop the while loop.
                         When the user enters `0 0`, it indicates they are finished selecting food items, and the loop will terminate.*/
        {
            break;
        }

        switch (food) 
        {
            case 1:
                printf("The food item selected by the user is Idli Sambar and the quantity is %d.\n",quantity);
                total+=a*quantity; /*The assignment operator is used to store each selected food item and its quantity,
                                     enabling the program to accumulate the cost of each chosen item.
                                     This allows for an accurate total to be calculated based on the users order. */
                printf("Subtotal for Idli Sambar: %d\n\n",a*quantity);
                break;

            case 2:
                printf("The food item selected by the user is Vada Sambar and the quantity is %d.\n",quantity);
                total+=b*quantity;
                printf("Subtotal for Vada Sambar: %d\n\n",b*quantity);
                break;

            case 3:
                printf("The food item selected by the user is Pav Bhaji and the quantity is %d.\n",quantity);
                total+=c*quantity;
                printf("Subtotal for Pav Bhaji Sambar: %d\n\n",c*quantity);
                break;

            case 4:
                printf("The food item selected by the user is Burger and the quantity is %d.\n",quantity);
                total+=d*quantity;
                printf("Subtotal for Burger: %d\n\n",d*quantity);
                break;

            case 5:
                printf("The food item selected by the user is Pizza and the quantity is %d.\n",quantity);
                total+=e*quantity;
                printf("Subtotal for Pizza: %d\n\n",e*quantity);
                break;

            case 6:
                printf("The food item selected by the user is Roti Sabji and the quantity is %d.\n",quantity);
                total+=f*quantity;
                printf("Subtotal for Roti Sabji: %d\n\n",f*quantity);
                break;

            case 7:
                printf("The food item selected by the user is Gulab Jamun and the quantity is %d.\n",quantity);
                total+=g*quantity;
                printf("Subtotal for Gulabjamun: %d\n\n\n",g*quantity);
                break;
                
            default:
                printf("The input from the user is undefined.\n\n");
                
        }

        

    }
    
    printf("Thank you for your order!\n\n\n");
    
    printf("Your total is: %d\n",total);

    return 0;
}