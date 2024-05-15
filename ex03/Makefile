###########################################################################
#### SOURCES

SRC_FOLDER	= 
SRC_FOLDER_BONUS = 

SRC_FILES	= main.cpp Fixed.cpp Point.cpp bsp.cpp

SRC_FILES_BONUS = 
BUILD = build/


OBJ_FILES	= $(addprefix $(BUILD),$(SRC_FILES:%.cpp=%.o))
OBJ_FILES_BONUS = $(addprefix $(SRC_FOLDER_BONUS), $(SRC_FILES_BONUS:%.c=%.o))

###########################################################################
#### ARGUMENTS

NAME		= a.out
CC			= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98

INCLUDE	= Fixed.hpp Point.hpp
INCLUDE_BONUS = 
INCLUDE_PATH = includes/

RED		=	\033[0;31m
GREEN	=	\033[0;32m
YELLOW	=	\033[0;33m
BLUE	=	\033[0;34m
MAGENTA	=	\033[0;35m
CYAN	=	\033[0;36m
WHITE	=	\033[0;37m
RESET	=	\033[0m

###########################################################################
#### RULES

$(NAME): $(OBJ_FILES) $(INCLUDES)
	@$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)
	@echo "$(MAGENTA)The modified: $?$(RESET)"
	@echo "$(GREEN)Compilation success!$(RESET)"

build/%.o: %.cpp
	@mkdir -p ${BUILD}
	@echo "$(YELLOW)Compilation of $*$(RESET)"
	@$(CC) $(CFLAGS) -I$(INCLUDE_PATH) -I/usr/include -c $< -o $@

all : $(NAME)

clean :
	@rm -rf ${BUILD}
	@#@rm -f *.txt
	@rm -f *.o ${OBJ_FILES_BONUS}
	@echo "$(CYAN) Cleaning intermediary files $(RESET)"

fclean : clean
	@rm -f ${NAME}
	@echo "$(GREEN) Cleaning is complete $(RESET)"

bonus : $(OBJ_FILES_BONUS)
	@$(CC) $(CFLAGS) $(OBJ_FILES_BONUS) -o $(NAME)
	@echo "$(MAGENTA)The modified files are: $?$(RESET)"
	@echo "$(GREEN)Compilation succes!$(RESET)"

 
re : fclean all

.PHONY : all clean fclean re