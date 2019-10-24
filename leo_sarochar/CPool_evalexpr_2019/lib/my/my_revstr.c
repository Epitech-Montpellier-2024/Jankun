/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Reverse a string
*/

char    *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while (str[j] != '\0')
        j++;
    while (i < j / 2) {
        temp = str[i];
        str[i] = str[j - 1 - i];
        str[j - i - 1] = temp;
        i++;
    }
    return (str);
}
