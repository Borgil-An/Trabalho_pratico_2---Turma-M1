# Trabalho_pratico_2---Turma-M1
Trabalho do aluno Gustavo Augusto Reginatto da Turma M1 de AED

O trabalho em questão era a resolução do exercicio 2335 do LeetCode
Problema em questão: Você possui um dispensador de água que pode liberar água fria, morna e quente. A cada segundo, você pode encher 2 copos com tipos diferentes de água, ou 1 copo de qualquer tipo de água.

Você recebe um array de inteiros indexado a partir de 0, chamado "amount", com um tamanho de 3, onde amount[0], amount[1] e amount[2] representam a quantidade de copos de água fria, morna e quente que você precisa encher, respectivamente. Retorne o número mínimo de segundos necessários para encher todos os copos.

Exemplo de resolução: 
amount = [1,4,2]
Saída: 4
Explicação: Uma maneira de encher os copos é a seguinte:
Segundo 1: Encher um copo de água fria e um copo de água morna.
Segundo 2: Encher um copo de água morna e um copo de água quente.
Segundo 3: Encher um copo de água morna e um copo de água quente.
Segundo 4: Encher um copo de água morna.
Pode ser demonstrado que 4 é o número mínimo de segundos necessários

O que funcionou ou não: Não funcionou tentar resolver o exercicio somente por lógica matématica de divisão e soma, tive que pensar um pouco mais profundamente para dar certo.
