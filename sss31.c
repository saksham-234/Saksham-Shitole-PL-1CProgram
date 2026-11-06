/*
Program(31)-Write a program to calculate the area of triangle.
Solution(3)-No Arguments,Returns a Value
*/
#include <stdio.h>

// Function to calculate area of triangle
float areaTriangle()
{
    float base, height;

    // Accept input from user
    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    // Calculate and return area
    return 0.5 * base * height;
}

int main()
{
    float area;

    // Function call
    area = areaTriangle();

    // Display result
    printf("Area of Triangle = %f", area);

    return 0;
}
