#include <unistd.h>

int main()
{
    char *letra = "ola";

    while (*letra)
    {
        write(1, letra, 1);
        letra++;
    }

    return 0;
}