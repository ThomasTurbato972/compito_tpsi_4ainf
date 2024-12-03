# Nome dell'eseguibile
EXECUTABLE = calculator

# Lista dei file sorgente
SRCS = main.c

# File oggetto generati
OBJS = $(SRCS:.c=.o)

# Compilatore e flag
CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS =

# Opzione per abilitare il DEBUG (definisce la macro DEBUG)
DEBUGFLAGS = -DDEBUG

# Regola di default
all: $(EXECUTABLE)

# Regola per creare l'eseguibile
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(DEBUGFLAGS) $(OBJS) -o $@

# Regola per creare i file oggetto
%.o: %.c
	$(CC) $(CFLAGS) $(DEBUGFLAGS) -c $< -o $@

# Pulizia degli oggetti intermedi e dell'eseguibile
clean:
	rm -f $(OBJS) $(EXECUTABLE)

# Pulizia approfondita (inclusi i file di backup temporanei)
distclean: clean
	rm -f *~ *.bak

# Regola per mostrare cosa fa il Makefile
.PHONY: all clean distclean

