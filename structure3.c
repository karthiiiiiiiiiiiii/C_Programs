#include<stdio.h>
int main(){
    struct display{
        char fruit[50];
        int cost;
    };
    struct display d1={"Apple",50},d2={"Banana",40},d3={"Grapes",50},d4={"PineApple",60},d5={"Mango",35},d6={"Orange",30};
    printf("FRUITS \t\t COST\n");
    printf("%s \t\t %d\n",d1.fruit,d1.cost);
    printf("%s \t\t %d\n",d2.fruit,d2.cost);
    printf("%s \t\t %d\n",d3.fruit,d3.cost);
    printf("%s \t %d\n",d4.fruit,d4.cost);
    printf("%s \t\t %d\n",d5.fruit,d5.cost);
    printf("%s \t\t %d\n",d6.fruit,d6.cost);

}