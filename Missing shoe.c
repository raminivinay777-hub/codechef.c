#include <stdio.h>

int main() {
    int L,R;
scanf("%d %d",&L,&R);
if(L==R){
    printf("0");
}
else if(L>R){
    printf("%d",L=L-R);
}
else{
    printf("%d",R=R-L);
}
return 0;

}
