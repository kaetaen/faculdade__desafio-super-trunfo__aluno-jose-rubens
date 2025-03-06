# Desafio Super Trunfo

Aluno: José Rubens dos Santos

Jogo de Trunfo na modalidade Paises

## Dependencias

- Compilador gcc (clang, gcc, etc)

## Execução do programa

- Compile o programa com o compilador do seu sistema

Exemplo:

```bash
gcc supertrunfo.c -o supertrunfo
```

- Execute o binário:

```bash
./supertrunfo
```

## Como jogar

Todas as regras do trunfo são aplicaveis. 
Basta preencher duas cartas que representam paises, as cartas são rivais entre si. Após o preenchimento das cartas escolha quais atributos dos paises você quer comparar.

Abaixo segue os códigos correspondentes a cada atributo.
Por meio deles você escolhe quais atributos quer comparar.

| CODIGO | ATRIBUTO                     |
|--------|------------------------------|
| 1      | POPULAÇÃO                    |
| 2      | ÁREA                         |
| 3      | PIB                          |
| 4      | NÚMERO DE PONTOS TURISTICOS  |
| 5      | DENSIDADE POPULACIONAL       |

A carta cuja soma total dos valores dos atributos for maior, vence o jogo.

OBS.: Com exceção a densidade populacional, onde quem vence é quem possui o menor valor.

