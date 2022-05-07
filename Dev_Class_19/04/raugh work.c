#include<stdio.h>
int main (){
    void add(void);
    add ();
    getch();
}
void add ()
{
    int a,b,c;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);

}
