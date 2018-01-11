# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/18 13:19:02 by cpirlot           #+#    #+#              #
#    Updated: 2018/01/10 15:54:34 by cpirlot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=  libftprintf.a

CC		= gcc
FLAGS	= -Wall -Werror -Wextra
INCLUDES = printf.h
SRC	= ft_printf.c print_chars.c print_numbers.c parse_args.c \
get_width.c get_flags.c print_flags.c print_padding.c print_diu_int.c \
print_ox_int.c get_length.c
LIBFT = ./libft
VPATH:=src/:${VPATH}
VPATH:=src/format:${VPATH}
VPATH:=src/numbers:${VPATH}
VPATH:=src/chars:${VPATH}
OBJ = $(SRC:.c=.o)

# PROGRESS BAR
T = $(words $(OBJ))
N = 0
C = $(words $N)$(eval N := x $N)
ECHO = "[`expr $C  '*' 100 / $T`%]"

#Colors
_GREY=\x1b[30m
_RED=\x1b[31m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_BLUE=\x1b[34m
_PURPLE=\x1b[35m
_CYAN=\x1b[36m
_WHITE=\x1b[37m
_END=\x1b[0m

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp $(LIBFT)/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(_CYAN)Merged libft.a into libftprintf.a$(_END)"

%.o: %.c
	@printf "%-60b\r" "$(ECHO) $(_CYAN) Compiling $@ $(_END)"
	@$(CC) $(FLAGS) -c $<

clean:
	@$(RM) -f $(OBJ)
	@make clean -C $(LIBFT)
	@echo "clean printf: $(_CYAN)done$(_END)"

fclean: clean
	@$(RM) -f $(NAME)
	@make fclean -C $(LIBFT)
	@echo "fclean printf: $(_CYAN)done$(_END)"

re: fclean all

.PHONY: all clean fclean re