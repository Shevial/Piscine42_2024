# Variables para los parámetros del script en Perl
X = 50
Y = 50
DENSITY = 10

# Archivos
PERL_SCRIPT = genmap.pl
TEXT_FILE = output.txt
C_SRC = bsq.c
C_EXEC = bsq

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Regla principal
all: $(C_EXEC)

# Generar el archivo de texto con el script Perl
$(TEXT_FILE): $(PERL_SCRIPT)
	@perl $(PERL_SCRIPT) "$(X)" "$(Y)" "$(DENSITY)" > $(TEXT_FILE)
	@echo "Archivo $(TEXT_FILE) generado con dimensiones $(X)x$(Y) y densidad $(DENSITY)."

# Compilar el programa en C
$(C_EXEC): $(C_SRC) $(TEXT_FILE)
	$(CC) $(CFLAGS) -o $(C_EXEC) $(C_SRC)
	@echo "Compilación de $(C_EXEC) completada."

# Ejecutar el programa con el archivo generado
run: all
	@echo "Ejecutando $(C_EXEC) con $(TEXT_FILE)..."
	./$(C_EXEC) $(TEXT_FILE)

# Limpiar archivos generados
clean:
	@rm -f $(C_EXEC) $(TEXT_FILE)
	@echo "Archivos limpiados."

# Limpiar y recompilar
re: clean all
