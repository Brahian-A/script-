#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char *argv[] = {"/bin/ls", NULL}; // Comando y argumentos
    char *envp[] = {NULL}; // Usar variables de entorno actuales

    if (execve("/bin/ls", argv, envp) == -1) {
        perror("Error ejecutando execve");
    }

    return 0;
}
