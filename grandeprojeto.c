#include <stdio.h>
#include <stdlib.h>
//*689()

int main()
{
    //gcc grandeprojeto.c -o p.exe
    char nome[30];
    int decisao = 0, i;
    printf("\nDigite seu nome... \n");
    fflush(stdin);
    scanf("%[^\n]s",&nome);
    while (decisao != 5)
    {
        printf("\nOii, %s, vamos falar das Regioes do Brasil?\n", nome);
        printf("\n1. As Regioes.\n2. Clima, Relevo e Vegetacao.\n3. Exercicios\n4. Fontes \n5. Sair");

        printf("\nDigite... ");
        scanf("%i", &decisao);      

        if (!decisao > 0){
            //aqui ele verifica se é um número, depois dá um fflush que limpa o buffer.
            printf("\n\nerro!\nDigite um numero de 1 ate 5!\n"); 
            system("pause"); 
            system("cls");
            fflush(stdin);
            
        }
        else if (decisao >= 1 && decisao <= 5)
        {
            system("pause");
            system("cls");

            switch (decisao)
            {
            case 1:

                printf("\nAs Regioes\n");
                void regioes(void);
                regioes();
                break;
            case 2:
                printf("\nClima,Relevo e Vegetacao\n");
                void climas(void);
                climas();
                break;
            case 3:
                printf("\nExercicios\n");
                void exercicio(void);
                exercicio();
                break;
            case 4:
                printf("\nFontes");
                printf("\nwww.guiadoestudante.abril.com.br");
                printf("\nwww.brasilescola.uol.com.br");
                system("pause");
                break;
            }
        }else{
            /*int decisaoElse = 0;
            printf("Decisao %i",decisao);
            printf("\nDigite... ");
            scanf("%i", &decisaoElse);
            system("pause");*/
            printf("\nerro! Digite novamente...\n");
        }
    }
}

void regioes()
{
    int i = 0;
    printf("\nO Brasil possui 26 Estados e o Distrito Federal.");
    printf("\nEm 1969 o Instituto Brasileiro de Geografia e Estatistica, IBGE, ");
    printf("separou esses estados em 5 Regioes: Norte, Centro-Oeste, Nordeste, Sudeste e Sul.");
    printf("\nQual voce quer aprender sobre?");

    while (i != 6)
    {
        printf("\n1. Norte\n2. Centro-Oeste\n3. Nordeste\n4. Sudeste\n5. Sul\n6. Sair\n\nDigite...");
        scanf("%d", &i);
        system("cls");
        switch (i)
        {
        case 1:
            printf("\nNorte");
            printf("\nFormado por: Tocantins, Acre, Para, Rondonia, Roraima, Amapa e Amazonas.");
            printf("\nEh a maior regiao em area, tem a menor populacao entre as outras regioes\n");
            system("pause");
            break;
        case 2:
            printf("\nCentro-Oeste");
            printf("\nFormado por Mato Grosso, Mato Grosso do Sul, Goias e Distrito Federal");
            printf("\nSegunda maior regiao em area, eh a menor em populacao, tem muitas localidades pouco habitadas\n");
            printf("\nAbriga a Capital, Brasilia, no Distrito Federal");
            system("pause");
            break;
        case 3:
            printf("\nNordeste");
            printf("\nEh a regiao que possui mais estados: Bahia, Sergipe, Alagoas, Paraiba, Pernambuco,\n");
            printf(" Rio Grande do Norte, Ceara, Piaui e Maranhao");
            printf("\nTerceira maior regiao em area, eh onde a colonizacao europeia \n");
            printf("se estabeleceu inicalmente no Brasil.\n");
            printf("\nTem a maior faixa litonanea do pais.");
            system("pause");
            break;
        case 4:
            printf("\nSudeste");
            printf("\nFormado por Espirito Santo, Rio de Janeiro, Minas Gerais e Sao Paulo");
            printf("\nQuarta maior regiao em area, e a maior em populacao, Sao Paulo Capital \n");
            printf("se destaca como uma das maiores cidades do mundo.\n");
            system("pause");
            break;
        case 5:
            printf("\nSul");
            printf("\nSanta Catarina, Rio Grande do Sul e Parana");
            printf("\nMenor regiao em area, possui forte colonizacao alema, eh a regiao mais fria do Pais.\n");
            system("pause");
            break;
        }
    }

    system("pause");
}

void climas()
{
    // clima relevo e vegetacao
    int i = 0;
    printf("\nO Brasil possui uma extensao territorial continental, o que");
    printf("abre espaco para diversos climas, relevos e vegetacoes atuarem aqui.");
    printf("\nO Pais tem 93%% do seu territorio no Hemisferio Sul, e os ");
    printf("\noutros 7%% no Norte, o que significa que estamos");
    printf("na zona intertropical do planeta, com excecao da regiao Sul.");
    printf("\nQual voce quer aprender sobre?");

    while (i != 6)
    {
        printf("\n1. Norte\n2. Centro-Oeste\n3. Nordeste\n4. Sudeste\n5. Sul\n6. Sair\n\nDigite...");
        scanf("%d", &i);
        system("cls");
        switch (i)
        {
        case 1:
            //norte
            printf("\nNorte");
            printf("\nOnde se encontra a maior floresta tropical do mundo: a Floresta Amazonica");
            printf("\nTambem a maior bacia hidrografica: a bacia do Rio Amazonas");
            printf("\n\n O Clima predominante eh o equatiorial: eh umido, regime de chuvas bem definido,");
            printf("\ne umidade do ar bem definida.");
            printf("\nSeus relevos sao Planicies, Depressoes e Planaltos");

            break;

        case 2:
            //centro-oeste
            printf("\nCentro-Oeste");
            printf("\nA regiao abrange o Planalto Central e tambem \na area dos aquiferos, como o aquifero guarani");
            printf("\nO Clima predominante eh o tropical continental, com invernos \nsecos e veroes chuvosos");
            printf("\nNessa regiao os principais biomas sao o Cerrado e Pantanal.");

            break;

        case 3:
            printf("\nNordeste");
            printf("\nBoa parte da regiao sofre com a falta de chuvas, nas regioes dos sertoes");
            printf("\nApresenta Planaltos, em destaque o Planalto da Borborema e bacia do Parnaiba, ");
            printf("e depressoes no sertao");
            printf("\nO Clima predominante eh o semiarido, mas tambem eh possivel encontrar o tropical e");
            printf("\nequatorial umido nas regioes litoraneas.");
            printf("\nCompreende os biomas de Caatinga, Mata Atlantica e um pouco de Cerrado nas regioes");
            printf("\nde transicao.");
            break;

        case 4:
            printf("\nSudeste");
            printf("\nHa predominancia de planaltos, e os climas presentes");
            printf("\nsao tropical, e tropical de altitude.");
            printf("\nAbrange os biomas da Mata Atlantica e faixas de Cerrado e Caatinga na transicao.");

            break;

        case 5:
            printf("\nSul ");
            printf("\nSeus Climas sao Subtropical e Tropical de Altitude na parte norte.");
            printf("\nDevido a sua regiao abaixo das linhas tropicais, eh a regiao mais fria e");
            printf("\npossui estacoes do ano bem definidas.");
            printf("\nOs invernos apresentam baixas temperaturas.");
            printf("\nA chuva eh bem distribuida durante todo o ano.");
            printf("\nJa na vegetacao, as matas de Araucarias, os Pampas Gauchos e Matas Subtropicais,");

            break;
        case 6:

            break;
        }
    }
    printf("\n");

    printf("\n\nVoltar ao menu principal...\n");
    system("pause");
}

void exercicio()
{
    int resposta[5], acertos;
    acertos = 0;
    //printf("\n ");
    printf("\nExercicios");
    printf("\n5 Questoes!! ");
    system("pause");

    printf("\nI. Qual capital brasileira se destaca como uma das maiores do mundo? \nE em qual regiao ela fica?");
    printf("\n1. Arapiraca - Nordeste\n2. Brasilia - Sudeste\n3. Sao Paulo - Sudeste\n4. Taubate - Sudeste\n5. Manaus - Norte");
    scanf("%d", &resposta[0]);
    if (resposta[0] == 3)
    {
        printf("\nVoce acertou! +1 ponto.");
        acertos = acertos + 1;
    }
    system("pause");
    system("cls");

    printf("\nII. Qual regiao brasileira possui clima Equatorial?");
    printf("\n1. Norte\n2. Nordeste\n3. Centro-Oeste\n4. Sudeste\n5. Sul");
    scanf("%d", &resposta[1]);
    if (resposta[1] == 1)
    {
        printf("\nVoce acertou! +1 ponto.");
        acertos = acertos + 1;
    }
    system("pause");
    system("cls");

    printf("\nIII. A floresta Amazonica esta presente em qual Regiao e Clima?");
    printf("\n1. Amazonica - Tropical \n2. Norte - Subtropical \n3. Nordeste - Equatorial\n4. Norte - Tropical \n5. Norte - Equatorial");
    scanf("%d", &resposta[2]);
    if (resposta[2] == 5)
    {
        printf("\nVoce acertou! +1 ponto.");
        acertos = acertos + 1;
    }
    system("pause");
    system("cls");

    printf("\nIV. Classifique a descricao que mais aprepresenta caracteristicas da regiao Nordeste: ");
    printf("\n1. Presenca de matas, regioes semiaridas, estacoes do ano bem definidas e continentalidade.");
    printf("\n2. Clima tropical, presenca de matas, semiaridos e depressoes. ");
    printf("\n3. Desertos, matas, climas quentes e planicies. ");
    printf("\n4. Clima Equatorial Continental, matas, alta pluviosidade durante todo o ano ");
    printf("\n5. Baixa pluviosidade, continentaliade e altas temperaturas. ");
    scanf("%d", &resposta[3]);
    if (resposta[3] == 2)
    {
        printf("\nVoce acertou! +1 ponto.");
        acertos = acertos + 1;
    }
    system("pause");
    system("cls");

    printf("\nV. 'Invernos secos e veroes chuvosos' caracteriza qual Clima, de qual Regiao? ");
    printf("\n1. Tropical umido - Nordeste ");
    printf("\n2. Equatorial continental - Norte ");
    printf("\n3. Sutropical - Sul ");
    printf("\n4. Tropical continental - Centro-Oeste");
    printf("\n5. Semiarido - Nordeste ");
    scanf("%d", &resposta[4]);
    if (resposta[4] == 4)
    {
        printf("\nVoce acertou! +1 ponto.");
        acertos = acertos + 1;
    }
    system("pause");
    system("cls");

    if (acertos <= 2)
    {
        printf("\n\nVoce acertou %d de 5... Que tal estudar mais e tentar novamente?\n", acertos);
    }
    if (acertos == 3)
    {
        printf("\n\nVoce acertou %d de 5, mais da metade! Mas por que nao treina mais ainda?\n", acertos);
    }
    if (acertos == 4)
    {
        printf("\n\nVoce acertou %d de 5, mais da metade! Mas por que nao treina mais ainda?\n", acertos);
    }
    if (acertos == 5)
    {
        printf("\n\nParabens, voce acertou todas as %d questoes!! \n\n", acertos);
    }
    printf("\n\n");
    system("pause");
    system("pause");
    system("cls");
}