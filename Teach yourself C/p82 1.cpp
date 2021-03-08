#include<stdio.h>
int main(){
    float d[100],s[100];
    int y=0,n;
    printf("how manuy times you want to test: ?\n");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        printf("Give distance: \n");
        scanf("%d",&d[y]);
        printf("Give average speed: \n");
        scanf("%d",&s[y]);
        y=y+1;
    }
    for(y=0;y<=n-1;y++){
        printf("Distance speed was %f \n",(d[y]/s[y]));
    }

    return 0;
}