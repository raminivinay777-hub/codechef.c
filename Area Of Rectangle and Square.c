#include <stdio.h>

int main() {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int rect = a*b;
int squ = c*c;
if(rect == squ){
    printf("YES");
}
else{
    printf("NO");
}
return 0;
}

