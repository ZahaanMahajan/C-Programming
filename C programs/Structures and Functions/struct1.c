#include<stdio.h>

// structure members as argument of a function 

struct laptop{
    char name[20];
    char cpu[100];
    char gpu[100];
    int ram;
    int storage;

};

void print(char name[], char cpu[], char gpu[], int ram, int storage)
{
    printf("Laptop : %s\n", name);
    printf("CPU  : %s\n", cpu);
    printf("GPU : %s\n", gpu);
    printf("Ram : %d GB\n", ram);
    printf("Storage : %d GB\n", storage);
}


int main()
{
    struct laptop l1 = {"Acer","Ryzen 5","GTX 1650", 8 , 500};
    print(l1.name,l1.cpu,l1.gpu,l1.ram,l1.storage);
}