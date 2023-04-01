##
##  Project Name : Microcosme
##  Authors: Crooser, Steci, Tom BP
##  Date: 2023-04-01
##  File: Makefile
##  Description: Makefile for Microcosme
##

all:
	cmake -B build;make -C build;mv build/Microcosme .

re: fclean all

clean:
	rm -rf build
	rm -rf cmake-build-debug

fclean: clean
	rm -rf Microcosme

.PHONY: all re clean fclean