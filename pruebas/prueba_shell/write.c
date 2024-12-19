#include <unistd.h>

int main(void)
{
    char msg[] = "Hola, soy una llamada al sistema\n";
    write(STDOUT_FILENO, msg, sizeof(msg) - 1); // Escribe en la salida estándar
    return 0;
}
