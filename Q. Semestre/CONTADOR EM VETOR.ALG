Algoritmo "Contador em Vetor"

Var
   vet: vetor[1..5] de inteiro
   quantidade: inteiro
   indice: inteiro

Inicio

     escreva("Digite a quantidade de valores que quer armazenar (máx. 5): ")
     leia(quantidade)

     para indice:= 1 ate quantidade faca
          escreva("Informe o ",indice,"° valor: ")
          leia(vet[indice])
     fimpara

     para indice:= 1 ate quantidade faca
          escreval(vet[indice])
     fimpara

Fimalgoritmo