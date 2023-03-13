# include<stdio.h>
int main(){
    int candies , friends ,candies_left ,;
    scanf ("%d %d",&candies ,&friends);
    candies_left=candies%friends;

    if (candies_left <= candies/2){
         printf(candies_left);

    }
    else {
        (candies_left =friends-candies_left);
        printf(candies_left);
    }
    return 0;

    }

    
        
    


