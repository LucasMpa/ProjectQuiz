#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Desenvolvido por: Lucas Matheus
    int i=0;
    char nomeJogador [20];
    int alternativa_conversao;
    int score = 0;
    char alternativa_letra;
        void charUp(){ //Realiza um UpperCase na variável "alternativa_letra".
            switch(alternativa_letra){

            case 'a': alternativa_letra = 'A';
            break;

            case 'b': alternativa_letra = 'B';
            break;

            case 'c': alternativa_letra = 'C';
            break;

            case 'd': alternativa_letra = 'D';

            }
        }

    void scoreNaturais(){ //Faz com que o score seja um número natural, ou seja, não possa ser menor que 0.
        if(score <= 5){
        score = 0;
        }
    }
    void strUp(char* up){ //Realiza um Uppercase no parâmetro passado.
    while (*up = toupper(*up)) up++;
    }

    int primeiraEtapa(){
        scoreNaturais();
        charUp();
        system("cls");
    }

    int ultimaEtapa(){
        printf("\n\n");
        alternativa_letra = "";
        system("pause");
        system("cls");
    }

int main(){
setlocale(LC_ALL, "portuguese");





    printf("========================================================================================================================");
    printf("\n                                       BEM-VINDO AO JOGO SOBRE SISTEMA DE ARQUIVOS!\n\n\n\nEste projeto está em processo de desenvolvimento! Deixem seu feedback para futuras melhorias!\n\n\n");
    printf("                                                                                        Desenvolvido por: Lucas Matheus\n\n");
    printf("========================================================================================================================");
    system("pause");
    system("cls");
            printf("========================================================================================================================");
            printf("\n                                                      INSTRUÇÕES\n");
            printf("\nEste projeto é um jogo de perguntas e respostas onde o jogador deverá ler uma questão e escolher dentre quatro opções a única acertiva. ");
            printf("Ao total são 5 perguntas, o jogador recebe 15 pontos por cada resposta correta, e perde 5 pontos para cada alternativa errada.\n\n");


    printf("\n========================================================================================================================\n");
    system("pause");
    system("cls");
    printf("\n========================================================================================================================\n");


    printf("Digite seu nome: ");
    scanf("%s", nomeJogador);
    strUp(nomeJogador);
    system("cls");
			printf("========================================================================================================================");
			printf("Jogo carregado com sucesso...\n\nSeu nome é: %s \nEsteja preparado para as perguntas.\n",nomeJogador);
			printf("Que a sorte esteja ao seu lado :)\n");
			printf("========================================================================================================================");
			system("pause");
            system("cls");

while(alternativa_letra != 'A' && alternativa_letra != 'B' && alternativa_letra != 'C' && alternativa_letra != 'D'){
printf("========================================================================================================================");
printf("1)Um sistema de arquivos é um padrão que representa um conjunto de estruturas lógicas que permite ao sistema operacionalacessar e controlar informações armazenadas em dispositivos de memória como discos rígidos, pen drivers, etc. Assinale aalternativa que indica corretamente o nome de um sistema de arquivos suportado nativamente pelo sistema operacional Microsoft Windows 7.\n");
printf("\nScore: %i", score);
printf("\nA) EXT3\nB) NTFS\nC) HFS\nD) JFS\n");
printf("\nDigite a letra da alternativa escolhida: ");
scanf("%s", &alternativa_letra);

    primeiraEtapa();

}
if(alternativa_letra == 'B'){
    printf("                                       Alternativa Correta! Você Ganhou 15 pontos!");
    score += 15;
}else{
    if(alternativa_letra != 'A' && alternativa_letra != 'C' && alternativa_letra != 'D'){
        printf("                                        Alternativa Errada! Você perdeu 5 pontos!");
        score -= 5;
    }
}

    ultimaEtapa();

while(alternativa_letra != 'A' && alternativa_letra != 'B' && alternativa_letra != 'C' && alternativa_letra != 'D'){
printf("========================================================================================================================");
printf("2) O Network File System (NFS) – Sistemas de Arquivos em Rede – tem como um dos principais propósitos dar suporte a um  sistema heterogêneo, no qual clientes e servidores estejam possivelmente executando sistemas operacionais e hardwares   diferentes. Sobre o NFS, é CORRETO afirmar:\n");
printf("\nScore: %i\n", score);
printf("A) O servidor tem total gerência sobre o ponto de montagem nos clientes.\n");
printf("B) Os serviços NFS são implementados apenas nos servidores Linux.\n");
printf("C) Como critério de segurança, os clientes não podem ter acesso aos atributos dos arquivos.\n");
printf("D) O NFS utiliza dois protocolos cliente-servidor, em que o primeiro é responsável pela montagem e o segundo é para     acesso de diretório e arquivos.\n");

printf("\nDigite a letra da alternativa escolhida: ");
scanf("%s", &alternativa_letra);

    primeiraEtapa();

}
if(alternativa_letra == 'D'){
    printf("                                       Alternativa Correta! Você Ganhou 15 pontos!");
    score += 15;
}else{
    if(alternativa_letra != 'A' && alternativa_letra != 'C' && alternativa_letra != 'B'){
        printf("                                        Alternativa Errada! Você perdeu 5 pontos!");
        score -= 5;
    }
}

    ultimaEtapa();

while(alternativa_letra != 'A' && alternativa_letra != 'B' && alternativa_letra != 'C' && alternativa_letra != 'D'){
printf("========================================================================================================================");
printf("3) Qual dos itens abaixo é um tipo de sistema de arquivos utilizado no Linux?\n");
scoreNaturais();
printf("\nScore: %i", score);
printf("\nA) NTFS\nB) SMBD\nC) EXT2\nD) FAT32\n");
printf("\nDigite a letra da alternativa escolhida: ");
scanf("%s", &alternativa_letra);

    primeiraEtapa();

}
if(alternativa_letra == 'C'){
    printf("                                       Alternativa Correta! Você Ganhou 15 pontos!");
    score += 15;
}else{
    if(alternativa_letra != 'A' && alternativa_letra != 'B' && alternativa_letra != 'D'){
        printf("                                        Alternativa Errada! Você perdeu 5 pontos!");
        score -= 5;
    }
}

    ultimaEtapa();

while(alternativa_letra != 'A' && alternativa_letra != 'B' && alternativa_letra != 'C' && alternativa_letra != 'D'){
printf("========================================================================================================================");
printf("4) Sobre sistemas de arquivos, analise as afirmativas a seguir.\n\nI.   O sistema operacional Linux é capaz de ler/escrever dados em partições do tipo NTFS.\n");
printf("II.  O FAT12 permite definir quem pode e como acessar pastas ou arquivos.\nIII. O FAT32 aloca o espaço em disco de maneira mais eficiente que o FAT16.\n");
printf("\nScore: %i", score);
printf("\nA) Somente I\nB) Somente II\nC) Somente III\nD) Somente I e III\n");
printf("\nDigite a letra da alternativa escolhida: ");
scanf("%s", &alternativa_letra);

    primeiraEtapa();

}
if(alternativa_letra == 'D'){
    printf("                                       Alternativa Correta! Você Ganhou 15 pontos!");
    score += 15;
}else{
    if(alternativa_letra != 'A' && alternativa_letra != 'C' && alternativa_letra != 'B'){
        printf("                                        Alternativa Errada! Você perdeu 5 pontos!");
        score -= 5;
    }
}

    ultimaEtapa();

while(alternativa_letra != 'A' && alternativa_letra != 'B'){
printf("========================================================================================================================");
printf("5) Julgue o item seguinte, a respeito de sistema de arquivos.\n\nUm disco formatado com sistema de arquivos FAT32 permite armazenar arquivos de tamanho de até 120 gigabaites?\n");
printf("\nScore: %i", score);
printf("\nA) Certo\nB) Errado\n");
printf("\nDigite a letra da alternativa escolhida: ");
scanf("%s", &alternativa_letra);

    primeiraEtapa();

}
if(alternativa_letra == 'A'){
    printf("                                       Alternativa Correta! Você Ganhou 15 pontos!");
    score += 15;
}else{
    if(alternativa_letra != 'B'){
        printf("                                        Alternativa Errada! Você perdeu 5 pontos!");
        score -= 5;
    }
}

    ultimaEtapa();

printf("========================================================================================================================");
printf("Parabéns %s, seu resultado foi %i/75 pontos.\n\n", nomeJogador,score);
printf("Muito obrigado por testar meu jogo!\nCaso queira, por favor envie-me um e-mail com o seu feedback para o endereço: lucasmpa16@gmail.com\n\n");
system("pause");
}
