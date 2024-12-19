#include <stdio.h>
#include <unistd.h>

int main(void) 
{
    pid_t pid = fork(); // Crea un nuevo proceso

    if (pid == 0)
    {
        // Este bloque es ejecutado por el proceso hijo
        printf("Soy el proceso hijo. Mi PID es %d y mi PPID es %d\n", getpid(), getppid());
	printf("Soy unico\n");	
    }
    else if (pid > 0) {
        // Este bloque es ejecutado por el proceso padre
        printf("Soy el proceso padre. Mi hijo tiene PID %d\n", pid);
    } else {
        // Error al crear el proceso
        perror("Error al crear el proceso");
    }

    return 0;
}
