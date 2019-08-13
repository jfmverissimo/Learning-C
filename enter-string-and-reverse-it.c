#include <stdio.h>

void reverse(char name [], int n)
{
    int i=0;
    printf("The reverse is: ");
    while (i<n)
    {
        printf("%c",name[n-1]);
        n--;
    }
}

int main ()
{

    int i=0;
    char nome [20];
    printf("Enter a string: ");
    scanf("%s", &nome);

    int contador=0;

    for (i=0; i<20; i++)
    {
        if (nome[i]==0)
        {
            break;
        }
        contador++;
    }

    reverse(nome,contador);


    return 0;
}
