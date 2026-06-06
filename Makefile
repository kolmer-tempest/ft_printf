NAME = libprintf.a

SRC_DIR = src

SRCS_INC = ft_printf.c ft_write.c print_format.c printnbr.c \
			printxnbr.c printXnbr.c ft_itoa.c

CFLAGS = -Wall -Wextra -Werror

SRC = $(addprefix $(SRC_DIR)/, $(SRCS_INC))
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

print:
	@echo SRC=$(SRC)
	@echo OBJS=$(OBJS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all