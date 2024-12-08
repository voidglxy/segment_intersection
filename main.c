#include <stdio.h>
#include <stdbool.h>

int max(int a, int b){
    if(a>b){
        return a;
    }else if (b>a){
        return b;
    }
    return a;
}
int min(int a, int b){
    if(a<b){
        return a;
    }else if (b<a){
        return b;
    }
    return a;
}

bool checkIntersection(int ax, int ay, int bx, int by, int cx, int cy, int dx, int dy){
    if((max(ax,bx)>max(cx,dx)&&min(ax,bx)>max(cx,dx))||(min(ax,bx)<min(cx,dx)&&max(ax,bx)<min(cx,dx))){
        printf("nope\n");
        return false;
    } else  if((max(ay,by)>max(cy,dy)&&min(ay,by)>max(cy,dy))||(min(ay,by)<min(cy,dy)&&max(ay,by)<min(cy,dy))){
        printf("nope\n");
        return false;
    }
    printf("x and y intersect\n");
    return false;
}

int main(){
    int ax, ay;
    int bx, by;
    int cx, cy;
    int dx, dy;
    scanf("%d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
    printf("%d %d %d %d %d %d %d %d\n",ax, ay, bx, by, cx, cy, dx, dy);
    bool is = checkIntersection(ax, ay, bx, by, cx, cy, dx, dy);

}
