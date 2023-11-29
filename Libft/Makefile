# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 09:17:21 by marlengo          #+#    #+#              #
#    Updated: 2023/11/29 08:17:29 by marlengo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
LIB = ar rcs
RM = rm -f

# Source files
SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_memcpy.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_memset.c \
      ft_bzero.c \
      ft_memmove.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strnstr.c \
      ft_strncmp.c \
      ft_memcmp.c \
      ft_memchr.c \
      ft_atoi.c \
      ft_strdup.c \
      ft_calloc.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_split.c

# Bonus source files
BONUS_SRC = ft_lstnew_bonus.c \
            ft_lstadd_front_bonus.c \
            ft_lstsize_bonus.c \
            ft_lstlast_bonus.c \
            ft_lstadd_back_bonus.c \
            ft_lstdelone_bonus.c \
            ft_lstclear_bonus.c \
            ft_lstiter_bonus.c \
            ft_lstmap_bonus.c

# Source code (.c) to Objects (.o)
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS_SRC:.c=.o)

# This target indicates: aren't real files
# all: for compile the project
# clean: for delete temp files and (.o) during the compilation
# fclean: for delete execute file or other final file
# re: reconstruct the project (similar to clean + all)
.PHONY: all clean fclean re bonus

# Rules
all: $(NAME)
	@echo "$(CYAN)$(NAME) compiled successfully!$(RCOLOR)"

$(NAME): $(OBJ)
	@$(LIB) $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_BONUS)
	@$(LIB) $(NAME) $(OBJ_BONUS)
	@echo "$(MAGENTA)Bonus functions compiled successfully!$(RCOLOR)"

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@echo "$(YELLOW)Object files removed!$(RCOLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YELLOW)$(NAME) removed!$(RCOLOR)"

re: fclean all

# ANSI color codes
RCOLOR = \033[0m
YELLOW = \033[38;2;255;246;162m
CYAN = \033[38;2;97;214;214m
MAGENTA = \033[38;2;180;0;158m
