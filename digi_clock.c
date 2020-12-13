#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h,m,s;
    printf("Enter the time in HH:MM:SS format...");
    scanf("%d%d%d",&h,&m,&s);
    start:;
        for(h;h<24;h++)
        {
            for(m;m<60;m++)
            {
                for(s;s<60;s++)
                {
                    system("cls");
                    printf("\n\n\n\n\t\t\t\t\t\t\t");
                    printf("HH:MM:SS");
                    printf("\n");
                    printf("\t\t\t\t\t\t\t");
                    printf("%02d:%02d:%02d",h,m,s);
                    printf("\n");
                    for(double i=00;i<150000000;i++)
                    {
                        i++;
                        i--;
                    }
                }
                s=0;
            }
            m=0;
        }
}
