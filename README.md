Tecnologia em Análise e Desenvolvimento de Sistemas

Setor de Educação Profissional e Tecnológica - SEPT

Universidade Federal do Paraná - UFPR

---

*DS141 - Estruturas de Dados II*

Prof. Alexander Robert Kutzke

# Simple C Graph Lib

Biblioteca C para criação e manipulação de Grafos não direcionados.

## Para testar

Primeiro faça o clone do projeto:

```bash
git clone https://gitlab.tadsufpr.net.br/ds141-alexkutzke/simple-c-graph-lib.git
cd simple-c-graph-lib
```

Você pode compilar os arquivos manualmente ou com o comando `make` (makefile):

### Compilando manualmente

#### Teste simples

```bash
gcc graph.c test.c -o test
./test < graphs/graph_3.txt
```

#### Busca em profundidade

```bash
gcc graph.c dfs.c -o dfs
./dfs < graphs/graph_13.txt
```

### Compilando com makefile

```bash
make
bin/test < graphs/graph_3.txt
bin/dfs < graphs/graph_13.txt
```

## Formato de entrada

A função `GRAPHscan()` espera como entrada o seguinte padrão:

1. Dois inteiros representado o número `V` de vértices e o número `E` de arestas;
2. Lista de `E` arestas contendo: vértice_de_origem vértice_de_destino peso_da_aresta;

Vale notar que a biblioteca considera apenas grafos não direcionados. Ou seja, as arestas {v,w} e {w,v}  são iguais.

Exemplo de entrada:

```
3 3
0 1 0
0 2 0
1 2 3.0
```

O diretório `graphs` contém alguns arquivos de texto com grafos prontos para testes.

# Sobre

Essa biblioteca foi criada a partir de uma simplificação da biblioteca
`GRAPH` criada por Robert Sedgewick e disponibilizada em:

ftp://ftp.cs.princeton.edu/pub/cs226/map/c/
