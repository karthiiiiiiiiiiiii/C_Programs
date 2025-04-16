#include<stdio.h>
int main(){
    int n,m,sum=0,rev=0,rem;
    printf("enter n:");
    scanf("%d",&n);
    m=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        sum=sum+rev;
        n=n/10;
    }
    if(rev==m)
    {
        printf("palindrome\n");
    }
    else{
        printf("non-palindrome\n");
    }
    return 0;
}
