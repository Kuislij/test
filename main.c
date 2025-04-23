// Aboba

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char input[100];
    
    printf("Сосал? (Да/Нет)\n> ");
    scanf("%99s", input);

    if(strcmp(input, "Да") == 0 || strcmp(input, "да") == 0 || strcmp(input, "ДА") == 0 || strcmp(input, "Д") == 0 || strcmp(input, "д") == 0)
        printf("Пизда, иди сюда, слащавый педик <3\n");
    else if(strcmp(input, "Нет") == 0 || strcmp(input, "нет") == 0 || strcmp(input, "НЕТ") == 0 || strcmp(input, "Н") == 0 || strcmp(input, "н") == 0)
        printf("Пидора ответ, нагинайся <3\n");
    else
        printf("Бро, так не трахают :\\ \n");
    return 0;
}