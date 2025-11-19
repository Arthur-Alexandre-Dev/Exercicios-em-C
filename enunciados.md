1. Troca de Variáveis (Strings):
Faça um programa em C que declare três strings (vetores de char, ex: char A[30]). Use strcpy (da biblioteca string.h) para inicializá-las com "CURITIBA", "SAO PAULO" e "RIO DE JANEIRO". Em seguida, usando uma string auxiliar e strcpy, troque os conteúdos das variáveis para que:

A contenha "RIO DE JANEIRO"

B contenha "CURITIBA"

C contenha "SAO PAULO"
Ao final, use printf para mostrar o conteúdo das três strings.

2. Equação do 2º Grau:
Faça um programa em C que calcule as raízes de uma equação do 2º grau. Inclua a biblioteca math.h para usar as funções sqrt() (raiz quadrada) e pow() (potência). Classifique e mostre as raízes calculadas.

3. Procedência do Produto:
Faça um programa em C que leia (via scanf) o preço (float) e o código de origem (int) de um produto. Mostre no console o preço e a sua procedência. Caso o código não seja nenhum dos especificados, indique "Importado". Use a tabela:

1: Sul

> 1 e < 5: Norte

> 4 e < 10: Sudeste

> 9 e < 14: Nordeste

>= 14: Outra Região

4. Ordem Decrescente (Números):
Faça um programa em C que leia 3 números (int ou float) e mostre-os em ordem decrescente.

5. Ordem Alfabética (Nomes):
Faça um programa em C que leia 3 nomes (vetores de char, máx 30 caracteres cada). Use strcmp (da string.h) para compará-los e mostre-os em ordem alfabética.

6. Idade para Votar/CNH:
Faça um programa em C que leia o ano de nascimento de uma pessoa e o ano atual. Calcule e mostre a idade da pessoa. Verifique e mostre também se ela já tem idade para votar (16 anos ou mais) e para conseguir a CNH (18 anos ou mais).

7. Calculadora Simples:
Faça um programa em C que leia dois números (float) e a operação aritmética desejada (um char: '+', '-', '*', '/'). Calcule e mostre a resposta da operação. (Dica: use scanf(" %c", &operador); para ler o caractere).

8. Loop Simples:
Use um loop for para mostrar (printf) todos os números inteiros entre 1 e 10.

9. Tabuada Específica:
Faça um programa em C que leia um número (int). O número deve ser validado (maior que 0 e menor que 11). Após, mostre a tabuada desse número (Ex: leu 5, mostrar 5x1=5, 5x2=10, ...).

10. Todas as Tabuadas:
Faça um programa em C que mostre a tabuada de todos os números entre 1 e 10 (use loops aninhados).

11. Soma (1 a 10):
Faça um programa em C que mostre a soma de todos os números inteiros entre 1 e 10.

11. Soma (10 Números):
Faça um programa em C que leia 10 números (usando scanf dentro de um loop). Antes de encerrar, mostre a soma dos 10 números lidos.

12. Média (50 Notas):
Faça um programa em C que leia 50 notas (float). Antes de encerrar, mostre a média das notas lidas.

13. Média (Flag Negativo):
Faça um programa em C que leia uma série de notas (float) usando um loop while. A leitura termina quando for lida uma nota negativa (o "flag"). Antes de encerrar, mostre o total de notas lidas e a média das notas.

14. Jogo de Adivinhação:
Faça um programa em C que simule um jogo de adivinhação. O programa deve ler o "número imaginado" (o alvo). Depois, deve ler "chutes" em um loop while. A cada chute, deve dizer se foi "alto" ou "baixo". O loop termina quando o chute for correto. Antes de encerrar, mostre quantos chutes foram dados.

15. Apuração de Eleição:
Faça um programa em C para apurar o resultado de uma eleição entre três candidatos (A, B, C). A entrada (via scanf(" %c", &voto)) é encerrada quando for lido o caractere *.

Votos válidos: 'A', 'B', 'C'.

Voto em branco: ' ' (espaço).

Voto inválido: Qualquer outro caractere.

Ao final, mostrar a quantidade de votos e a porcentagem de cada candidato, de brancos e de inválidos.

16. Soma Múltiplos:
Faça um programa em C que efetue a soma de todos os números inteiros ímpares, que são múltiplos de 3, e que se encontram no conjunto dos números de 1 até 500.

17. Contagem Regressiva:
Faça um programa em C que simule uma contagem regressiva de 10 minutos. Use loops aninhados (minutos e segundos) e a função printf("%02d:%02d\n", min, seg) para formatar a saída de 10:00, 9:59, ..., até 00:00.

18. Maior e Menor Altura:
Faça um programa em C que leia uma série de alturas de pessoas (float), encerrada por uma altura negativa. Antes de terminar, mostre a maior e a menor altura que foi lida.

19. Número Primo:
Faça um programa em C que leia um número (int) e informe se ele é primo ou não.

20. Inversão 3 Dígitos:
Faça um programa em C que leia um número inteiro de 3 dígitos (validar se está entre 100 e 999). Mostre o número invertido (Ex: leu 471, mostra 174). (Use operações matemáticas % e /).

21. Validação de Data:
Faça um programa em C que leia dia, mês e ano (int) e informe se a data lida é válida ou não (considere anos bissextos).

22. Cálculo de Idade Exata:
Faça um programa em C que leia o dia, mês e ano de nascimento. Depois, leia o dia, mês e ano de hoje. Calcule e mostre a idade exata em anos, meses e dias. (Ex.: 15 anos, 3 meses e 7 dias).

23. Potência com Loop:
Faça um programa em C que leia 2 números inteiros X e Y. Calcule e mostre o resultado de X elevado a Y, usando um loop for ou while (sem usar a função pow() da math.h).

24. Placar de Vôlei:
Simule um placar de um set de Vôlei (25 pontos) entre AZUL e BRANCO. O programa lerá uma série de caracteres 'A' (ponto do AZUL) ou 'B' (ponto do BRANCO). Para cada ponto lido, mostrar o placar. O set termina quando um time atinge 25 pontos, com pelo menos 2 de vantagem (ex: 25-23, 26-24, etc.). Ao final, informar quem venceu.

25. Fibonacci:
Faça um programa em C que leia um número N (validar N >= 2). Calcule e mostre os N primeiros termos da sequência de FIBONACCI (0, 1, 1, 2, 3, 5, 8, …).

26. Sequência (1, 3, 6, 10...):
Faça um programa em C que leia N, calcule e mostre os N primeiros termos da sequência (1, 3, 6, 10, 15, …).

27. Pares no Intervalo:
Faça um programa em C que leia um limite inferior e um limite superior. Valide se o inferior é menor ou igual ao superior. Mostre todos os números pares entre os limites lidos.

28. Divisores de Números:
Faça um programa em C que leia uma lista de números, terminada pelo número 0. Para cada número lido (exceto o 0), mostre o próprio número e a relação de seus divisores.

29. Interruptor 5000:
Faça um programa em C que leia uma lista de números inteiros, terminada pelo número 5555. O número 5000 funciona como um "interruptor".

Use uma variável de controle (int podeMostrar = 1; // 1 para verdadeiro, 0 para falso).

Comece mostrando os números.

Quando ler 5000, inverta a variável (podeMostrar = 0;).

Quando ler o próximo 5000, inverta novamente (podeMostrar = 1;).

O programa só deve usar printf se podeMostrar for 1.

Lista 2

30. Ordem Inversa:
Faça um programa em C que leia 20 números inteiros, armazene-os em um vetor (int numeros[20]) e, após a leitura completa, mostre-os na ordem inversa (do último ao primeiro).

31. Índices >= 15:
Faça um programa em C que leia 30 números, colocando-os em um vetor (int numeros[30]). Após o término da leitura, mostre apenas os elementos com índice (posição) maior ou igual a 15.

32. Valores >= 15:
Faça um programa em C que leia 30 números, colocando-os em um vetor (int numeros[30]). Após o término da leitura, mostre apenas os elementos com valor maior ou igual a 15.

33. Matriz Coluna a Coluna:
Faça um programa em C que leia, linha a linha, os elementos de uma matriz 5x20 (int matriz[5][20]). Após, mostre os elementos coluna a coluna (loop de colunas por fora, loop de linhas por dentro).

34. Matriz 3D:
Faça um programa em C que monte uma matriz de 3 dimensões 10x30x3 (ex: int matriz[10][30][3]). O conteúdo de cada elemento matriz[i][j][k] deve ser igual à multiplicação dos valores de seus índices (i * j * k). Após, mostre o conteúdo da matriz.

35. Base 10 para Base 2 (Divisão):
Faça um programa em C que leia um número inteiro na base 10 (validar: > 0 e < 32768) e mostre-o na base 2 (binário), usando o método da divisão sucessiva por 2.

36. Base 10 para Base 2 (Potências):
Faça um programa em C que leia um número inteiro na base 10 (validar: > 0 e < 32768) e mostre-o na base 2 (binário), usando o método das potências de 2.

37. Média de Cursos:
Uma escola possui 20 cursos (numerados de 1 a 20). Faça um programa em C que leia dados dos alunos (código do curso, matrícula e nota final) em um loop (encerrado por matrícula 0 ou negativa). Ao final, mostre a média das notas de matemática por curso.
(Dica: use dois vetores auxiliares, float somaNotas[20] e int contagemAlunos[20], ambos inicializados com 0. Use o código do curso - 1 como índice).

38. Dígito Verificador:
Faça um programa em C que verifique se um número de 8 dígitos (lido como uma string char numero[9]) é válido. A regra é: 'A' é numero[0], 'B' é numero[1]... 'H' é numero[7].

Importante: Converta os caracteres 'A' a 'G' para inteiros (Dica: int A = numero[0] - '0';).

Calcule SOMA = (8*A) + (7*B) + (6*C) + (5*D) + (4*E) + (3*F) + (2*G).

Calcule RESTO = SOMA % 11.

Calcule DVC = 11 - RESTO.

Se DVC for 10 ou 11, faça DVC = 1.

Converta 'H' para int H = numero[7] - '0';.

Se DVC == H, mostrar "Válido". Caso contrário, "Inválido".

39. Formatar Nome (Sobrenome, Nome):
Faça um programa em C que leia uma série de nomes completos (máx 50 caracteres, ex: "MARIA DA SILVA XAVIER"), encerrada pela string "FIM". Para cada nome lido, mostrar "SOBRENOME, NOME" (Ex: "XAVIER, MARIA DA SILVA").
(Desafio: use a função strrchr (de string.h) para achar o último espaço no nome. Use printf ou strncpy para imprimir as partes separadamente).

40. Corretor de Prova:
Faça um programa em C para corrigir uma prova de 25 questões (A,B,C,D,E).

Leia o GABARITO (um char gabarito[25]).

Após, em um loop, leia os dados dos alunos: número de inscrição (int) e as 25 respostas (char respostas[25]). O loop termina com inscrição igual a 0.

Para cada aluno, corrija a prova e mostrar: Inscrição, Nº de respostas certas, erradas e deixadas em branco (assuma ' ' como branco).

Mostre também a Nota = (Nº de certas * 4).

Antes de encerrar o programa, deve mostrar a média aritmética de todas as notas.

Número por Extenso:
Faça um programa em C que leia uma série de números menores que 1000 (validar a leitura), encerrada por um número menor que 1. Para cada número lido, mostrar o seu extenso. (Exemplo: leu 452, mostrar – "quatrocentos e cinquenta e dois").

Lista 3

41. Ordenação de Notas:
Faça um programa em C que leia 250 notas (float), armazene-as em um vetor. Após a leitura, mostre-as em ordem crescente e depois em ordem decrescente.
(Desafio: implemente um algoritmo de ordenação, como Bubble Sort, ou use a função qsort da stdlib.h).

42. Ordenação de Nomes:
Faça um programa em C que leia uma relação de nomes (máx 1000 nomes, char nomes[1000][30]), encerrada pela string "FIM". Armazene os nomes no vetor. Após a leitura, mostre os nomes em ordem alfabética.
(Desafio: Implemente um Bubble Sort usando strcmp para comparar e strcpy para trocar os nomes, ou use qsort com strcmp).

43. Ordenação Paralela (Nome + Média):
Faça um programa em C que leia nomes de alunos (char nomes[500][30]) e suas respectivas médias (float medias[500]). A relação é encerrada pelo nome "FIM".
Após a leitura, mostrar a relação (nome e nota) em ordem decrescente de média.
(Desafio: Implemente um algoritmo de ordenação (ex: Bubble Sort) no vetor de médias. Toda vez que você trocar a posição de duas médias no vetor, você deve trocar os nomes nas posições correspondentes no vetor de nomes. Use strcpy e uma char temp[30] para a troca dos nomes).

44. Ordenação Par/Ímpar:
Faça um programa em C que leia uma relação de números positivos (int), encerrada por um número negativo.

Armazene os números pares em um vetor int pares[100] e os ímpares em int impares[100]. Use contadores separados para cada vetor.

Após a leitura, ordene o vetor de pares em ordem crescente.

Ordene o vetor de ímpares em ordem decrescente.

Mostre os dois vetores ordenados.