#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 3
#define NOME 15

int main()
{
    char nome1[NOME], nome2[NOME];
    char tab_ref[N][N], tab[N][N], jogada, simbolo[2];
    int l, c, rodada = 'a', jogador_atual = 0, fim = 0;

    printf ("Jogador 1 digite seu nome: ");
    gets(nome1);

    printf ("Jogador 2 digite seu nome: ");
    gets(nome2);

    // preenchendo tabuleiro de referencia com letras de a até i
    for (l = 0; l < N; l++)
    {
        for (c = 0; c < N; c++)
        {
            tab_ref[l][c] = rodada;
            rodada++;
        }
        
    }

    // preenchendo tabuleiro de jogo com espaços
    for (l = 0; l < N; l++)
    {
        for (c = 0; c < N; c++)
        {
            tab[l][c] = ' ';
        }
        
    }

    // pedindo para o jogador 1 escolher um simbolo e verificando se é valido
    do
    {
        printf("\n%s escolha seu simbolo x ou o: ", nome1);
        scanf("%c", &simbolo[jogador_atual]);
        fflush(stdin);
    } while (simbolo[jogador_atual] != 'x' && simbolo[jogador_atual] != 'o');

    // colocando o simbolo contrario para o jogador 2
    if (simbolo[jogador_atual] == 'x')
    {
        simbolo[jogador_atual+1] = 'o';  
    }
    else
    {
        simbolo[jogador_atual+1] = 'x';        
    }

    rodada = 0;
    do // inicio do jogo
    {
        system("cls");
        printf ("=============================================\n");
        printf ("             *** JOGO DA VELHA ***\n");
        printf ("=============================================\n");
        printf ("\n");
        
        printf ("      %c  |  %c  |  %c ", tab_ref[0][0], tab_ref[0][1], tab_ref[0][2] ); 
        printf ("      %c  |  %c  |  %c \n", tab[0][0], tab[0][1], tab[0][2] ); 
        printf ("     ___ | ___ | ___"); 
        printf ("     ___ | ___ | ___\n"); 
        printf ("      %c  |  %c  |  %c  ", tab_ref[1][0], tab_ref[1][1], tab_ref[1][2]); 
        printf ("     %c  |  %c  |  %c  \n", tab[1][0], tab[1][1], tab[1][2]); 
        printf ("     ___ | ___ | ___"); 
        printf ("     ___ | ___ | ___\n"); 
        printf ("      %c  |  %c  |  %c  ", tab_ref[2][0], tab_ref[2][1], tab_ref[2][2]); 
        printf ("     %c  |  %c  |  %c  \n", tab[2][0], tab[2][1], tab[2][2]); 
        printf ("         |     |    "); 
        printf ("         |     |    \n\n"); 


        printf ("=============================================\n");
        // se for o jogador 1, mostre seu nome e o seu simbolo
        if (jogador_atual == 0)
        {
            printf ("Vez de %s com o simbolo [%c] \n", nome1, simbolo[jogador_atual]);
        }
        else if (jogador_atual == 1)
        {
            printf ("Vez de %s com o simbolo [%c] \n", nome2, simbolo[jogador_atual]);
        } 
        printf ("=============================================\n");
        printf("> ");
        scanf ("%c", &jogada);
        fflush(stdin);

        //verifica se a jogada eh valida
        if (jogada < 'a' || jogada > 'i')
        {
            printf ("Digite um letra entre \"a\" e \"i\"\n\n\n");
            continue;
        }

        //colocando a jogada no tabuleiro
        switch (jogada)
        {
        case 'a':
            if (tab[0][0] == ' ')
            {
                tab[0][0] = simbolo[jogador_atual];
                break;
            }
            continue;
        case 'b':
            if (tab[0][1] == ' ')
            {
                tab[0][1] = simbolo[jogador_atual];
                break;
            }
            continue;
        case 'c':
            if (tab[0][2] == ' ')
            {
                tab[0][2] = simbolo[jogador_atual];
                break;
            }
            continue;
        case 'd':
            if (tab[1][0] == ' ')
            {
                tab[1][0] = simbolo[jogador_atual];
                break;
            }
            continue;
        case 'e':
            if (tab[1][1] == ' ')
            {
                tab[1][1] = simbolo[jogador_atual];
                break;
            }
            continue;
        case 'f':
            if (tab[1][2] == ' ')
            {
                tab[1][2] = simbolo[jogador_atual];
                break;
            }
            continue;
        case 'g':
            if (tab[2][0] == ' ')
            {
                tab[2][0] = simbolo[jogador_atual];
                break;
            }
            continue;
        case 'h':
            if (tab[2][1] == ' ')
            {
                tab[2][1] = simbolo[jogador_atual];
                break;
            }
            continue;
        case 'i':
            if (tab[2][2] == ' ')
            {
                tab[2][2] = simbolo[jogador_atual];
                break;
            }
            continue;
        }

        // verificando se alguem venceu
        if (tab[0][0] == tab[0][1] && tab[0][0] == tab[0][2] && tab[0][0] != ' ') fim++;
        else if (tab[1][0] == tab[1][1] && tab[1][0] == tab[1][2] && tab[1][0] != ' ') fim++;
        else if (tab[2][0] == tab[2][1] && tab[2][0] == tab[2][2] && tab[2][0] != ' ') fim++;

        else if (tab[0][0] == tab[1][0] && tab[0][0] == tab[2][0] && tab[0][0] != ' ') fim++;
        else if (tab[0][1] == tab[1][1] && tab[0][1] == tab[2][1] && tab[0][1] != ' ') fim++;
        else if (tab[0][2] == tab[1][2] && tab[0][2] == tab[2][2] && tab[0][2] != ' ') fim++;

        else if (tab[0][0] == tab[1][1] && tab[0][0] == tab[2][2] && tab[0][0] != ' ') fim++;
        else if (tab[0][2] == tab[1][1] && tab[0][2] == tab[2][0] && tab[0][2] != ' ') fim++;
        
        // trocando o jogador
        if (jogador_atual == 0 && fim == 0)
        {
            jogador_atual = 1;
        }else if(jogador_atual == 1 && fim == 0){
            jogador_atual = 0;
        }

        // verifica se o jogo acabou e ser deu velha
        rodada++;  
        if (rodada == 9)
        {
            rodada++;
            fim++;
        }
        
    } while (fim == 0);    

    // se não deu velha
    if (rodada != 10)
    {
        //mostra a tabela final
        system("cls");
        printf ("=============================================\n");
        printf ("             *** JOGO DA VELHA ***\n");
        printf ("=============================================\n");
        printf ("\n");
        
        printf ("      %c  |  %c  |  %c ", tab_ref[0][0], tab_ref[0][1], tab_ref[0][2] ); 
        printf ("      %c  |  %c  |  %c \n", tab[0][0], tab[0][1], tab[0][2] ); 
        printf ("     ___ | ___ | ___"); 
        printf ("     ___ | ___ | ___\n"); 
        printf ("      %c  |  %c  |  %c  ", tab_ref[1][0], tab_ref[1][1], tab_ref[1][2]); 
        printf ("     %c  |  %c  |  %c  \n", tab[1][0], tab[1][1], tab[1][2]); 
        printf ("     ___ | ___ | ___"); 
        printf ("     ___ | ___ | ___\n"); 
        printf ("      %c  |  %c  |  %c  ", tab_ref[2][0], tab_ref[2][1], tab_ref[2][2]); 
        printf ("     %c  |  %c  |  %c  \n", tab[2][0], tab[2][1], tab[2][2]); 
        printf ("         |     |    "); 
        printf ("         |     |    \n\n"); 


        printf ("=============================================\n");
        if (jogador_atual + 1 == 1)
        {
            printf("%s venceu!\n", nome1);
        }
        else if (jogador_atual + 1 == 2)
        {
            printf("%s venceu!\n", nome2);
        }        
        printf ("=============================================\n");
    }
    else // se deu velha
    {
        // mostra a tabela final
        system("cls");
        printf ("=============================================\n");
        printf ("             *** JOGO DA VELHA ***\n");
        printf ("=============================================\n");
        printf ("\n");
        
        printf ("      %c  |  %c  |  %c ", tab_ref[0][0], tab_ref[0][1], tab_ref[0][2] ); 
        printf ("      %c  |  %c  |  %c \n", tab[0][0], tab[0][1], tab[0][2] ); 
        printf ("     ___ | ___ | ___"); 
        printf ("     ___ | ___ | ___\n"); 
        printf ("      %c  |  %c  |  %c  ", tab_ref[1][0], tab_ref[1][1], tab_ref[1][2]); 
        printf ("     %c  |  %c  |  %c  \n", tab[1][0], tab[1][1], tab[1][2]); 
        printf ("     ___ | ___ | ___"); 
        printf ("     ___ | ___ | ___\n"); 
        printf ("      %c  |  %c  |  %c  ", tab_ref[2][0], tab_ref[2][1], tab_ref[2][2]); 
        printf ("     %c  |  %c  |  %c  \n", tab[2][0], tab[2][1], tab[2][2]); 
        printf ("         |     |    "); 
        printf ("         |     |    \n\n"); 


        printf ("=============================================\n");
        printf("                    Velha!\n");
        printf ("=============================================\n"); 
    }
    
    
    return 0;
}


//trabalho
//Jogo da velha com matriz
//joga em dois
//caracter errado tem q avisar
//se jogar no lugar errado tbm tem q avisar o usuario