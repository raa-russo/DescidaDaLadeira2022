#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void menu(){
    printf("************** FAST SYSTEM **************\n\n");
    printf("MENU PRINCIPAL - DIGITE A OPÇÃO DESEJADA: \n\n");
    printf("1. Bateria 1\n");
    printf("2. Bateria 2\n");
    printf("3. Bateria 3\n");
    printf("4. Obter classificação geral na tela\n");
    printf("5. Exportar classificação geral\n");
    printf("6. Sair do sistema\n\n");
    }
void submenuBateria01(int showBat01[5][4]){
    printf("********************* BATERIA 1 *********************\n\n");
    printf("DIGITE O TEMPO DA BATERIA 1 DE CADA UMA DAS EQUIPES: \n\n");
    printf("1. Tempo da equipe 1 na bateria 1: %02d:%02d:%02d\n", showBat01[0][0], showBat01[0][1], showBat01[0][2]);
    printf("2. Tempo da equipe 2 na bateria 1: %02d:%02d:%02d\n", showBat01[1][0], showBat01[1][1], showBat01[1][2]);
    printf("3. Tempo da equipe 3 na bateria 1: %02d:%02d:%02d\n", showBat01[2][0], showBat01[2][1], showBat01[2][2]);
    printf("4. Tempo da equipe 4 na bateria 1: %02d:%02d:%02d\n", showBat01[3][0], showBat01[3][1], showBat01[3][2]);
    printf("5. Tempo da equipe 5 na bateria 1: %02d:%02d:%02d\n", showBat01[4][0], showBat01[4][1], showBat01[4][2]);
    printf("6. Voltar ao menu principal \n\n");
}

void submenuBateria02(int showBat02[5][4]){
    printf("********************* BATERIA 2 *********************\n\n");
    printf("DIGITE O TEMPO DA BATERIA 2 DE CADA UMA DAS EQUIPES: \n\n");
    printf("1. Tempo da equipe 1 na bateria 2: %02d:%02d:%02d\n", showBat02[0][0], showBat02[0][1], showBat02[0][2]);
    printf("2. Tempo da equipe 2 na bateria 2: %02d:%02d:%02d\n", showBat02[1][0], showBat02[1][1], showBat02[1][2]);
    printf("3. Tempo da equipe 3 na bateria 2: %02d:%02d:%02d\n", showBat02[2][0], showBat02[2][1], showBat02[2][2]);
    printf("4. Tempo da equipe 4 na bateria 2: %02d:%02d:%02d\n", showBat02[3][0], showBat02[3][1], showBat02[3][2]);
    printf("5. Tempo da equipe 5 na bateria 2: %02d:%02d:%02d\n", showBat02[4][0], showBat02[4][1], showBat02[4][2]);
    printf("6. Voltar ao menu principal \n\n");
}
void submenuBateria03(int showBat03[5][4]){
    printf("********************* BATERIA 3 *********************\n\n");
    printf("DIGITE O TEMPO DA BATERIA 3 DE CADA UMA DAS EQUIPES: \n\n");
    printf("1. Tempo da equipe 1 na bateria 3: %02d:%02d:%02d\n", showBat03[0][0], showBat03[0][1], showBat03[0][2]);
    printf("2. Tempo da equipe 2 na bateria 3: %02d:%02d:%02d\n", showBat03[1][0], showBat03[1][1], showBat03[1][2]);
    printf("3. Tempo da equipe 3 na bateria 3: %02d:%02d:%02d\n", showBat03[2][0], showBat03[2][1], showBat03[2][2]);
    printf("4. Tempo da equipe 4 na bateria 3: %02d:%02d:%02d\n", showBat03[3][0], showBat03[3][1], showBat03[3][2]);
    printf("5. Tempo da equipe 5 na bateria 3: %02d:%02d:%02d\n", showBat03[4][0], showBat03[4][1], showBat03[4][2]);
    printf("6. Voltar ao menu principal \n\n");
}

void cadastroBat01(int cadBat01[5][4], int numEquipe){
    system("cls");
    printf("********************************* BATERIA 1 *********************************\n\n");
    printf("Digite o tempo da equipe %d na seguinte forma: (minutos:segundos:milisegundos) \n", numEquipe);
    int i ,j;
    int posicao = 0;
    posicao = numEquipe - 1;
    int valor;
    for (i = posicao; i < 5; i++) {
        for(j = 0; j < 3; j++){
            scanf("%d", &valor);
            cadBat01[posicao][j] = valor;
        }
        break;
    }
    cadBat01[posicao][3] = ((cadBat01[posicao][0] * 60000) + (cadBat01[posicao][1] * 1000) + cadBat01[posicao][2]);
    printf("\nTempo %02d:%02d:%02d cadastrado com sucesso!\n\n", cadBat01[posicao][0], cadBat01[posicao][1], cadBat01[posicao][2]);
    system("pause");
    system("cls");
}

void cadastroBat02(int cadBat02[5][4], int numEquipeBat02){
    system("cls");
    printf("********************************* BATERIA 2 *********************************\n\n");
    printf("Digite o tempo da equipe %d na seguinte forma: (minutos:segundos:milisegundos) \n", numEquipeBat02);

    int i ,j;
    int posicao = 0;
    posicao = numEquipeBat02 - 1;
    int valor;
    for (i = posicao; i < 5; i++) {
        for(j = 0; j < 3; j++){
            scanf("%d", &valor);
            cadBat02[posicao][j] = valor;
        }
        break;
    }
    cadBat02[posicao][3] = ((cadBat02[posicao][0] * 60000) + (cadBat02[posicao][1] * 1000) + cadBat02[posicao][2]);
    printf("\nTempo %02d:%02d:%02d cadastrado com sucesso!\n\n", cadBat02[posicao][0], cadBat02[posicao][1], cadBat02[posicao][2]);
    system("pause");
    system("cls");
}

void cadastroBat03(int cadBat03[5][4], int numEquipeBat03){
    system("cls");
    printf("********************************* BATERIA 3 *********************************\n\n");
    printf("Digite o tempo da equipe %d na seguinte forma: (minutos:segundos:milisegundos) \n", numEquipeBat03);

    int i ,j;
    int posicao = 0;
    posicao = numEquipeBat03 - 1;
    int valor;
    for (i = posicao; i < 5; i++) {
        for(j = 0; j < 3; j++){
            scanf("%d", &valor);
            cadBat03[posicao][j] = valor;
        }
        break;
    }
    cadBat03[posicao][3] = ((cadBat03[posicao][0] * 60000) + (cadBat03[posicao][1] * 1000) + cadBat03[posicao][2]);
    printf("\nTempo %02d:%02d:%02d cadastrado com sucesso!\n\n", cadBat03[posicao][0], cadBat03[posicao][1], cadBat03[posicao][2]);
    system("pause");
    system("cls");
}

void zerarValor(int zerarBat[5][4]){
    int a,b;
    for(a = 0; a < 5; a++){
        for(b = 0; b < 4; b++){
            zerarBat[a][b] = 0;
        }
    }
}

void menoresTempos(int tempoBat1[5][4],int tempoBat2[5][4],int tempoBat3[5][4], int rFinal[5][2]){
    int equipe;
    for (equipe=0; equipe<5; equipe++){
        int menor1 = 0, menor2 = 0;
        menor1 = tempoBat1[equipe][3];
        if (tempoBat2[equipe][3] < menor1){
            menor2 = menor1;
            menor1 = tempoBat2[equipe][3];
        }else{
            menor2 = tempoBat2[equipe][3];
        }
        if (tempoBat3[equipe][3] < menor1){
            menor2 = menor1;
            menor1 = tempoBat3[equipe][3];
        }else if(tempoBat3[equipe][3] < menor2){
            menor2 = tempoBat3[equipe][3];
        }
        rFinal[equipe][0] = menor1;
        rFinal[equipe][1] = menor2;
    }
}

void mediaMelhoresTempos(int melhoresTempos_f[5][2], int resultMedia[5]){
    int t;
    for(t = 0; t < 5; t++){
        resultMedia[t] = (melhoresTempos_f[t][0] + melhoresTempos_f[t][1]) / 2;
    }
}

void converterTempo(int media[5], int tempo_final[5][3]){
    int a;
    for (a = 0; a < 5; a++) {
        tempo_final[a][0] = (media[a]/60000);
        tempo_final[a][1] = (media[a]%60000)/1000;
        tempo_final[a][2] = ((media[a]%60000)%1000);
        if(tempo_final[a][2] >= 100){
        tempo_final[a][2] = tempo_final[a][2] / 10;
        }
    }
}

void ordenar(int m_Final[5], int m_FinalOr[5]){
    m_FinalOr[0] = m_Final[0]; m_FinalOr[1] = m_Final[1]; m_FinalOr[2] = m_Final[2]; m_FinalOr[3] = m_Final[3]; m_FinalOr[4] = m_Final[4];
    int aux, x, y, i;
    for(x=0;x<4;x++)
    {
        for(y=x+1; y<=4; y++)
        {
            if(m_FinalOr[y]<m_FinalOr[x])
            {
                aux=m_FinalOr[y];
                m_FinalOr[y]=m_FinalOr[x];
                m_FinalOr[x]=aux;
            }
        }
    }
}

void exibirClassificacao(int mediaDes[5], int mediaOrd[5], int tFinal[5][3]){
    int x, i;
    printf("******************* CLASSIFICAÇÃO GERAL POR EQUIPES *******************\n");
    for (i=0; i<=4;i++){
        printf("\n\n %d° Lugar", i+1);
        for (x=0; x<=4;x++){
            if(mediaOrd[i] == mediaDes[x]){
                printf(" - EQUIPE %d - Tempo (minutos:segundos:mili-segundos): %02d:%02d:%02d", x+1,tFinal[x][0],tFinal[x][1],tFinal[x][2]);
                break;
            }
        }
    }
}

void gerarArq(int f_mediaDes[5], int f_mediaOrd[5], int f_tFinal[5][3]){
    int x, i;
    FILE *arq;
    arq = fopen("Resultados.txt", "w");
    fprintf(arq, "******************* CLASSIFICAÇÃO GERAL POR EQUIPES *******************\n");
    for (i=0; i<=4;i++){
        fprintf(arq, "\n\n %d° Lugar", i+1);
        for (x=0; x<=4;x++){
            if(f_mediaOrd[i] == f_mediaDes[x]){
                fprintf(arq, " - EQUIPE %d - Tempo (minutos:segundos:mili-segundos): %02d:%02d:%02d", x+1,f_tFinal[x][0],f_tFinal[x][1],f_tFinal[x][2]);
                break;
            }
        }
    }
    fclose(arq);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int bat01[5][4];
    int bat02[5][4];
    int bat03[5][4];
    int melhoresTempos[5][2];
    int mediaFinal[5];
    int mediaFinalOrdenada[5];
    int tempoFinal[5][3];
    int opcaoPrincipal = 0;
    int subopcaoCase01 = 0;
    int subopcaoCase02 = 0;
    int subopcaoCase03 = 0;
    int subopcaoCase04 = 0;
    printf("\n\n\n\n");
    printf("\t\t       _______               __        _______               __                          \n");
    printf("\t\t      |    ___|.---.-.-----.|  |_     |     __|.--.--.-----.|  |_.-----.--------.        \n");
    printf("\t\t      |    ___||  _  |__ --||   _|    |__     ||  |  |__ --||   _|  -__|        |        \n");
    printf("\t\t      |___|    |___._|_____||____|    |_______||___  |_____||____|_____|__|__|__|        \n");
    printf("\t\t                                               |_____|                                   \n");
    Sleep(500);
    system("cls");
    zerarValor(bat01);
    zerarValor(bat02);
    zerarValor(bat03);
    zerarValor(mediaFinalOrdenada);
    menu();
    while(opcaoPrincipal < 1 || opcaoPrincipal > 6)
    {
        scanf("%d", &opcaoPrincipal);
        switch (opcaoPrincipal)
        {
            case 1:
                system("cls");
                subopcaoCase01 = 0;
                while(subopcaoCase01 < 1 || subopcaoCase01 > 6)
                    {
                        system("cls");
                        submenuBateria01(bat01);
                        scanf("%d", &subopcaoCase01);

                        switch (subopcaoCase01)
                        {
                            case 1:
                                cadastroBat01(bat01, subopcaoCase01);
                                subopcaoCase01 = 0;
                                break;

                            case 2:
                                cadastroBat01(bat01, subopcaoCase01);
                                subopcaoCase01 = 0;
                                break;

                            case 3:
                                cadastroBat01(bat01, subopcaoCase01);
                                subopcaoCase01 = 0;
                                break;

                            case 4:
                                cadastroBat01(bat01, subopcaoCase01);
                                subopcaoCase01 = 0;
                                break;

                            case 5:
                                cadastroBat01(bat01, subopcaoCase01);
                                subopcaoCase01 = 0;
                                break;

                            case 6:
                                system("cls");
                                break;

                            default:
                                system("cls");
                                submenuBateria01(bat01);
                                printf("\n Opção inválida - Digite novamente\n\n");
                                break;
                        }
                    }
                opcaoPrincipal = 0;
                menu();
                break;

            case 2:
                system("cls");
                subopcaoCase02 = 0;
                while(subopcaoCase02 < 1 || subopcaoCase02 > 6)
                    {
                        system("cls");
                        submenuBateria02(bat02);
                        scanf("%d", &subopcaoCase02);

                        switch (subopcaoCase02)
                        {
                            case 1:
                                cadastroBat02(bat02, subopcaoCase02);
                                subopcaoCase02 = 0;
                                break;

                            case 2:
                                cadastroBat02(bat02, subopcaoCase02);
                                subopcaoCase02 = 0;
                                break;

                            case 3:
                                cadastroBat02(bat02, subopcaoCase02);
                                subopcaoCase02 = 0;
                                break;

                            case 4:
                                cadastroBat02(bat02, subopcaoCase02);
                                subopcaoCase02 = 0;
                                break;

                            case 5:
                                cadastroBat02(bat02, subopcaoCase02);
                                subopcaoCase02 = 0;
                                break;

                            case 6:
                                system("cls");
                                break;

                            default:
                                system("cls");
                                submenuBateria02(bat02);
                                printf("\n Opção inválida - Digite novamente\n\n");
                                break;
                        }
                    }
                system("cls");
                opcaoPrincipal = 0;
                menu();
                break;

            case 3:
                system("cls");
                subopcaoCase03 = 0;
                while(subopcaoCase03 < 1 || subopcaoCase03 > 6)
                    {
                        system("cls");
                        submenuBateria03(bat03);
                        scanf("%d", &subopcaoCase03);

                        switch (subopcaoCase03)
                        {
                            case 1:
                                cadastroBat03(bat03, subopcaoCase03);
                                subopcaoCase03 = 0;
                                break;

                            case 2:
                                cadastroBat03(bat03, subopcaoCase03);
                                subopcaoCase03 = 0;
                                break;

                            case 3:
                                cadastroBat03(bat03, subopcaoCase03);
                                subopcaoCase03 = 0;
                                break;

                            case 4:
                                cadastroBat03(bat03, subopcaoCase03);
                                subopcaoCase03 = 0;
                                break;

                            case 5:
                                cadastroBat03(bat03, subopcaoCase03);
                                subopcaoCase03 = 0;
                                break;

                            case 6:
                                system("cls");
                                break;

                            default:
                                system("cls");
                                submenuBateria03(bat03);
                                printf("\n Opção inválida - Digite novamente\n\n");
                                break;
                        }
                    }
                system("cls");
                opcaoPrincipal = 0;
                menu();
                break;

            case 4:
                system("cls");
                subopcaoCase04 = 0;
                while(subopcaoCase04 != 1){
                    menoresTempos(bat01, bat02, bat03, melhoresTempos);
                    mediaMelhoresTempos(melhoresTempos, mediaFinal);
                    converterTempo(mediaFinal, tempoFinal);
                    ordenar(mediaFinal, mediaFinalOrdenada);
                    exibirClassificacao(mediaFinal, mediaFinalOrdenada, tempoFinal);

                    printf("\n\n\n Digite 1 para voltar ao menu principal ");
                    scanf("%d", &subopcaoCase04);
                    if(subopcaoCase04 != 1){
                        system("cls");
                    }
                }
                system("cls");
                opcaoPrincipal = 0;
                menu();
                break;

            case 5:
                system("cls");
                printf("5. Exportar classificação geral \n\n");
                printf("  Gerando arquivo...");
                Sleep(2000);
                menoresTempos(bat01, bat02, bat03, melhoresTempos);
                mediaMelhoresTempos(melhoresTempos, mediaFinal);
                converterTempo(mediaFinal, tempoFinal);
                ordenar(mediaFinal, mediaFinalOrdenada);
                gerarArq(mediaFinal, mediaFinalOrdenada, tempoFinal);
                system("cls");
                printf("5. Exportar classificação geral \n");
                printf("\n Exporção concluída com sucesso!\n\n");
                system("pause");
                system("cls");
                opcaoPrincipal = 0;
                menu();
                break;

            case 6:
                system("cls");
                printf("Finalizando sistema...\n");
                system("break");
                break;

            default:
                system("cls");
                menu();
                printf("\n Opção inválida - Digite novamente\n\n");
                break;
        }
    }
    return 0;
}
