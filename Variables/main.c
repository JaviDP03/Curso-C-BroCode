#include <stdio.h>
#include <windows.h> // Puto Bill Gates

int main() {
    // Codificación en UTF-8
    SetConsoleOutputCP(CP_UTF8);
    /*
     * variable = Un contenedor reusable de un valor.
     * Se comporta como el valor que contiene.
     */

    int age = 25;
    int year = 2025;
    int quantity = 2;
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;
    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    char grade = 'F';
    char symbol = '!';
    char currency = '$';

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);
    printf("Your gpa is %f\n", gpa);
    printf("The price is $%f\n", price);
    printf("The temperature is %fºC\n", temperature);
    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);
    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

    return 0;
}
