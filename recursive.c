#include<stdio.h>

/*
int factorial(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
    
}

int sum(int n){
    if (n==0)
    {
        return 0;
    }
    else{
        return n + sum(n-1);
    }
    
}
*/

int sum_digits(){
    int x;
    printf("ENTER VALUE: ");
    scanf("%d",&x);

    if(x == 0){
        return 0;
    }
    
    return x + sum_digits();

}

int main(){
    
    printf("You pressed 0.\nThe sum of all the values = %d",sum_digits());
    return 0;
}