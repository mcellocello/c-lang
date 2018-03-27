#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
############################################
##                                        ##
##       Author: Agustinus Marcello       ##
##                                        ##
############################################
*/
int head(win,draw,lose)
{ int i;
    printf("%c",201);
    for (i=1;i<=40;i++)
    {printf("%c",205);}
    printf("%c\n",187);
    printf("%c",186);
    for (i=1;i<=40;i++)
    {printf(" ");}
    printf("%c\n",186);
    printf("%c",186);printf("STATISTIC");
    for (i=1;i<=31;i++)
    {printf(" ");}printf("%c\n",186);
    printf("%c",186);
    for (i=1;i<=40;i++)
    {printf(" ");}
    printf("%c\n",186);
    printf("%c",204);
    for (i=1;i<=40;i++)
    {printf("%c",205);}
    printf("%c\n",185);
    printf("%c",186);
    for (i=1;i<=40;i++)
    {printf(" ");}
    printf("%c\n",186);
    printf("%c",186);
    printf("Win:   %3d   Draw:  %3d   Lose: %3d",win,draw,lose);
    printf("\t %c\n",186);
    printf("%c",186);
    for (i=1;i<=40;i++)
    {printf(" ");}
    printf("%c\n",186);
    printf("%c",200);
    for (i=1;i<=40;i++)
    {printf("%c",205);}
    printf("%c\n",188);
    return 0;
}

int body2(pil,_random,c)
{ int i,pil_num;
    printf("\n");
    if(pil=='1'){pil_num=1;}
    else if(pil=='2'){pil_num=2;}
    else if(pil=='3'){pil_num=3;}
    printf("%c",201);
    for (i=1;i<=11;i++)
    {printf("%c",205);}
    printf("%c",187);
    for (i=1;i<=16;i++)
    {printf(" ");}
     printf("%c",201);
    for (i=1;i<=11;i++)
    {printf("%c",205);}
    printf("%c\n",187);
    printf("%c",186);
    printf("YOU        ");
    printf("%c",186);
    for (i=1;i<=16;i++)
    {printf(" ");}
    printf("%c",186);
    printf("COMPUTER   ");
    printf("%c\n",186);
    printf("%c",204);
    for (i=1;i<=11;i++)
    {printf("%c",205);}
    printf("%c",185);
    for (i=1;i<=16;i++)
    {printf(" ");}
    printf("%c",204);
    for (i=1;i<=11;i++)
    {printf("%c",205);}
    printf("%c\n",185);
    printf("%c",186);
    if(pil=='1'||pil=='r')printf("1. Rock    ");
    else printf("           ");
    printf("%c",186);
    for (i=1;i<=16;i++)
    {printf(" ");}
    printf("%c",186);if(_random==1||pil=='r') printf("1. Rock    ");
    else printf("           ");
    printf("%c\n",186);
    printf("%c",186); if(pil=='2'||pil=='r')printf("2. Paper   ");
    else printf("           ");
    printf("%c",186);
    for (i=1;i<=16;i++)
    {printf(" ");}
    printf("%c",186); if(_random==2||pil=='r')printf("2. Paper   ");
    else printf("           ");
    printf("%c\n",186);
    printf("%c",186); if(pil=='3'||pil=='r') printf("3. Scissors");
    else printf("           ");
    printf("%c",186);
    for (i=1;i<=16;i++)
    {printf(" ");}
    printf("%c",186); if(_random==3||pil=='r') printf("3. Scissors");
    else printf("           ");
    printf("%c\n",186);
    printf("%c",200);
    for (i=1;i<=11;i++)
    {printf("%c",205);}
    printf("%c",188);
    for (i=1;i<=16;i++)
    {printf(" ");}
    printf("%c",200);
    for (i=1;i<=11;i++)
    {printf("%c",205);}
    printf("%c\n",188);
    printf("%c",201);
    for (i=1;i<=40;i++)
    {printf("%c",205);}
    printf("%c\n",187);
    printf("%c",186);
    for (i=1;i<=40;i++)
    {printf(" ");}
    printf("%c\n",186);
    printf("%c",186);
    if(pil=='r'){printf("\t\t           \t\t ");}
    else if(pil_num==_random){
    printf("\t\tYOU DRAW\t\t ");c=1;}
    else if(pil_num==1&&_random==3||pil_num==2&&_random==1||pil_num==3&&_random==2){
    printf("\t\tYOU WIN\t\t\t ");c=2;}
    else {printf("\t\tYOU LOSE\t\t ");c=3;}
    printf("%c\n",186);
    printf("%c",186);
    for (i=1;i<=40;i++)
    {printf(" ");}
    printf("%c\n",186);
    printf("%c",200);
    for (i=1;i<=40;i++)
    {printf("%c",205);}
    printf("%c\n",188);
    return c;
}

int main()
{   char pil='r';
    int win=0,draw=0,lose=0,c;
    do{
    int _random=rand()%3+1;
    int i,o;
    if(pil=='r'){win=0;draw=0;lose=0;}
    else if(pil=='1'&&_random==3||pil=='2'&&_random==1||pil=='3'&&_random==2)win=win+1;
    else if(pil=='1'&&_random==1||pil=='2'&&_random==2||pil=='3'&&_random==3)draw=draw+1;
    else lose=lose+1;
    head(win,draw,lose);
    body2(pil,_random,c);
    printf("\n[R]eset\nE[x]it");
    pil=getche();
    system("cls");
    }
    while(pil!='x');
    return 0;
}
