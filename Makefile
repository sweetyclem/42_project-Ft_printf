# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/18 13:19:02 by cpirlot           #+#    #+#              #
#    Updated: 2018/01/24 15:11:20 by cpirlot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=  libftprintf.a

CC			= gcc
FLAGS		= -Wall -Werror -Wextra
SRC			= ft_atoi.c ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memdel.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c \
			ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
			ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_atoi_base.c \
			ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_puterror.c \
			ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_is_space.c\
			ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_strrev.c ft_putnbrendl.c \
			ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_skip_whitespace.c ft_abs.c \
			ft_longlong_len.c ft_putnstr.c ft_put_longlong_base.c ft_put_u_longlong_base.c ft_itoa_longlong_base.c \
			ft_putnchar.c ft_print_hex.c ft_print_ptr.c ft_print_u_hex.c ft_hex_len.c ft_ptr_len_base.c ft_putwchar.c \
			ft_u_longlong_len.c ft_len_base.c ft_u_len_base.c ft_strndup.c ft_str_multi_chr.c ft_wcharlen.c  ft_putwstr.c\
			ft_wstrlen.c ft_putnwstr.c ft_wstrnlen.c \
			ft_printf.c print_sc.c print_numbers.c parse_args.c \
			get_precision_width.c get_flags.c print_flags.c print_padding.c print_di.c \
			print_o.c get_length.c print_u.c print_x.c print_unicode.c
OBJDIR		= obj
OBJ	= $(addprefix $(OBJDIR)/,$(SRC:.c=.o))
VPATH:=libft/:${VPATH}
VPATH:=libft/char/:${VPATH}
VPATH:=libft/hex/:${VPATH}
VPATH:=libft/lst/:${VPATH}
VPATH:=libft/mem/:${VPATH}
VPATH:=libft/nbr/:${VPATH}
VPATH:=libft/nbr/print/:${VPATH}
VPATH:=libft/nbr/len/:${VPATH}
VPATH:=libft/str/:${VPATH}
VPATH:=libft/str/print/:${VPATH}
VPATH:=libft/str/n_func/:${VPATH}
VPATH:=libft/str/len/:${VPATH}
VPATH:=includes/:${VPATH}
VPATH:=src/:${VPATH}
VPATH:=src/format:${VPATH}
VPATH:=src/numbers:${VPATH}
VPATH:=src/chars:${VPATH}

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
	@ar rcs $(NAME) $(OBJ)
	@echo "\n$(NAME) compilation : $(_CYAN)done$(_END)"

$(OBJDIR)/%.o: %.c
	@mkdir -p obj
	@printf "%-60b\r" "$(ECHO) $(_CYAN) Compiling $@ $(_END)"
	@$(CC) $(FLAGS) -c $< -o $@ -I includes/ -I libft/includes/

dev: $(NAME)
	gcc -o a.out -I includes/ -I libft/includes/ main.c -L. -lftprintf

clean:
	@$(RM) -rf $(OBJDIR)
	@make clean -C libft
	@echo "clean printf: $(_CYAN)done$(_END)"

fclean: clean
	@$(RM) -f $(NAME)
	@make fclean -C libft
	@echo "fclean printf: $(_CYAN)done$(_END)"

re:
	@make fclean
	@make
	

.PHONY: all clean fclean re
