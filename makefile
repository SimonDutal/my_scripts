all:
	make star
star:
	gcc src/star.c -Wall -Wextra -o star
	mv -f src/star ../
