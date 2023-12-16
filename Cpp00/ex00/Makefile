NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

#//= Colors =//#
BOLD    := \033[1m
BLACK   := \033[30;1m
RED     := \033[31;1m
GREEN   := \033[32;1m
YELLOW  := \033[33;1m
BLUE    := \033[34;1m
MAGENTA := \033[35;1m
CYAN    := \033[36;1m
WHITE   := \033[37;1m
RESET   := \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@ echo "\n$(GREEN)$(NAME) compiled$(RESET)\n"

clean:
	@ rm -rf $(OBJ)

fclean: clean
	@ rm -rf $(NAME)
	@ echo "\n$(RED)$(NAME) deleted$(RESET)\n";

re: fclean all

.PHONY: all clean fclean re