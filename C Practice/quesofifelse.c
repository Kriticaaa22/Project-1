*/Maximum of two numbers
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter your numbers");
    scanf ("%d %d", &a,&b);
    printf("%d",a  );
    printf("%d",b  );
    if (a>b){
        printf("a is maximum");
    }
    else if (b>a){
        printf("b is maximum");
    }
    else{
        printf("both numbers are equal");
    }
    return 0;
}