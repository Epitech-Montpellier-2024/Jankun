/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** strcapitalize
*/

int    my_char_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int    my_char_isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

char    *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' && my_char_islower(str[i + 1])) {
            i += 1;
            str[i] -= 32;
        } else if (i == 0 && my_char_islower(str[i]))
            str[i] -= 32;
        else if (str[i] != ' ' && my_char_isupper(str[i + 1])) {
            i += 1;
            str[i] += 32;
        }
        i += 1;
    }
    return (str);
}