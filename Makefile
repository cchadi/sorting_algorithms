SRCS = tools/ft_strjoin.c tools/ft_split.c tools/ft_getarg.c tools/ft_atoi.c       \
		tools/ft_ascii_toi.c tools/ft_calloc.c tools/ft_strlen.c tools/ft_strdup.c \
		tools/ft_substr.c main.c tools/ft_check_arg.c tools/ft_check_doubles.c	\
		tools/ft_sort_arr.c tools/ft_getsize.c	tools/ft_put_index.c tools/ft_division.c \
		tools/ft_getlen.c tools/ft_get_on_top.c	tools/ft_strtrim.c tools/ft_strchr.c \
		linked_list/ft_lstadd_back.c linked_list/ft_lstnew.c linked_list/ft_lstlast.c \
		linked_list/ft_linked_list.c linked_list/ft_lstadd_front.c 					  \
		moves/ft_sa.c moves/ft_ra.c moves/ft_rb.c moves/ft_pa.c		\
		moves/ft_sb.c moves/ft_rra.c moves/ft_rrb.c moves/ft_pb.c	\
		moves/ft_rr.c moves/ft_rrr.c moves/ft_ss.c \
		ft_sort/ft_sort_3.c ft_sort/ft_sort_5.c ft_sort/ft_sort.c	\
		ft_sort/ft_sort_2.c ft_sort/ft_sort_tob.c \
		ft_sort/ft_return_toa.c tools/ft_atol.c tools/check_if_sorted.c \
		ft_sort/ft_sort_4.c


OBJS = tools/ft_strjoin.o tools/ft_split.o tools/ft_getarg.o tools/ft_atoi.o       \
		tools/ft_ascii_toi.o tools/ft_calloc.o tools/ft_strlen.o tools/ft_strdup.o \
		tools/ft_substr.o main.o tools/ft_check_arg.o tools/ft_check_doubles.o	\
		tools/ft_sort_arr.o tools/ft_getsize.o tools/ft_put_index.o	tools/ft_division.o \
		tools/ft_getlen.o tools/ft_get_on_top.o tools/ft_strtrim.o tools/ft_strchr.o \
		linked_list/ft_lstadd_back.o linked_list/ft_lstnew.o linked_list/ft_lstlast.o \
		linked_list/ft_linked_list.o linked_list/ft_lstadd_front.o 					  \
		moves/ft_sa.o moves/ft_ra.o moves/ft_rb.o moves/ft_pa.o			\
		moves/ft_sb.o moves/ft_rra.o moves/ft_rrb.o moves/ft_pb.o 		\
		moves/ft_rr.o moves/ft_rrr.o moves/ft_ss.o \
		ft_sort/ft_sort_3.o ft_sort/ft_sort_5.o ft_sort/ft_sort.o		\
		ft_sort/ft_sort_2.o ft_sort/ft_sort_tob.o \
		ft_sort/ft_return_toa.o tools/ft_atol.o tools/check_if_sorted.o \
		ft_sort/ft_sort_4.o


NAME = push_swap
CFLAGS = #-Wall -Wextra -Werror #-fsanitize=address -g3
CC = cc

all : $(NAME)

#bonus : $(BONUS_OBJS)
#	ar rc $(NAME) $(BONUS_OBJS)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean :
	-rm -f $(OBJS) 
# $(BONUS_OBJS)
		
fclean : clean
	-rm -f $(NAME)

re : fclean	all