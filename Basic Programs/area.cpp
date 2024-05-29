#include<stdio.h>
#include<math.h>
int main() 
{
    float base, height, side, a, b, c, s, area;
    int choice;
    printf("Choose the type of triangle:\n");
    printf("1. Right angled triangle\n");
    printf("2. Equilateral triangle\n");
    printf("3. Isosceles triangle\n");
    printf("4. Triangle with three sides\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch(choice) 
	{
        case 1:
            printf("Enter the base and height of the right angled triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area of the right angled triangle is: %f", area);
            break;
        case 2:
            printf("Enter the side of the equilateral triangle: ");
            scanf("%f", &side);
            area = sqrt(3) / 4 * side * side;
            printf("The area of the equilateral triangle is: %f", area);
            break;
        case 3:
            printf("Enter the base and height of the isosceles triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area of the isosceles triangle is: %f", area);
            break;
        case 4:
            printf("Enter the three sides of the triangle: ");
            scanf("%f %f %f", &a, &b, &c);
            s = (a + b + c) / 2;
            area = sqrt(s * (s-a) * (s-b) * (s-c));
            printf("The area of the triangle with three sides is: %f", area);
            break;
        default:
            printf("Invalid choice!");
    }
}

