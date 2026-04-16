#include <stdio.h>

int main() {
int x,y;
scanf("%d %d",&x,&y);
if(x>y){
    printf("Alice");
}
else if(y>x){
    printf("Bob");
}
else{
    printf("Draw");
}
return 0;
}

