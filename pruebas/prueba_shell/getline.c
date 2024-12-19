#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    char *line = NULL;
    size_t len = 0;

	while (printf("$ "), getline(&line, &len, stdin) != -1)
	{
		line[strcspn(line, "\n")] = '\0';	

		if (strcmp(line, "salir") == 0)
		{
			printf("Comando 'salir' detectado. Saliendo...\n");
			break;
		}

		if (strcmp(line,"hola") == 0)
		{
			printf("hola mundo\n");
		}

	}

	printf("\nEOF detectado. Saliendo...\n");
	free(line); // Liberar memoria //
	return 0;
}
