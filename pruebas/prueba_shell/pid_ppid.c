#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("PID: %d\n", getpid());   // Obtiene el ID del proceso actual
    printf("PPID: %d\n", getppid()); // Obtiene el ID del proceso padre
    return 0;
}
