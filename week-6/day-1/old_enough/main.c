#include <stdio.h>

int main()
{
    int user_age;
    printf("Tell me your age:\n");
    scanf("%d", &user_age);
    if(user_age >= 18){
        printf("You can legally drink alcohol in hungary!\n");
    }else{
        printf("You can legally drink milk... kiddo\n");
    }
    return 0;
}