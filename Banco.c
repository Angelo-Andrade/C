#include <stdio.h>
#include <stdbool.h>

int main(){
    int senha, conta;
    int operacao;
    float saque, vCaixa = 500, deposito, saldo = 1500;
    bool bSenha, bConta;

    printf("Digite sua conta: ");
    scanf("%i", &conta);
    printf("Digite sua senha: ");
    scanf("%i", &senha);

    if(conta == 12345){
        bConta = true;
    }else{printf("Conta invalida\n");}

    if(senha == 1234){
        bSenha = true;
    }else{printf("Senha invalida\n");}


    //operacoes
    if(bConta == true && bSenha == true){

        printf("\n\n\t 1-Saque\n\t 2-Deposito\nDigite a operacao: ");
        scanf("%i", &operacao);


        switch(operacao){
            case 1:
                //saque
                vSaldo:
                printf("Seu saldo e: %f. Quanto deseja sacar (o caixa tem limite de 500 reais)? ", saldo);
                scanf("%f", &saque);

                if(saque<=vCaixa){
                    if(saque<=saldo){
                        saldo = saldo-saque;
                        printf("Seu saldo atual e: %f, fim da operacao", saldo);
                        break;
                    }

                }else{
                    printf("Limite do caixa ultrapassado! A operacao vai recomecar.\n");
                    goto vSaldo;

                }
            case 2:
                //deposito
                printf("Quanto deseja depositar?");
                scanf("%f", &deposito);
                saldo = saldo+deposito;
                printf("Seu saldo atual e: %f, fim da operacao", saldo);
                break;
        }
    }
}
