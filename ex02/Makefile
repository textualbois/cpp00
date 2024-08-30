NAME = Account

SRCS = Account.cpp main.cpp

OBJ_DIR = obj/

OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++17

all: $(NAME)
	@echo "all DONE"

$(NAME): ${OBJ_DIR} $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o ${NAME}

$(OBJ_DIR)%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -g -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "OBJ_DIR DONE"

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
