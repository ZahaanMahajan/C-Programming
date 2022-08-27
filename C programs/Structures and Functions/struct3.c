#include<stdio.h>

// passing pointers to structures as argument

struct point{
    int x;
    int y;
};

void print(struct point *ptr){
    printf("%d %d\n", ptr->x , ptr->y);
}

int main()
{
    struct point p1 = {12 , 65};
    struct point p2 = {34 , 23};
    print(&p1);
    print(&p2);
    return 0;

}