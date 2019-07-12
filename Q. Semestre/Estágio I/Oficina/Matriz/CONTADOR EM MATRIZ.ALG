Algoritmo "Contador em Matriz"

Var
   mat: vetor[1..3,1..3] de inteiro
   linha: inteiro
   coluna: inteiro

Inicio
      para linha:= 1 ate 3 faca
           para coluna:=1 ate 3 faca
                escreva("Informe um número para a linha ",linha," e coluna ",coluna,": ")
                leia(mat[linha,coluna])
           fimpara
      fimpara
      
      para linha:= 1 ate 3 faca
           escreval()
           para coluna:=1 ate 3 faca
                escreva(mat[linha,coluna])
           fimpara
      fimpara


Fimalgoritmo