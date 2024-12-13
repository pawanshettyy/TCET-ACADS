/*10 mark ques, q no 4 */


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main() {
    // Using sqrt from math.h
    double num = 16.0;
    double result = sqrt(num);
    printf("Square root of %.2lf is %.2lf\n", num, result);

    // Using strlen from string.h
    char str[] = "Hello, World!";
    int length = strlen(str);
    printf("Length of the string \"%s\" is %d\n", str, length);

    // Using time from time.h
    time_t currentTime;
    time(&currentTime);
    printf("Current time is %s", ctime(&currentTime));

    // Using toupper from ctype.h
    char ch = 'a';
    char upperCh = toupper(ch);
    printf("Uppercase of '%c' is '%c'\n", ch, upperCh);

    return 0;
}