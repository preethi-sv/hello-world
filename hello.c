#include<stdio.h>
int main()
{
	printf("What's your name ? ");
	char s[25];
	scanf("%s",s);
	printf("Hey %s!\n",s);
	printf("Hope you will enjoy this!");
    
    int a;
    printf("You prefer 0 or 1? : ");
    scanf("%d",&a);
    for(i = 0; i < 5; i++)
        printf("%d\n",a);
    if(a==0)
        printf("Zero!!\n");
    if(a==1)
        printf("One!!\n");
}
