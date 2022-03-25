//Programa para cadastrar clientes com os seguintes dados:
    //Nome, Idade, Email

    #include <stdio.h>
    #include <stdlib.h>

    void main(){

        struct cliente{
            char nome [30];
            char email[100];
            char remail[100];
            int  senha;
            int  rsenha;
            int  idade;
        };

        struct cliente novoCliente, *pNovoCliente;
        pNovoCliente = &novoCliente;

        printf("Informe o Nome do Cliente: ");
        scanf("%s", &pNovoCliente->nome);

        printf("Informe o Email do Cliente: ");
        scanf("%s", &pNovoCliente->email);
        
        printf("Confirme o Email:  ");
        scanf("%s", &pNovoCliente->remail);
        
        printf("Crie uma senha: ");
        scanf("%d", &pNovoCliente->senha);

        printf("Confirme sua Senha: ");
        scanf("%d", &pNovoCliente->rsenha);


        printf("Nos Informe a Idade do Cliente: ");
        scanf("%d", &pNovoCliente->idade);
        
    }