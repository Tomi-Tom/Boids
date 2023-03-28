##
## Created by Tomi-Tom on 3/28/23.
##

all:
	cmake -B build;make -C build;mv build/Boids .

re: fclean all

clean:
	rm -rf build

fclean: clean
	rm -rf Boids

.PHONY: all re clean fclean