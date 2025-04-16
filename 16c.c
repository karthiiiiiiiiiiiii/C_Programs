#include<stdio.h>
int main(){
    int phy,chem,bio,math,com,tot;
    float per;
    printf("enter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&com);
    tot=phy+chem+bio+math+com;
    per=(float)tot/500*100;
    printf("%f is percentage\n",per);
    if(per>=90){
        printf("Grade A");
    }
    else if(per>=80){
        printf("Grade B");
    }
    else if(per>=70){
        printf("Grade C");
    }
    else if(per>=60){
        printf("Grade D");
    }
    else if(per>=40){
        printf("Gradae E");
    }
    else{
        printf("Grade F");
    }
}
