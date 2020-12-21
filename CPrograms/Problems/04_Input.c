// Author:-lavanya sharma

#include<stdio.h>
#include<conio.h>
int main()
{
    int num, count, sum = 0;
    float avg = 0.0, limit;
 printf("Enter the limit");
  scanf("%f", &limit);
    printf("Enter %f numbers", limit);
    for(count = 1; count <= limit; count++)
    {
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum / limit;

    printf("Sum = %dAverage = %0.2f", sum, avg);
    getch();
    return 0;
}
