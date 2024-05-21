NAME = libft.a

HEAD = Libft.h
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCFILES = *.c

comp : 
	${CC} ${FLAGS} -I ./  ./*.c

clean :
	rm -f *.o


