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

BONUS_SRCS = bonus/checker.c bonus/get_next_line_utils.c bonus/get_next_line.c bonus/if_sorted_bonus.c \
		bonus/instraction_bonus.c bonus/parsing_bonus.c bonus/ft_ra_bonus.c bonus/ft_rb_bonus.c \
		bonus/ft_rr_bonus.c bonus/ft_pa_bonus.c bonus/ft_pb_bonus.c bonus/ft_rra_bonus.c bonus/ft_rrb_bonus.c \
		bonus/ft_rrr_bonus.c bonus/ft_sa_bonus.c bonus/ft_sb_bonus.c bonus/ft_ss_bonus.c bonus/ft_getarg_bonus.c \
		bonus/ft_check_arg_bonus.c bonus/ft_check_doubles_bonus.c bonus/free_stack_bonus.c \
		bonus/linked_list_bonus.c bonus/lstadd_back_bonus.c bonus/lstnew_bonus.c bonus/ft_ascii_toi.c \
		bonus/lstadd_front_bonus.c bonus/ft_lstlast_bonus.c bonus/ft_split.c bonus/ft_substr.c bonus/ft_strtrim.c \
		bonus/ft_atol.c  bonus/ft_atoi.c bonus/strncmp_bonus.c bonus/free_ptr_bonus.c


OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

bonus = checker
NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address -g3
CC = cc

all : $(NAME)

bonus : $(BONUS_OBJS)
	$(CC) $(BONUS_OBJS) $(CFLAGS) -o $(bonus)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean :
	-rm -f $(OBJS) 
	-rm -f $(BONUS_OBJS)
		
fclean : clean
	-rm -f $(NAME)
	-rm -f $(bonus)

re : fclean	all