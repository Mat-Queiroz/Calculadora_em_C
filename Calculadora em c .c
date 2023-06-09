#include <stdio.h> // stdio.h é a biblioteca padrão da linguagem C
#include <math.h> // A biblioteca Math armazena funções matematicas em geral

//Função de soma
void adicao() {  //void chama uma função
   printf("[SOMA]\n\n");
   float a1, a2, soma ; //definição de variavel

   printf("Selecione o primeiro número: "); 
   scanf("%f", &a1); //input para escolha do 1 numero
   printf("Selecione o segundo número: ");
    while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(adicao()); // retorna a função soma
      }
   scanf("%f", &a2); //input para escolha do 2 numero
   soma = a1 + a2 ; //variavel "soma" recebe o 1 numero e soma com o 2 numero
   printf("Resultado: %.2f\n\n", soma); // mostra o resultado da soma
}

//função de subtração
void subtracao() {
   printf("[SUBTRAÇÃO]\n\n");
   float s1, s2, sub ; //declarada as variavels
   printf("Selecione o primeiro número: ");
   scanf("%f", &s1); // comando de entrada
   printf("Selecione o segundo número: ");
   scanf("%f", &s2);// comando de entrada
  while (getchar() != '\n'){ // //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(subtracao());// retorna a função subtração
      }
   sub = s1 - s2 ; //variavel "subtracao" recebe o 1 numero e subtrai com o 2 numero
   printf("Resultado: %.2f\n\n", sub); 
}

//função de divisao
void divisao() {  
   printf("[DIVISÃO]\n\n");
   float d1, d2, div ; 
   printf("Selecione o Dividendo: ");
   scanf("%f", &d1);
   printf("Selecione o Divisor: ");
   scanf("%f", &d2);
   while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(divisao()); // retorna a função divisão
      }
   div = d1/d2 ; //variavel "divisao" recebe o 1 numero e divide com o 2 numero
   printf("Resultado: %.2f\n\n", div);
}

//função de multiplicação
void multiplicacao() {  
   printf("[MULTIPLICAÇÃO]\n\n");
   float m1, m2, mul ; 
   printf("Selecione o primeiro número: ");
   scanf("%f", &m1);
   printf("Selecione o segundo número: ");
   scanf("%f", &m2);
  while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
       return(multiplicacao()); // retorna a função multiplicação
      }
   mul = m1 * m2 ; //variavel "multiplicacao" recebe o 1 numero e multiplica com o 2 numero
   printf("Resultado: %.2f\n\n", mul);
}

//função de seno
void seno() {  
   printf("[SENO]\n\n");
   float sn1, sen ;   
   printf("Selecione o primeiro número: ");
   scanf("%f", &sn1);
  while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(seno()); // retorna a função seno
      }
   sen = sin(sn1) ; //variavel "seno" recebe um numero e aplica a função "sin" da biblioteca math
   printf("Resultado: %.2f\n\n", sen);
}

//função de cosseno
void cosseno() {  
   printf("[COSSENO]\n\n");
   float csn1, cosn ; 
   printf("Selecione o primeiro número: ");
   scanf("%f", &csn1);
  while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(cosseno()); // retorna a função cosseno
      }
   cosn = cos(csn1) ; //variavel "cosseno" recebe um numero e aplica a função "cos" da biblioteca math
   printf("Resultado: %.2f\n\n", cosn);
}

//função de tangente
void tangente() {  
   printf("[TANGENTE]\n\n");
   float tgnt, tang ; 
   printf("Selecione o primeiro número: ");
   scanf("%f", &tgnt);
  while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(tangente()); // retorna a função tangente
      }
   tang = tan(tgnt) ; //variavel "tangente" recebe um numero e aplica a função "tan" da biblioteca math
   printf("Resultado: %.2f\n\n", tang);
}


void potencia(){
printf("[POTENCIA]\n\n");
float base, expoente, pot; //Aqui declaro a base e o expoente que vai ser elevado a 2ª, 3ª, 4ª casa decimal.
  printf("Insira a base: ");
  scanf("%f", &base) ; // Comando de entrada para a base
  printf("Insira o expoente: ");
  scanf("%f", &expoente) ;// Comando de entrada para o expoente
  while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(potencia()); // retorna a função potencia
      }
  pot = pow(base,expoente); // Variavel "pow" recebe a função pow da biblioteca math.h
  printf("O Resultado da potencia é: %.2f\n\n", pot);// Aqui é imprimido o resultado da exponenciação
}

void radiciacao(){
  printf("[RADICIAÇÃO]\n\n");
  float raiz; // Declarada a variável "raiz"
  printf("Selecione o primeiro número: "); 
  scanf("%f", &raiz) ; // Comando de entrada para o numero o qual deseja aplicar a função "sqrt"
  while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer
    // 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(radiciacao()); // retorna a função radiciação
      }
  raiz = sqrt(raiz); //Variavel "raiz" recebe a função "sqrt" da biblioteca math.h
  printf("Resultado da raiz é %.2f\n\n", raiz); // Retorna a variável "raiz" e imprimi o resultado da radiciação na tela

}

int raizes(){
    printf("[RAIZES]\n\n");
    float a, b, c;
    float delta, x1, x2;
   

    // Selecione os coeficientes do polinômio (a,b,c)
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
     while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        return(raizes()); // retorna a função raizes
      }
     
  
    delta = b * b - 4 * a * c; //Segue a regra de procedência dos operadores lógicos

    // Verificando se há raízes reais
    if (delta > 0) {
        // Calculando as raízes reais
        x1 = (-b + sqrt(delta)) / (2 * a); //formula das raizes 
        x2 = (-b - sqrt(delta)) / (2 * a); //formula das raizes
      // caso os numeros inseridos não tiverem uma raiz real, a função não é realizada

        printf("As raizes sao: %.2f e %.2f\n\n", x1, x2);
    } else if (delta == 0) {
        // Calculando a raiz real (caso delta seja = a zero)
        x1 = -b / (2 * a); //so calcula 1 raiz pois o delta é igual a 0

        printf("A raiz dupla e: %.2f\n\n", x1);
    } else {
        // Não há raízes reais (caso delta seja < que zero)
        printf("Nao existem raizes reais\n\n");
    }

    return 0;
}

//função do menu
void menu(){
  int opcao; // declara variavel
  
  while(1){ // enquanto estiver no menu, mostre as opções
    printf("Escolha um numero para começar a operação desejada:\n\n");
    printf(" [1] para soma\n ");
    printf("[2] para subtracao\n ");
    printf("[3] para divisao\n ");
    printf("[4] para multiplicacao\n ");
    printf("[5] para seno\n ");
    printf("[6] para cosseno\n ");
    printf("[7] para tangente\n ");
    printf("[8] para potencia\n ");
    printf("[9] para radiciacao\n ");
    printf("[10] para raizes\n ");
    printf("[11] para o menu\n\n ");

    scanf("%i." ,&opcao); //input para opção

      while (getchar() != '\n'){ //enquanto não achar o "/n" limpa o buffer 
        printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
        menu(); // retorna a função menu
      }
        
    if(opcao == 1){ //escolha de tela
      adicao();
      continue;//voltar para o menu
    }else if(opcao == 2 ){
      subtracao();
      continue;
    }else if(opcao == 3 ){
      divisao();
      continue;
    }else if(opcao == 4 ){
      multiplicacao();
      continue;
    }else if(opcao == 5 ){
      seno();
      continue;
    }else if(opcao == 6 ){
      cosseno();
      continue;
    }else if(opcao == 7 ){
      tangente();
      continue;
    }else if(opcao == 8 ){
      potencia();
      continue;
    }else if(opcao == 9 ){
      radiciacao();
      continue;
    }else if(opcao == 10 ){
      raizes();
      continue;
    }else if(opcao == 11 ){
      menu();
      continue;
    }else if (opcao != 1||opcao != 2||opcao != 3||opcao != 4||opcao != 5||opcao != 6||opcao != 7||opcao != 8||opcao != 9||opcao != 10||opcao != 11){ //forçar a escolher um valor valido
      printf("Esse não é um valor valido, por favor escolha entre as opções:\n\n");
      continue; // retorna ao menu
    }
  }
}

int main(void) { //declara a função menu
  menu();  
  return 0;
}