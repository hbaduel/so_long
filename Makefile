INC = /usr/include

INCLIB = $(INC)/../lib

NAME = so_long

SRC = srcs/main.c srcs/free/destroyeassets.c srcs/free/destroypassets.c srcs/free/freeall.c srcs/setup/setup.c srcs/setup/ft_setennemy.c srcs/setup/getimg.c srcs/setup/getimge.c srcs/setup/getimgp.c srcs/setup/readmap.c srcs/setup/setptrnull.c srcs/setup/checkmap/checkmap.c srcs/setup/checkmap/checkelements.c \
srcs/setup/checkmap/ft_checkform.c srcs/setup/checkmap/ft_checkwall.c srcs/setup/checkmap/checkpath.c srcs/treatgame/treatmap.c srcs/treatgame/manageframe.c srcs/treatgame/framee.c srcs/treatgame/framep.c srcs/treatgame/ft_endgame.c srcs/treatgame/move.c srcs/treatgame/printstats.c srcs/utils/coords.c \
srcs/utils/ft_checkparound.c srcs/utils/ft_itoa.c srcs/utils/ft_strjoin.c srcs/utils/utils.c

OBJS = ${SRC:%.c=%.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror

LFLAGS = -lbsd -L./includes/mlx -lmlx -L${INCLIB} -lXext -lX11 -lm

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS} ${LFLAGS}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean ${NAME}

.phony: all clean fclean re
