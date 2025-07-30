NAME    = my_awesome_phoneBook

SRC     = main.cpp phoneBook.cpp contact.cpp
OBJ     = $(SRC:.cpp=.o)

CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo "[PhoneBook] Object files cleaned."

fclean: clean
	@rm -rf $(NAME)
	@echo "[PhoneBook] Executable cleaned."

re: fclean all

.PHONY: all clean fclean re
