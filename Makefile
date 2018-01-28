all: run add.o addr.o
add.o: sum.c add.s
	gcc sum.c add.s -o sum

addr.o: sum_pointer.c addr.s
	gcc sum_pointer.c addr.s -o sum_pointer

.PHONY: run
run:  sum sum_pointer
	./sum 
	./sum_pointer

