// Run with gcc file name
// ./a.out

#include <stdio.h>
int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
    int total1,total2,total3;

    printf("\"Wecome to the Game\"");
    printf("> Press 7 to start the game");
    printf("> Press 0 to quit the game");

    scanf("%d",&i);
    if(i==7)
    {
        printf("The game has started\n\n");
    }
    else if(i==0){
        printf("The game has ended\n\n");
    }
    else{
        printf("Invalid\n\n");
    }
    if(i==7){
        printf("(1) Which one is first search engine in internet");
    }

}