NAME = libftprintf.a
LIBFT = libft/libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h
SRC_DIR = srcs
OBJDIR = objs
HEADDIR = includes
LIBFT_DIR = libft
SRC = $(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_funk.c $(SRC_DIR)/ft_funk2.c
OBJ = $(addprefix $(OBJDIR)/,$(notdir $(SRC:.c=.o)))

$(OBJDIR)/%.o :	$(SRC_DIR)/%.c $(HEADDIR)/$(HEADER)
	@$(CC) $(FLAGS) -I $(HEADDIR)/$(HEADER) -c $< -o $@

all:    $(LIBFT) $(NAME)

$(NAME):	$(OBJDIR) $(OBJ) $(HEADDIR)/$(HEADER)
	@ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)/$(OBJDIR)/*.o
	@ranlib $(NAME)
	@echo "\033[32mft_printf compile"

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(OBJDIR):
	@if [ ! -d $(OBJDIR) ] ; then mkdir $(OBJDIR); fi;
		
clean:
	@make clean -C $(LIBFT_DIR)
	@if [ -d $(OBJDIR) ] ; then rm -r $(OBJDIR); fi
	@echo "\033[32mclean ft_printf done"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re