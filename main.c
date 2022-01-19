#include "libft.h"

int main() {
    t_list *lst;

    ft_lstadd_back(&lst, ft_lstnew(42));
    ft_lstadd_front(&lst, ft_lstnew(42));
}