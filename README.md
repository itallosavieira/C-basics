# C - Basics
<br/>

## 1. Bibliotecas
Biblioteca é um conjunto de coisas que podemos usar em nosso programa.

Segue um exemplo de como incluir no código (sempre no início):

```c
#include <stdio.h> 
```

**stdio.h** (standard input-output header) é um cabeçalho da biblioteca padrão do C. 

Temos diversas outras como: math.h para funções matemáticas, string.h	 para manipular strings e memória, e etc.
<br/><br/><br/>


## Função Main
A função principal é a main(). É a partir dela que nosso programa comecará a ser executado. Sempre será o ponto de partida.

```c
int main()
{
	...
}
```
<br/><br/>


## Compilação e Execução
```c
int main()
{
	printf("Hello, World!"\n);
}
```
Após a criação do nosso programa, fazemos a compilação no terminal:
```bash
gcc programa.c -o programa.out
```
E depois, execução:
```bash
./programa.out
> Hello, World!
```
<br/><br/>


## Tipos de dados
Existem 5 tipos básicos de dados em C:
- **char** (caractere)
- **int** (inteiro)
- **float** (ponto flutuante)
- **double** (poto fluante de precisão dupla)
- **void** (sem valor)
	- *declara explicitamente uma função que não retorna valor algum ou cria ponteiros genéricos.*
<br/>

