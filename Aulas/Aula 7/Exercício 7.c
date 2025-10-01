/*
 * =========================================================================
 * RESPOSTAS DO EXERCÍCIO 7
 * =========================================================================
 *
 * Análise de Desempenho (Contador de Iterações) para N=10 (Ex. 6) e N=256
 */

// -------------------------------------------------------------------------
// ANÁLISE DA BUSCA LINEAR (Busca sequencial)
// -------------------------------------------------------------------------

/*
 * a) Qual foi o menor valor do contador para a busca linear? Em que situação
 * ocorreu?
 *
 * MENOR VALOR: 1
 * SITUAÇÃO: Quando o elemento procurado é o primeiro do vetor (índice 0).
 * A busca encontra o alvo na primeira comparação e para (melhor caso).
 * EXEMPLO (N=10): Buscar o elemento 2 (posição 0).
 */

/*
 * b) Qual foi o maior valor do contador para a busca linear? Em que situação
 * ocorreu?
 *
 * MAIOR VALOR: N (tamanho do vetor). No seu caso, 10.
 * SITUAÇÃO: Quando o elemento procurado é o último do vetor (índice N-1) ou
 * não está presente no vetor. A busca precisa percorrer todos os
 * N elementos (pior caso).
 * EXEMPLO (N=10): Buscar o elemento 131 (posição 9) ou um número inexistente.
 */


// -------------------------------------------------------------------------
// ANÁLISE DA BUSCA BINÁRIA (Baseado nos resultados do Ex. 6, N=10)
// -------------------------------------------------------------------------

/*
 * c) Qual foi o menor valor do contador para a busca binária? Em que situação
 * ocorreu?
 *
 * MENOR VALOR: 1
 * SITUAÇÃO: Quando o elemento procurado está exatamente no ponto médio do
 * vetor. A busca o encontra na primeira comparação.
 * EXEMPLO (N=10): Buscar o elemento 18 (posição 4).
 */

/*
 * d) Qual foi o maior valor do contador para a busca binária? Em que situação
 * ocorreu?
 *
 * MAIOR VALOR: 4
 * SITUAÇÃO: Ocorre com elementos que estão nas "bordas" dos segmentos (longe
 * do ponto central) ou quando o elemento não existe no vetor.
 * EXEMPLO (N=10): Buscar 15, 43 ou 131.
 */


// -------------------------------------------------------------------------
// ANÁLISE EM N=256 ELEMENTOS (Pior Caso)
// -------------------------------------------------------------------------

/*
 * e) Se o vetor tivesse 256 números, qual seria o pior caso (maior valor do
 * contador) ao utilizar a busca linear?
 *
 * PIOR CASO: 256
 * EXPLICAÇÃO: A busca linear sempre terá como pior caso o número de elementos
 * do vetor (N), pois precisa verificar todos.
 */

/*
 * f) Se o vetor tivesse 256 números, qual seria o pior caso (maior valor do
 * contador) ao utilizar a busca binária?
 *
 * PIOR CASO: 9
 * EXPLICAÇÃO: O pior caso da Busca Binária é determinado por log2(N) + 1.
 * Cálculo: log2(256) = 8. Portanto, 8 + 1 = 9 iterações.
 */
