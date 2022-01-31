alias gcc='gcc -Wall -Wextra -Werror'
alias g='gcc -Wall -Wextra -Werror *.c'
alias n='norminette -R CheckForbiddenSourceHeader'
alias a='./a.out'
alias t='norminette -R CheckForbiddenSourceHeader \
	&& gcc -Wall -Wextra -Werror *.c \
	&& ./a.out'
