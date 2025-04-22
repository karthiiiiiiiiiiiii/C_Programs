#include<stdio.h>
#include<math.h>
typedef struct {
    double x,y;
}point;
double pdistance(point A,point B){
    double distance;
    distance=sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
    return distance;
}
point pmiddle(point A,point B){
    point middle;
    middle.x=(A.x+B.x)/2;
    middle.y=(A.y+B.y)/2;
    return middle;
}
double parea(point A,point B,point C){
    double area;
    area=A.x*(B.y-C.y)+B.x*(C.y-A.y)+C.x*(A.y-B.y);
    return area;
}
int main(){
    point A,B,C,mid;
    double distance,area;
    printf("Enter coordinates for A:");
    scanf("%lf%lf",&A.x,&A.y);
    printf("Enter coordinates for B:");
    scanf("%lf%lf",&B.x,&B.y);
    printf("Enter coordinates for C:");
    scanf("%lf%lf",&C.x,&C.y);
    distance=pdistance(A,B);
    mid=pmiddle(A,B);
    area=parea(A,B,C);
    printf("Distance:%.2lf\n",distance);
    printf("Middle:(%.2lf,%.2lf)\n",mid.x,mid.y);
    printf("Area:%.2lf",area);   
}