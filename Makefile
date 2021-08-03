all: test dfs

graph.o: graph.h
	cc -c graph.c

test: graph.o
	cc graph.o test.c -o bin/test

dfs: graph.o
	cc graph.o dfs.c -o bin/dfs

clean:
	rm *.o bin/*
