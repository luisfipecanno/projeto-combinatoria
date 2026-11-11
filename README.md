# Projeto de Combinatória em C

Projeto único em linguagem C com um menu para executar os quatro conteúdos do trabalho:

1. Triângulo de Pascal
2. Arranjo simples
3. Permutação simples
4. Combinação simples

## Como compilar

Com o GCC instalado, abra o terminal na pasta do projeto e execute:

```bash
gcc main.c -o combinatoria
```

## Como executar

No Windows:

```bash
combinatoria.exe
```

No Linux ou macOS:

```bash
./combinatoria
```

## Fórmulas utilizadas

- **Arranjo simples:** `A(n,p) = n! / (n-p)!`
- **Permutação simples:** `P(n) = n!`
- **Combinação simples:** `C(n,p) = n! / (p! * (n-p)!)`

O programa limita os valores de entrada a `n <= 20` para evitar estouro nos cálculos com `long long`. No Triângulo de Pascal, o número de linhas também é limitado a 20.

## Estrutura

```text
projeto_combinatoria/
├── main.c
└── README.md
```
