#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "digraph.h"

int main(void) {
    int v, w;
    Digraph G;

    // read in graph
    G = DIGRAPHscan();

    DIGRAPHshow(G);

    return 0;
  }

