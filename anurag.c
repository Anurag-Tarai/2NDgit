//vaccine date
#include<stdio.h>
int main()
{
    int T,D,L,R;
    scanf("%d\n", &T);
    while(T--)
    {
      /*D is days passed to first dose,
        L is min days after 1st dose to 2nd,
        R is max days after 1st dose to 2nd dose*/
        scanf("%d %d %d",&D,&L,&R);
        if(D>=L & D<=R)
        {
            printf("Take second dose now\n");
        }
        else if(D<L)
        {
            printf("Too Early\n");
        }
        else if(D>R)
        {
            printf("Too Late\n");
        }
    }
    return 0;
}