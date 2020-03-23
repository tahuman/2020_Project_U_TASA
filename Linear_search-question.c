#include <stdio.h>
#include <string.h>

typedef struct{

    char name[10];

    int price;

}Drink;

Drink p[6] = {
{"りんご",130},
{"いろはす",100},
{"コーラ",120},
{"水",90},
{"綾鷹",140},
{"BOSS",110}
};


int main(void){


    int num = sizeof(p) / sizeof(p[0]);

    int my_coin;

    int findID = -1;

    printf("金額を入力してください");
    scanf("%d",&my_coin);

    
    for( int i = 0; i<=num; i++){

        printf("%dの飲み物は%sです\n",p[i].price,p[i].name);

        if(my_coin == p[i].price){
             findID = i;
             break;
        }
    }
    printf("左から%d番目にあります\n",findID+1);
    printf("金額と一致する飲み物は%sで%d円です\n",p[findID].name,p[findID].price);

    return 0;

}