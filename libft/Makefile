NAME = libft.a
HEADER = libft.h
CC = gcc
SRC_DIR = srcs
OBJDIR = objs
HEADDIR = includes
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(addprefix $(OBJDIR)/,$(notdir $(SRC:.c=.o)))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJDIR)/%.o :	$(SRC_DIR)/%.c $(HEADDIR)/$(HEADER)
	@$(CC) $(FLAGS) -I $(HEADDIR)/$(HEADER) -c $< -o $@

$(NAME): $(OBJDIR) $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32mlibft compile"

$(OBJDIR):
	@if [ ! -d $(OBJDIR) ] ; then mkdir $(OBJDIR); fi;

clean:
	@if [ -d $(OBJDIR) ] ; then rm -r $(OBJDIR); fi
	@echo "\033[32mclean libft done"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re