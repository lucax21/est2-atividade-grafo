#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph.h"

void busca_profundidade(Graph g, int inicio, int visitado[], int cont)
{
    int i;
    visitado[inicio] = cont;
    for (i = 0; i < g->adj[inicio]; i++)
    {
        // if (!visitado[g->adj[inicio][i]])
        // {
        //     busca_profundidade(g, g->adj[inicio][i], visitado, cont + 1);
        // }
    }
}

void busca_profundidade_grafo(Graph g, int inicio, int visitado[])
{
    int i, cont = 1;
    // marca vertices como nao visitados
    for (i = 0; i < g->V; i++)
    {
        visitado[i] = 0;
    }
}

void busca_largura(Graph g, int inicio, int v[])
{
    int i, vert, num_vert, cont = 1, *fila, inicio_fila = 0, final_fila = 0;
    // marca vertices como nao visitados
    for (i = 0; i < g->V; i++)
    {
        v[i] = 0;
    }
    num_vert = g->adj;
    fila = (int *)malloc(num_vert * sizeof(int));
    final_fila++;
    fila[final_fila] = cont;
    v[inicio] = cont;
    // while (inicio_fila != final_fila)
    // {
    //     inicio_fila = (inicio_fila + 1) % num_vert;
    //     vert = fila[inicio_fila];
    //     cont++;
    //     for (i = 0; i < g->adj[vert]; i++)
    //     {
    //         if (!v[g->adj[vert][i]])
    //         {
    //             final_fila = (final_fila + 1) % num_vert;
    //             fila[final_fila] = g->adj[vert][i];
    //             v[g->adj[]] = cont;
    //         }
    //     }
    // }
    free(fila);
}

int main(void)
{
    int v, w;

    Graph G;

    // read in graph
    G = GRAPHscan();

    GRAPHshow(G);
    // printf("%d\n", G->V);
    int visitado[G->V];
    busca_profundidade_grafo(G, 0, visitado);

    return 0;
}
