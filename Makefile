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
		ft_sort/ft_sort_4.c tools/free_ptr.c tools/free_stack.c 

BONUS_SRCS = checker/checker.c checker/get_next_line_utils.c checker/get_next_line.c checker/if_sorted_bonus.c \
		checker/instraction_bonus.c parsing_bonus.c \
		checker/ft_ra_bonus.c checker/ft_rb_bonus.c checker/ft_rr_bonus.c checker/ft_pa_bonus.c checker/ft_pb_bonus.c \
		checker/ft_rra_bonus.c ft_rrb_bonus.c ft_rrr_bonus.c \
		checker/ft_sa_bonus.c checker/ft_sb_bonus.c checker/ft_ss_bonus.c checker/ft_getarg_bonus.c checker/ft_check_arg_bonus.c checker/ft_check_doubles_bonus.c \
		checker/free_stack_bonus.c checker/linked_list_bonus.h checker/strlen_bonus.c


OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

bonus = checker
NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address -g3
CC = cc

all : $(NAME)

bonus : $(BONUS_OBJS)
	$(CC) $(BONUS_OBJS) $(CFLAGS) -o $(BONUS)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean :
	-rm -f $(OBJS) 
	-rm -f $(BONUS_OBJS)
		
fclean : clean
	-rm -f $(NAME)
	-rm -f $(BONUS)

re : fclean	all