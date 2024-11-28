SRCS        =   rush-02.c \
				check_error.c
OBJS        =   ${SRCS:.c=.o}
INC         =   ./includes/
NAME        =   rush-02
CFLAGS      =   -Wall -Wextra -Werror
DIR         =   ../
COMMAND     =   cc
RM          =   rm -f
.c.o :
			$(COMMAND) $(CFLAGS) -I ${INC} -c $< -o ${<:.c=.o}
${NAME} : ${OBJS}
			$(COMMAND) $(CFLAGS) ${OBJS} -o ${NAME}
all : ${NAME}
clean :
			${RM} ${OBJS}
fclean : clean
			${RM} ${NAME}
re : fclean all
.PHONY : all clean fclean re