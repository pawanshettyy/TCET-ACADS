#include<iostream>

using namespace std;

int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("Size of int = %lu Bytes\n",  sizeof(i));
    printf("Size of float = %lu Bytes\n", sizeof(f));
    printf("Size of double = %lu Bytes\n", sizeof(d));
    printf("Size of char = %lu Bytes\n", sizeof(c));


    return 0;
}