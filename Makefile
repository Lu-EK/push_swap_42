CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -g

SRCS	=	check_validity.c	\
				push_swap.c	\
				init_lists.c	\
				args_utils.c	\
				big_sort.c		\
				init_node.c		\
				operations_utils.c		\
				push.c		\
				rotate.c	\
				small_sort.c	\
				sort_utils.c	\
				split.c 		\
				swap.c			\
				index.c			\

SRCS_DIR	= srcs/
SRCS_PATH	= $(addprefix $(SRCS_DIR), $(SRCS))

NAME	=	push_swap

DEPS	=	check_validity.h	\
				push_swap.h	\
				args_utils.h	\
				init_lists.h \
				operations.h	\
				sort_utils.h	\
				small_sort.h	\
				big_sort.h		\
				split.h		\
				index.h		\

DEPS_DIR	= deps/
DEPS_PATH	= $(addprefix $(DEPS_DIR), $(DEPS))

OBJS		= $(SRCS:.c=.o)
OBJS_DIR	= objs/
OBJS_PATH	= $(addprefix $(OBJS_DIR)/, $(OBJS))

#ft_printf
PRINTF_DIR = printf/
CFLAGS_PRINTF = -L $(PRINTF_DIR) -lftprintf

#libft
LIBFT_DIR = libft/

all:	printf/libftprintf.a libft/libft.a $(NAME)

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c $(DEPS_PATH)
	mkdir -p $(OBJS_DIR)
	${CC} $(CFLAGS) -c $< -o $@

$(NAME):	${OBJS_PATH} 
	$(CC) $(CFLAGS) $(OBJS_PATH) $(CFLAGS_PRINTF) -o $(NAME) -O3

libft/libft.a:
	make -C $(LIBFT_DIR) --no-print-directory

printf/libftprintf.a:
	make -C $(PRINTF_DIR) --no-print-directory

clean_printf:
	make clean -C $(PRINTF_DIR) --no-print-directory

fclean_printf:
	make fclean -C $(PRINTF_DIR) --no-print-directory

clean_libft:
	make clean -C $(LIBFT_DIR) --no-print-directory

fclean_libft:
	make fclean -C $(LIBFT_DIR) --no-print-directory

clean: clean_printf clean_libft
	rm -rf ${OBJS_DIR}

fclean:		clean fclean_printf fclean_libft
	@rm -f ${NAME}

re:			fclean all

.PHONY:	all clean fclean re 