#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>
#include <ctype.h>


//******************************************************************************//
            //Fonctions d'affichage et de l'interface homme-machine//

//une fonction qui permet de changer la couleur du texte
void Textecolor(int ForgC)
{
  WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

  // On utilise  csbi pour "wAttributes word".
  if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
  {
    wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
    SetConsoleTextAttribute(hStdOut, wColor);
  }
  return;
}
/*************************************************/
// manipuler les cordonnés de la console gotoxy :
void gotoxy(int x, int y)
{
  COORD c;
  c.X = x;
  c.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
//------------------------------------------------------------
void tp_01() {
    system("cls");
    Textecolor(3);
    printf("            ,----,                 \n"); Sleep(200);
    printf("          ,/   .`|   ,-.----.      \n"); Sleep(200);
    printf("        ,`   .'  :   \\    /  \\     \n"); Sleep(200);
    printf("      ;    ;     /   |   :    \\    \n"); Sleep(200);
    printf("    .'___,/    ,'    |   |  .\\ :   \n"); Sleep(200);
    printf("    |    :     |     .   :  |: |   \n"); Sleep(200);
    printf("    ;    |.';  ;     |   |   \\ :   \n"); Sleep(200);
    printf("    `----'  |  |     |   : .   /   \n"); Sleep(200);
    printf("        '   :  ;     ;   | |`-'    \n"); Sleep(200);
    printf("        |   |  '     |   | ;       \n"); Sleep(200);
    printf("        '   :  |     :   ' |       \n"); Sleep(200);
    printf("        ;   |.'      :   : :       \n"); Sleep(200);
    printf("        '---'        |   | :       \n"); Sleep(200);
    printf("                     `---'.|       \n"); Sleep(200);
    printf("                       `---`       \n"); Sleep(200);
    printf("                                  \n"); Sleep(200);
    Textecolor(0);
    printf("                                  \n"); Sleep(200);
    printf("            ,----..         ,---, \n"); Sleep(200);
    printf("           /   /   \\     ,`--.' | \n"); Sleep(200);
    printf("          /   .     :   /    /  : \n"); Sleep(200);
    printf("         .   /   ;.  \\ :    |.' ' \n"); Sleep(200);
    printf("        .   ;   /  ` ; `----':  | \n"); Sleep(200);
    printf("        ;   |  ; \\ ; |    '   ' ; \n"); Sleep(200);
    printf("        |   :  | ; | '    |   | | \n"); Sleep(200);
    printf("        .   |  ' ' ' :    '   : ; \n"); Sleep(200);
    printf("        '   ;  \\; /  |    |   | ' \n"); Sleep(200);
    printf("         \\   \\  ',  /     '   : | \n"); Sleep(200);
    printf("          ;   :    /      ;   |.' \n"); Sleep(200);
    printf("           \\   \\ .'       '---'   \n"); Sleep(200);
    printf("            `---`                 \n"); Sleep(200);
    printf("                                  \n"); Sleep(200);
    Textecolor(3);
  printf("                     ,--,                                                   \n");
  Sleep(200);
  printf("                  ,---.'|                                                   \n");
  Sleep(200);
  printf("   ,---,          |   | :        .--.--.          ,---,           ,---,      \n");
  Sleep(200);
  printf("  '  .' \\         :   : |       /  /    '.      .'  .' `\\       .'  .' `\\    \n");
  Sleep(200);
  printf(" /  ;    '.       |   ' :      |  :  /`. /    ,---.'     \\    ,---.'     \\   \n");
  Sleep(200);
  printf(":  :       \\      ;   ; '      ;  |  |--`     |   |  .`\\  |   |   |  .`\\  |  \n");
  Sleep(200);
  printf(":  |   /\\   \\     '   | |__    |  :  ;_       :   : |  '  |   :   : |  '  |  \n");
  Sleep(200);
  printf("|  :  ' ;.   :    |   | :.'|    \\  \\    `.    |   ' '  ;  :   |   ' '  ;  :  \n");
  Sleep(200);
  printf("|  |  ;/  \\   \\   '   :    ;     `----.   \\   '   | ;  .  |   '   | ;  .  | \n");
  Sleep(200);
  printf("'  :  | \\  \\ ,'   |   |  ./      __ \\  \\  |   |   | :  |  '   |   | :  |  ' \n");
  Sleep(200);
  printf("|  |  '  '--'     ;   : ;       /  /`--'  /   '   : | /  ;    '   : | /  ;  \n");
  Sleep(200);
  printf("|  :  :           |   ,/       '--'.     /    |   | '` ,/     |   | '` ,/   \n");
  Sleep(200);
  printf("|  | ,'           '---'          `--'---'     ;   :  .'       ;   :  .'     \n");
  Sleep(200);
  printf("`--''                                         |   ,.'         |   ,.'       \n");
  Sleep(200);
  printf("                                              '---'           '---'         \n");
}
//------------------------------------------------------------------
void esi() {
  int k;
  for (k = 0; k < 20; k++)
  {
    if (k % 2 == 0)
      Textecolor(0);
    if (k % 2 == 1)
      Textecolor(3);
    printf("        ................                 ................          ..............         \n");
    printf("    `]vB$$$$$$$$$$$$$$$$@*1;.        \"1*@$$$$$$$$$$$$$$$$Bc[`     \"______________<.       \n");
    printf("   \\$$$$$$$$$$$$$$$$$$$$$$$$B;     \"%%$$$$$$$$$$$$$$$$$$$$$$$$f.   ,+______________.       \n");
    printf("  -$$$$$$$$$$$$xtW$$$$$$$$$$$@`   .B$$$$$$$$$$$Bjf%%$$$$$$$$$$$}   ,+______________.       \n");
    printf("  *$$$$$$$$$$$j  `$$$$$$$$$$$$>   \"$$$$$$$$$$$$l  <$$$$$$$$$$$B   \"+______________.       \n");
    printf("  &$$$$$$$$$$$f  `$$$$$$$$$$$$<   ,$$$$$$$$$$$$;  >$$$$$$$$$$$$   \"_______________.       \n");
    printf("  &$$$$$$$$$$$f  '$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  i$$$$$$$$$$$$   ^_________++~>I^        \n");
    printf("  W$$$$$$$$$$$t  '$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  i$$$$$$$$$$$$    ''''......''''``'.     \n");
    printf("  W$$$$$$$$$$$f  '$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  i$$$$$$$$$$$$     `,>+____________~!\"'  \n");
    printf("  W$$$$$$$$$$$f  '$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  i$$$$$$$$$$$$        '^\"\"^``'..         \n");
    printf("  W$$$$$$$$$$$f  '$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  >$$$$$$$$$$$$    '````````````          \n");
    printf("  W$$$$$$$$$$$f  '$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  >$$$$$$$$$$$$    |$$$$$$$$$$$z          \n");
    printf("  W$$$$$$$$$$$f  '$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  >$$$$$$$$$$$$    |$$$$$$$$$$$z          \n");
    printf("  W$$$$$$$$$$$f  '$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  >$$$$$$$$$$$$.   |$$$$$$$$$$$z          \n");
    printf("  W$$$$$$$$$$$j  `$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  >$$$$$$$$$$$$.   |$$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$j  `$$$$$$$$$$$$>   ,$$$$$$$$$$$$;  '\"\"\"\"\"\"\"\"\"\"\"\"    |$$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$z'.I$$$$$$$$$$$$<   ,$$$$$$$$$$$${...............    |$$$$$$$$$$$c          \n");
    printf(" &$$$$$$$$$$$$$$$$$$$$$$$$$$$<   :$$$$$$$$$$$$$$$$$$$$$$$$$$$$    |$$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$$$$$$$$$$$$$$$$$<   :$$$$$$$$$$$$$$$$$$$$$$$$$$$$    |$$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$$$$$$$$$$$$$$$$$<   :$$$$$$$$$$$$$$$$$$$$$$$$$$$$    |$$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$W;::::::::::::::'   .\"\"\"\"\"\"\"\"\"\"\"\"\"\"j$$$$$$$$$$$$    |$$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$j   ............     ............   <$$$$$$$$$$$$    ($$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$j  `$$$$$$$$$$$$<   :$$$$$$$$$$$$;  >$$$$$$$$$$$$    ($$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$j  `$$$$$$$$$$$$<   :$$$$$$$$$$$$I  >$$$$$$$$$$$$    ($$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$j  `$$$$$$$$$$$$<   :$$$$$$$$$$$$;  >$$$$$$$$$$$$    ($$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$f  `$$$$$$$$$$$$<   :$$$$$$$$$$$$;  >$$$$$$$$$$$$    ($$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$j  `$$$$$$$$$$$$<   :$$$$$$$$$$$$;  >$$$$$$$$$$$$    ($$$$$$$$$$$c          \n");
    printf("  &$$$$$$$$$$$j  `$$$$$$$$$$$$<   :$$$$$$$$$$$$;  >$$$$$$$$$$$$    ($$$$$$$$$$$c          \n");
    printf("  W$$$$$$$$$$$j  `$$$$$$$$$$$$<   ,$$$$$$$$$$$$;  <$$$$$$$$$$$$    ($$$$$$$$$$$c          \n");
    printf("  r$$$$$$$$$$$u. ,$$$$$$$$$$$$:   `$$$$$$$$$$$$-  ]$$$$$$$$$$$n    |$$$$$$$$$$$c          \n");
    printf("  `B$$$$$$$$$$$@B$$$$$$$$$$$$r     \\$$$$$$$$$$$$@@$$$$$$$$$$$%%`    |$$$$$$$$$$$z          \n");
    printf("   'n$$$$$$$$$$$$$$$$$$$$$$B[.      iM$$$$$$$$$$$$$$$$$$$$$$v`     |$$$$$$$$$$$z          \n");
    printf("     ':_)\\fffffffffffff|]I^           `I?(tfffffffffffft(-;`       <fffffffffff{         \n");
    Sleep(200);
    system("cls");
  }

}
//---------------------------------------------------------------------
void simulation() {
#include <stdio.h>

  int k;
   for (k = 0; k < 20; k++)
  {
    if (k % 2 == 0)
      Textecolor(0);
    if (k % 2 == 1)
      Textecolor(3);
    printf("  _____  _____  __  __  _    _  _       ______  _____  \n");
    printf(" / ____||_   _||  \\/  || |  | || |     |  ____||  __ \\ \n");
    printf("| (___    | |  | \\  / || |  | || |     | |__   | |__) |\n");
    printf(" \\___ \\   | |  | |\\/| || |  | || |     |  __|  |  _  / \n");
    printf(" ____) | _| |_ | |  | || |__| || |____ | |____ | | \\ \\ \n");
    printf("|_____/ |_____||_|  |_| \\____/ |______||______||_|  \\_\\\n");
    printf("                                                       \n");
    printf("                                                       \n");
    printf(" ______  _____  _       ______                         \n");
    printf("|  ____||_   _|| |     |  ____|                        \n");
    printf("| |__     | |  | |     | |__                           \n");
    printf("|  __|    | |  | |     |  __|                          \n");
    printf("| |      _| |_ | |____ | |____                         \n");
    printf("|_|     |_____||______||______|                        \n");
    printf("                                                       \n");
    printf("                                                       \n");
    printf(" _____   _            _______  _______  ______  _   _  _______  ______ \n");
    printf("|  __ \\ ( )    /\\    |__   __||__   __||  ____|| \\ | ||__   __||  ____|\n");
    printf("| |  | ||/    /  \\      | |      | |   | |__   |  \\| |   | |   | |__   \n");
    printf("| |  | |     / /\\ \\     | |      | |   |  __|  | . ` |   | |   |  __|  \n");
    printf("| |__| |    / ____ \\    | |      | |   | |____ | |\\  |   | |   | |____ \n");
    printf("|_____/    /_/    \\_\\   |_|      |_|   |______||_| \\_|   |_|   |______|\n");
       Sleep(200);
    system("cls");
}
//----------------------------------------------------------------------------------------------------------
}
void tp_memb (){
  system("cls");
  Textecolor(4);
printf("\t\t\t          R%cpublique Alg%crienne D%cmocratique et Populaire           \n", 130, 130, 130);
  printf("\t\t\tMinist%cre de l'Enseignement Sup%crieur et de la Recherche Scientifique\n", 130, 130);
   printf("\t\t\t\t 1 CP - Ann%ce Universitaire 2022/2023 \n", 138, 130, 130);
   printf("\t\t\t\tECOLE NATIONALE SUPERIEURE D'INFORMATIQUE ESI ALGER\n ");
   Textecolor(3);
    printf("\t\t\t  .----------------.  .----------------.  .----------------.\n");
    printf("\t\t\t | .--------------. || .--------------. || .--------------. |\n");
    printf("\t\t\t | |  _________   | || |    _______   | || |     _____    | |\n");
    printf("\t\t\t | | |_   ___  |  | || |   /  ___  |  | || |    |_   _|   | |\n");
    printf("\t\t\t | |   | |_  \\_|  | || |  |  (__ \\_|  | || |      | |     | |\n");
    printf("\t\t\t | |   |  _|  _   | || |   '.___`-.   | || |      | |     | |\n");
    printf("\t\t\t | |  _| |___/ |  | || |  |`\\____) |  | || |     _| |_    | |\n");
    printf("\t\t\t | | |_________|  | || |  |_______.'  | || |    |_____|   | |\n");
    printf("\t\t\t | |              | || |              | || |              | |\n");
    printf("\t\t\t | '--------------' || '--------------' || '--------------' |\n");
    printf("\t\t\t  '----------------'  '----------------'  '----------------'\n");



  Textecolor(3);
  Textecolor(4);
  printf("\t\t\t ___________________________________________________________________\n");
  printf("\t\t\t|                                                                   |\n");
  printf("\t\t\t|           \tTP1 : SIMULER LES FILES D'ATTENTES                  |\n");
  printf("\t\t\t|          REALIS%c PAR : OUCHERIF MOHAMMED OUAIL                    |\n",144);
  printf("\t\t\t|                              &                                    |\n");
  printf("\t\t\t|                        ADJAB REDA                                 |\n");
  printf("\t\t\t|                                                                   |\n");
  printf("\t\t\t|                                                                   |\n");
  printf("\t\t\t|         \tSECTION : A           GROUPE: 01                    |\n");
  printf("\t\t\t|                                                                   |\n");
  printf("\t\t\t|                                                                   |\n");
  printf("\t\t\t| ENCADR%c PAR :Mr. Boudi ABDERAHMANE                                |\n",144);
  printf("\t\t\t|___________________________________________________________________|\n\n\n");
  printf("\n\n");
  printf("\t\t\tAPPUYEZ SUR N'IMPORTE QUELLE TOUCHE POUR CONTINUER :");
  getchar();
  system("cls");
}

//---------------------------------------------------------------------

void fin_programme() {
  Textecolor(2);
  system("cls");
    printf("####### ### #     #       ######  #     #    \n");
    Sleep(200);
    printf("#        #  ##    #       #     # #     #    \n");
    Sleep(200);
    printf("#        #  # #   #       #     # #     #    \n");
    Sleep(200);
    printf("#####    #  #  #  #       #     # #     #    \n");
    Sleep(200);
    printf("#        #  #   # #       #     # #     #    \n");
    Sleep(200);
    printf("#        #  #    ##       #     # #     #    \n");
    Sleep(200);
    printf("#       ### #     #       ######   #####     \n");
    Sleep(200);
    printf("                                             \n");
    Sleep(200);
    printf("######  ######  #######  #####  ######     #    #     # #     # ####### \n");
    Sleep(200);
    printf("#     # #     # #     # #     # #     #   # #   ##   ## ##   ## #       \n");
    Sleep(200);
    printf("#     # #     # #     # #       #     #  #   #  # # # # # # # # #       \n");
    Sleep(200);
    printf("######  ######  #     # #  #### ######  #     # #  #  # #  #  # #####   \n");
    Sleep(200);
    printf("#       #   #   #     # #     # #   #   ####### #     # #     # #       \n");
    Sleep(200);
    printf("#       #    #  #     # #     # #    #  #     # #     # #     # #       \n");
    Sleep(200);
    printf("#       #     # #######  #####  #     # #     # #     # #     # ####### \n");
    Sleep(100);

}
//-----------------------------------------------------------------------------------------------------

void merci() {
    system("cls");
    Textecolor(2);
    Sleep(100);
    printf("                                                                 \n");
    Sleep(100);
    printf(" #   #  ####   ###     ##    ###           ###     ##    #  #   ###   \n");
    Sleep(100);
    printf(" ## ##  #      #  #   #  #    #            #  #   #  #   #  #   #  #  \n");
    Sleep(100);
    printf(" # # #  ###    #  #   #       #            #  #   #  #   #  #   #  #  \n");
    Sleep(100);
    printf(" # # #  #      ###    #       #            ###    #  #   #  #   ###   \n");
    Sleep(100);
    printf(" #   #  #      #  #   #  #    #            #      #  #   #  #   #  #  \n");
    Sleep(100);
    printf(" #   #  ####   #  #    ##    ###           #       ##     ##    #  #  \n");
    Sleep(100);
    printf("                                                                 \n");
    Sleep(100);
    printf("                                                                 \n");
    Sleep(100);
    printf(" #  #    ##    #####  ###    ####          #####  ####   #   #  ###     ##   \n");
    Sleep(100);
    printf(" #  #   #  #     #    #  #   #               #    #      ## ##  #  #   #  #  \n");
    Sleep(100);
    printf(" #  #   #  #     #    #  #   ###             #    ###    # # #  #  #    #    \n");
    Sleep(100);
    printf(" ####   #  #     #    ###    #               #    #      # # #  ###      #   \n");
    Sleep(100);
    printf("  ##    #  #     #    #  #   #               #    #      #   #  #      #  #  \n");
    Sleep(100);
    printf("  ##     ##      #    #  #   ####            #    ####   #   #  #       ##   \n");
    Sleep(100);
    printf("                                                                 \n");
    printf("\n\n Entrez n'importe quelle touche pour quittter le programme ");
    getchar();

}

//--------------------------------------------------------------------------------------------------
void Chargement()
{
  int i;
  for (i = 0; i < 2; i++)
  {
    system("cls");
    Textecolor(3);
    gotoxy(12, 12);
    printf("\t\t\t\t\t\t  Chargement.\n\n");
    Sleep(200);
    system(";cls");
    gotoxy(12, 12);
    printf("\t\t\t\t\t\t  Chargement..\n\n");
    Sleep(200);
    system(";cls");
    gotoxy(12, 12);
    printf("\t\t\t\t\t\t  Chargement...\n\n");
    Sleep(200);
    system(";cls");
  }
}
// barre du chargement:

void Barrechargement()
{
  system("cls");
  Textecolor(3);
  gotoxy(10, 15);
  printf("\t\t\t|||                                                 10%%  ");
  Sleep(300);
  system(";cls");
  gotoxy(10, 15);
  printf("\t\t\t|||||                                               20%%  ");
  Sleep(300);
  system(";cls");
  gotoxy(10, 15);
  printf("\t\t\t||||||||||||||||                                    30%%  ");
  Sleep(300);
  system(";cls");
  gotoxy(10, 15);
  printf("\t\t\t|||||||||||||||||||||||||                           40%%  ");
  Sleep(300);
  system(";cls");
  gotoxy(10, 15);
  printf("\t\t\t|||||||||||||||||||||||||||||||                     60%%  ");
  Sleep(300);
  system(";cls");
  gotoxy(10, 15);
  printf("\t\t\t||||||||||||||||||||||||||||||||||||||||            80%%  ");
  Sleep(300);
  system(";cls");
  gotoxy(10, 15);
  printf("\t\t\t||||||||||||||||||||||||||||||||||||||||||||||||||  100%% ");
  system("cls");
}
//******************************************************************************//


//******************************************************************************//
   //Fonctions qui testent si l'utilisateur a saisi des valeurs non valides//

//------------------------------------------------------------------
bool nom_vrai(char nom []){  //verifie si le nom entree est un nom convenable i.e., il contient que des caracteres ou
// des blancs
  int i=0;
  bool conv=true;
  while(i<strlen(nom)&&conv){
    conv = (isalpha(nom[i]) || isspace(nom[i]));
    i++;
  }
  return conv;
}
//----------------------------------------------------------------
int contain_2char(char str[]) { //verifie si le nom a deux characters alphabbetic ou plus
    int count = 0;
    bool  cont = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
            if (count == 2) {
                cont = true; // true
            }
        }
    }
    return cont; // false
}
//----------------------------------------------------------------
bool nbr_vrai(char nb[]){  //verifie si l'entree est un nombre ou un chaine de characters
    int i=0;
    bool conv=true;
    while(i<strlen(nb)&&conv){
        conv=isdigit(nb[i]);
        i++;
    }
return conv;
}
//------------------------------------------------------------
//******************************************************************************//


//******************************************************************************//
          //Les structures de donnees utilisees //

#define MAX_GUICHET 500//LE NOMBRE MAXIMUM DE GUICHET EST 500 (nous avons choisi ce valeur au hasard, n'importe quelle valeur peut être affectue)
int nb_guichet = MAX_GUICHET;// va contenir le nombre de guichet qui ne depasse pas MAX_GUICHET (c'est le default)
int Ticket_glob=0; //pour la manioulation de chaine de caracteres
 /* vider le buffer d'entree */
void clear_input()
{
   int c;

   while ((c = getchar()) != '\n' && c != EOF) { }
}
//------------------------------------
 // LES IMPLEMENTATIONS ET LES VARIABLES GLOBALES :
      // LES INFORMATIONS DE CLIENT :
 typedef struct {
    char nom [30];
    int ticket;
 }maillonfile;
 //-----------------------
       // LE MAILLON GENERAL QUI REPRESENTE LE CLIENT DANS LA FILE D'ATTENTE
typedef struct maillon
{
    maillonfile client;
   struct  maillon *client_suiv; // L'ADRESSE DE CLIENT QUI VIENT JUSTE APRES LE CLIENT
    struct maillon *suiv;        // L'ADRESSE DE CLIENT QUI VIENT APRES LE CLIENT DANS LA FILE DE GUICHET
}maillon;
//--------------------------------------------------------
typedef maillon *ptr ; //definition de pointeur vers un maillon
//--------------------------------------------------------
       /* LE GUICHET : C'EST UN POINTEUR VERS UNE FILE D'ATTENTE  PRIORITAIRE . i.e.,
        LE PREMIER ELEMENT DE LA FILE D'ATTENTE DE GUICHET A  LE PLUS PETIT NUMERO DE TICKE */
typedef ptr guichet ;

//--------------------------------------------------------
         //L'IMPLEMENTATION DE L'ENSEMBLE DES GUICHETS :
typedef  guichet centre_de_guichets [MAX_GUICHET];

 //-------------------------------------------------------
         // L'IMPLEMENTATOIN DE LA FILE D'ATTEENTE GLOBLAE DES CLIENTS
         /*CETTE FILE D'ATTENTE VA CONTENIR TOUS LES CLIENTS CHAINES EN ORDRE AVEC LEQUEL CHAQUE CLIENT EST VENU */
                 /*i.e., selon le numero de ticket*/
//---------------------------------------------------------------------------
typedef struct file_globale
{
    guichet tete,queue;
}file_globale;
/*
-Tete : pointeur  vers le premier client dans toute la file d'attente i.e., le client qui a le plus petit numero de ticket dans la file globale
-Queue : pointeur vers le dernier client venu
*/
//******************************************************************************//


//******************************************************************************//
            // DEFINITION DES MODULES UTILISES ://
/***************************************************************************************************************/
                    /*  MANIPULATIONS DES MAILLONS */
                    /*         MODELE LLC          */
void allouer ( ptr *p){
    *p = malloc (sizeof (maillon));
}
//-------------------------------------//
void aff_ticket (ptr p, int val){    //affecter dnas le champ ticket de client la valeur val
     p->client.ticket = val;
}
//-------------------------------------//
void aff_adr (ptr p , ptr q){        //affecte q dans le champ suiv de maillon (l'adresse du client qui suit dans le guichet )
    p->suiv=q;
}
//----------------------------------------//
void aff_suiv_ticket (ptr p , ptr q){  //affecte q dans le champ client_suiv de maillon (l'adresse du client qui suit dans la file globale )
    p->client_suiv=q;
}
//-------------------------------------------//
int ticket (ptr p){                    //retourne le numero de ticket de client
    return p->client.ticket;
}
//-------------------------------------------//
ptr suiv_ticket (ptr p){            //retounre le pointeur vers le client qui suit dans la file d'attent gloabale
   return p->client_suiv;
}
//------------------------------------------------
char * nom (ptr p){    //retourne le nom du client represente deans le maillon
    return p->client.nom;
}
//-------------------------------------------//
ptr suivant (ptr p){   // retourne l'adresse du maillon qui suit dans le guichet
    return p->suiv;
}
//--------------------------------------------//
void liberer (ptr p){
    free(p);
}
//---------------------------------------------//
void aff_nom ( ptr p , char name[]  ) {  //affecte name dans le champ nom de client
     strcpy ( p->client.nom , name );
}
/**************************************************************************************************************8*/
                     //MANIPULATIONS DES FILES D'ATTENTE PRIORITAIRE //
                     /*              MODELE FILES                    */
bool filevide (guichet p){
    return (p==NULL);
}
//-------------------------------
void creerfile (guichet *p){
      *p=NULL;
}
//--------------------------------
void enfiler (guichet *p , maillonfile client , ptr *sauv )
                 //on va inserer le client dans la file d'attente
 /* ON CHERCHE LE BON ENDROIT DANS LEQUEL L'ORDRE DES TIQUETS EST RESPECTE */
{
  ptr q,r,s;
  bool trouv;
  allouer(&s);
  s->client=client;
  q=*p;//q va contenir l'adreese de l'insertion
  *sauv=s; // sauv est le ptr vers le maillon du nouveau client
  r=NULL;//r va contenir l'adresse precedente
  if (filevide(*p)){
    aff_adr(s,NULL);
    *p=s;
      //mettre a jour la file d'attente vide
  }
  else {  //on va parcourir toute la liste
   while ((q != NULL)&& !(trouv )){
    if ( ticket(q) > ticket(s)  ){
        trouv=true;
    }
    else{
      r=q;
      q=suivant(q);

    }
   }
    //insertion de s
    aff_adr(s,q);
    if (r==NULL ){ //mettre a jour la tete de la file
        *p=s;
    }
    else{
        aff_adr(r,s);
    }
  }
 }
//-------------------------
void redirect (guichet *p , ptr s  )
                 //on va rediriger  le client pointe par s dans la nvlle file de guichet
 /* ON CHERCHE LE BON ENDROIT DANS LEQUEL L'ORDRE DES TIQUETS EST RESPECTE */
{
  ptr q,r;
  bool trouv;
  q=*p;//q va contenir l'adreese de l'insertion

  r=NULL;//r va contenir l'adresse precedente
  if (filevide(*p)){
    aff_adr(s,NULL);
    *p=s;
      //mettre a jour la file d'attente vide
  }
  else {  //on va parcourir toute la liste
   while ((q != NULL)&& !(trouv )){
    if ( ticket(q) > ticket(s)  ){
        trouv=true;
    }
    else{
      r=q;
      q=suivant(q);

    }
   }
    //insertion de s
    aff_adr(s,q);
    if (r==NULL ){ //mettre a jour la tete de la file
        *p=s;
    }
    else{
        aff_adr(r,s);
    }
  }
 }
//-------------------------
void defiler (ptr *p, maillonfile *sauv){    //retourne la tete de la liste dans la zone pointee par sauv
   *sauv = (*p)->client;           //ajouter une autre varibale ptr vers ptr qui contient l'adresse du maillon cree pour l'utiliser                                  //dans le chainage

   *p=suivant(*p);
}

/********************************************************************************************************/
                         //MANIPULATOIN DE LA FILE D'ATTENTE GLOBALE //
//----------------------------------------------------------
 bool fileglob_vide (file_globale f){  //retourne vraie si la file globale est vide i.e., y'a aucun client dans tous les guichets
    return (f.tete==NULL);
 }
//-----------------------------------------------------------
void creerfile_glob (file_globale * pf){
    pf->tete=NULL;
    pf->queue=NULL;
}
//-----------------------------------------------------------
void enfiler_glob (file_globale * pf , ptr p)
/*sert a inserer le client dans la file d'attente globale sans creer un
   nouveau maillon*/
{
   if (fileglob_vide(*pf)){  //mettre a jour la tete et la queue de la file d'attente
      pf->tete=p;
     pf->queue =p;
   }
   else {  //inserer le client dans la queue de la file
    aff_suiv_ticket(pf->queue, p);
    pf->queue =p;                                    //mettre a jour la queue de la file
   }
   aff_suiv_ticket(pf->queue,NULL);
}
//-------------------------------------------------------------------
void defiler_glob (file_globale *pf , guichet *p,maillonfile *sauv){
// dans cet algorithme : on va enter le guichet qui a accomplit le requet du premier client
//  on va liberer le client et avancer le client suivant dans le guichet
// et changer le chainge dans la file d'attente globale
// on sauvegarde les infos du client dans sauv
ptr q;
ptr sauv1, sauv2;
 *sauv = (*p)->client ;  // sauvegarder les infos du client supprime dans le ptr sauv
sauv1 = *p;      // sauv1 va contenir l'adresse de client qui serq supprime globalement de guichet et de la file globale
*p= suivant(*p);// avancer le guichet vers le client suivant
//chercher le maillon qui se trouve avant p
q=pf->tete;
if (sauv1==pf->tete){ //mettre a jour la tete de la file si on supprime le 1er client a arriver
sauv2 = pf->tete;
sauv2 = suiv_ticket(sauv2);
pf->tete = sauv2;
 if (fileglob_vide(*pf)){
    pf->queue=NULL;
 }
}
else
{       // chercher l'element qui se trouve avant le client dans la file globale et changer le chainage
    while ( suiv_ticket(q) != sauv1){
        q=suiv_ticket(q);
    }
    aff_suiv_ticket(q,suiv_ticket(sauv1));
    if (sauv1==pf->queue){ //mettre a jour la queue de la file globale
        pf->queue=q;//
    }

}
//detruire le maillon
liberer(sauv1);
}
//------------------------------------------
int nb_clients (file_globale liste_clients ){  //retourne le nombre de clients dans la file globale
 int res = 0;
 ptr p;
 p=liste_clients.tete;
 while (p!= NULL){
    res++;
    p=suiv_ticket(p);
 }

return res;

}
//------------------------------------------------------------------------------------------------------------
/*char ar_corresp (int num_guich){ // retoune le caractere correspondant (example 0-->'A')
    return (num_guich+65);
}*/
//------------------------------------------------------------------------------------------------------------
/*int nb_corresp (char c){   //retoune le nbr correpondant (example 'A'-->0)
    return (c-65);
}*/
//------------------------------------------------------------------------------------------------------------
void creer_centre (centre_de_guichets t){ //creer les files d'attentes des guichets
    int i;
    for (i=0;i<nb_guichet;i++){
        creerfile(&t[i]);
    }
}
//------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------
int nb_corresp(char t[]){ // retoune le caractere correspondant (example 0-->'A1')
    char car;
    char num[100];
    int num_int;
    int i;
    int res;

    car = t[0];
    car=toupper(car);
    for (i=1;i<strlen(t);i++){
      num[i-1]=t[i];
    }
    num[i-1]='\0';
    num_int  = atoi(num);
    res = 26*(num_int-1)+(car-65);
    return res;
}
//-----------------------------------------------------------------
void car_corresp(int num_guich,char res[]){ //retoune le nbr correpondant (example 'A1'-->0)

    char car;
    int sauv = num_guich % 26;
    car =sauv+65;
    sauv = num_guich / 26 +1;
    sprintf(res,"%c%d",car,sauv);

}
//-----------------------------------------------------------------
bool guichet_conv (char res []){ //en utilisant le character corespondant, on va tester si le guichet exisit
char car = res[0];
car=toupper(car);
char sauv[100];
strcpy(sauv,res);
sauv[0]=toupper(sauv[0]);
return ((65<=car)&&(car<=90)&&(nb_corresp(sauv)<nb_guichet)&&(nb_corresp(sauv)>=0)&&(!strlen(sauv)==0));
}
//HERE

//-----------------------------------------------------
void affich_guich (int num){   //affiche les guichets disponibles sauf celui qui a comme numero
    int i;
    char guich[100];
    Textecolor(3);
    printf("\t  -> LES GUICHTES DISPONIBLES SONT : \n");
     Textecolor(5);
    for (i=0;i<nb_guichet ;i++)
    {
     car_corresp(i,guich);
     if ((i%26) == 0)
     {
        printf("\n\n");
        printf(" ");
     }

     if (i !=num)
     {
        printf(" %s |",guich);
        Sleep(50);
     }
     else
     {
        printf("    |",guich);
     }

    }
    printf("\n");
    printf("\n");

}
//------------------------------------------------------------------------------------------------------------

       //----> CHOIX A : -----------------------------------------------
  // LE PREMIER CHOIX : GUICHET ACCUEILLE :
  //on va lire le nom de client et le guichet associe a ce client
  // et l'inserer dans la file globale et la file de guichet
  void guichet_accueille (centre_de_guichets t , file_globale *pf)//ici on va ajouter le client dans le guichet et la file globale
  {
   system("cls");

   Textecolor(2);

   printf("\n\n\n\t\t\t   ------------ BINEVENU DANS LE GUICHET ACCUEILLE ------------\n");
   printf("\t\t\t                ----------------------------------\n\n\n");
   Sleep(500);
   printf("\t\t\t -ON VOUS DEMANDE DE CHOISIR UN GUICHET ET ENTRER LE NOM DE CLIENT- \n\n");
   Textecolor(3);
   printf("\t\t\t                ----------------------------------                 \n\n");
   Sleep(500);
   affich_guich(-1);
   Textecolor(5);
   printf("\t\t\t                ----------------------------------                 \n\n");
    Textecolor(3);
    char  guich[100];
    int num_guich;
    ptr sauv;
    maillonfile client1;
    bool vrai;
    char nom [30];
    vrai =false;
    while (!vrai){
      Textecolor(3);
      printf("\t\t\t-> CHOISSISSEZ LE GUICHET QUI DOIT RECEVOIR CE CLIENT : ");
          Textecolor(4);
    scanf("%s",guich);
        printf("\n");
    fflush(stdin);
    fflush(stdin);
    num_guich = nb_corresp(guich);
    vrai = guichet_conv(guich);
    if (!vrai){
        Textecolor(3);
        Sleep(200);
        printf("\t\t\t-->ENTREZ UN GUICHET EXISTANT S'IL VOUS PLAIT ! \n\n");
        Textecolor(4);
        printf("\t\t\t                ----------------------------------                 \n\n");
            printf("\n");

        Sleep(500);
       //affich_guich(-1);
    }
    }
    bool bacle = false;

    Textecolor(5);
    printf("\n\t\t\t -->REMARQUE: LE NOM NE DOIT PAS CONTENIR DE CHIFFRES, DE CARACTERES SP%cCIAUX ( $ , ? , + ....) . \n",144);
    printf("\n\t\t\t          --> ET IL  DOIT PAS CONTENIR  DES CARACT%cRES ALPHAB%cTIQUES (AU MOIN 2)\n\n",144,144);
    while (!bacle)
    {
        Textecolor(3);
        printf("\t\t\t-> ENTREZ LE NOM DE CLIENT : ");
        Textecolor(4);
        gets(nom);
        bacle = nom_vrai(nom);
        if (!bacle)
        {
           Textecolor(3);
           printf("\n\n\t\t\t-> LE NOM NE DOIT CONTENIR QUE DES CARACT%cRES ALPHAB%cTIQUES, VEUILLEZ R%cESSAYER !\n\n\n\n",144,144,144);
        }
        else
        {
            bacle = contain_2char(nom);
            if (!bacle)
            {
                Textecolor(3);
                printf("\n\n\t\t\t-> LE NOM DOIT CONTENIR AU MOIN 2 CARACT%cRES ALPHAB%cTIQUES, VEUILLEZ R%cESSAYER !\n\n\n\n",144,144,144);
            }
        }
    }
    fflush(stdin);
    Textecolor(5);
   printf("\n\t\t\t                ----------------------------------                 \n\n");
    strcpy(client1.nom,nom);
   client1.ticket = ++Ticket_glob;

   enfiler(&t[num_guich],client1,&sauv);//inserer dans la file d'attente de guichet
   enfiler_glob(pf,sauv);
   Textecolor(3);
   printf("\n\n\t\t\t---> ENTREZ UNE TOUCHE POUR QUITTER  ");
   getchar();
   return ;
  }
//-------------------------------------------------------------------------------------------------

                                    //CHOIX B//
//--------------------------------------------------------------------------------------
//QUESTION B.1: Affichage de la fille d'attente de guishet------------------------------
//ON VA PARCOURIR LA LISTE D'ATTENTE DE GUISHET CHOISI ET CHAQUE FOIE AFFISHER UN CLIENT JUSQU'A LA FIN
void affich_list_guichet(centre_de_guichets t, int i, int choix)
{
    if (choix == 0)
    {
        system("cls");
    }
    guichet q;
    char ph[100];
    int max_char,num_space;
    //---------
    q = t[i]; //sauvgarder p
    Sleep(200);
    car_corresp(i,ph);
    printf("\n\n\n\n");
    Textecolor(2);
    printf("                           --------------- LISTE DE GUISHET %s: ---------------\n\n\n",ph);
    printf("                                           --------------------                \n\n\n");
    Sleep(200);
    Textecolor(5);
    printf("                        _______________________________________________________________\n");
    printf("                        |Nom                                          |Ticket         |\n");
    printf("                        |_____________________________________________|_______________|\n");
    Sleep(100);
    while ( q != NULL)
    {
        //max_char = 30;
        //num_space = max_char - strlen(nom(q));
        //printf("%s%*s", nom(q), num_space, "");

        //max_char = 10;
        //num_space = max_char -
        printf("                        |%-*s",45,nom(q));
        printf("|%-*d|\n",15,ticket(q));
        printf("                        |_____________________________________________|_______________|\n");
        Sleep(100);
        q = suivant(q);
    }
    printf("\n");
    printf("\n\n");

    if (choix == 0)
    {
       Textecolor(3);
       printf("\t\t\t---> ENTREZ UNE TOUCHE POUR QUITTER  ");
       getchar();
       getchar();
    }
}
//--------------------------------------------------------------------------------------
/*************************************************************************************************************/
       // Question B.2 //-->Reception des clients
 void recevoir_client( centre_de_guichets t,file_globale *pf,int num_guich ){
    /*  Si la file d'attente de guichet n'est pas vide
     On va afficher le nom de premier client dans de guichet
     et mettre 2 choix au utilisateur:
      1- Traiter la requete : on va dans ca cas supprimer le client de la file i.e., defilemet globale
      2- Rediriger vers un autre guichet :
            -lire le nv guichet
            -defiler le client de guichet et l'inserer dans le nv guichet
     */
     bool geet = false;
    char choice [100];
     system("cls");
     char guich [100];
     car_corresp(num_guich,guich);
     printf("\n\n\n\n");
     Textecolor(2);
     Sleep(500);
     printf("\t\t\t                         --------------- RECEPTION DES CLIENTS DE GUICHET %s ---------------\n",guich);
     printf("\t\t\t                                         -----------------------------------                \n\n\n");
     maillonfile sauv_client;
     int choix;
     int nv_guich;

     ptr sauv ;//on en aura besoin de le  choix b-2
     bool vrai = false;
     if (filevide(t[num_guich])){
        Textecolor(3);
        Sleep(500);
        printf("\t\t\t                                          -----------------------------------                  \n\n");
        Textecolor(5);
        printf("\t\t\t                         --->LA FILE D'ATTENTE DE CE GUICHET EST VIDE. \n\n");
        printf("\t\t\t                         --->VEUILLEZ S'IL VOUS PLAIT AJOUTER DES CLIENTS A CE GUICHET, EN RETOURNANT A L'ECRAN PRECEDANTE.\n\n");
        Textecolor(3);
        printf("\t\t\t                                          -----------------------------------                  \n\n");
        Sleep(500);
        geet = true;

     }
     else
     {
     Textecolor(6);
     Sleep(500);
    printf ("\t\t\t                        --> LE NOM DU PREMIER CLIENT DE LA FILE D'ATTENTE DE CE GUICHET EST : ");

     Textecolor(5);
    puts (nom(t[num_guich]));
     printf("\n");

    Textecolor(5);
    printf("\n\t\t\t                                         -----------------------------------                  \n\n\n");
    Sleep(500);
    Textecolor(2);
    printf ("\t\t\t                             -VEULLEZ S'IL VOUS PLAIT CHOISIR UNE DES 02 OPERATIONS SUIVANTS- : \n\n");
    printf("\t\t\t                                         -----------------------------------                  \n\n");
    printf("\n");
    Sleep(500);

    Textecolor(5);
    printf("\t\t\t*****************************************************************************************************************************\n\n");
    printf("\t\t\t*                                          -----------------------------------                                               *\n\n\n");

    Textecolor(3);
    printf("\t\t\t*                            1. TRAITER LA REQUETE DU CLIENT.                                                                *\n\n");
    printf("\t\t\t*                            2. REDIRIGER CE CLIENT VERS UNE AUTRE FILE D'ATTENTE.                                           *\n\n\n");

    Textecolor(5);
    printf("\t\t\t*                                          -----------------------------------                                               *\n\n");
    printf("\t\t\t*****************************************************************************************************************************\n\n\n");
    printf("\t\t\t                                           -----------------------------------                                                   \n\n");

    Textecolor(3);

    while (!vrai){
        lire_choix:
        Sleep(500);
          Textecolor(3);
       printf("\t\t\t -> ENTREZ VOTRE CHOIX : ");
         Textecolor(4);
        scanf("%s", choice);
        fflush(stdin);
         if(! nbr_vrai(choice)){
            printf("\t\t\tLE CHOIX EST UN NOMBRE ENTIER ! \n");
            goto lire_choix;
        }

       choix=atoi(choice);//convertir la chaine en un entier
       vrai = ((choix==1) || (choix==2));
        if (! vrai){
       Sleep(500);
          Textecolor(3);
        printf("\n\t\t\t-->CHOIX NON VALIDE. VEUILLEZ R%cESSAYER.\n",130);;
             printf("\n\n");
        }
    }
     switch (choix)
     {
     case 1:
     Sleep(500);
          Textecolor(5);
        printf("\n\t\t\t--->SUPPRRESION DU CLIENT DE LA FILE D'ATTENTE DE GUICHET %s \n\n\n ",guich);
        defiler_glob(pf,&t[num_guich],&sauv_client);
        break;
     case 2 :
         printf("\n\n\n\n");
        //afficher le guichet et entrer le nv guichet
        fflush(stdin);
        vrai=false;
        while (!vrai)
        {
         Sleep(500);
         affich_guich(num_guich);
         lire_guich:
         Textecolor(3);
         printf("\n\t\t\t->CHOISSISSEZ LE NOUVEAU GUICHET QUI DOIT RECEVOIR CE CLIENT : ");
         Textecolor(4);
         scanf("%s",guich);
         fflush(stdin);
         nv_guich = nb_corresp(guich);
         vrai = true;
         printf("\n\n");

            if (!guichet_conv(guich)){
            Sleep(500);
            Textecolor(3);
            printf("\t\t\t--->ENTREZ UN GUICHET EXISTANT S'IL VOUS PLAIT ! \n\n");
            printf("\t\t\t          --------------------------------            \n\n");
            printf("\n");
            Sleep(500);
            goto lire_guich ;
            }
            else
            {
                if (num_guich == nv_guich)
                {
                    Sleep(500);
                    Textecolor(3);
                    printf("\t\t\t--->LE CLIENT EST D%cJA DANS CE GUICHET, VEUILLEZ ENTRER DANS UN AUTRE GUICHET \n\n",144);
                    printf("\t\t\t                          --------------------------------            \n\n");
                    printf("\n");
                    Sleep(500);
                    goto lire_guich ;
                }
            }
       }
       sauv = t[num_guich];
       defiler (&t[num_guich],&sauv_client);
       redirect(&t[nv_guich],sauv);
        Textecolor(5);
        Sleep(500);
        printf("\t\t\t-->REDIRECTION DU PREMIER CLIENT DE LA FILE D'ATTENTE VERS LE GUICHET %s \n\n",guich);
        break;
     }
     }
     Textecolor(3);
     printf("\n\n\t\t\t---> ENTREZ UNE TOUCHE POUR QUITTER  ");
     if (geet)
     {
         getchar();
     }
     getchar();

    }

//--------------------------------------------------------------------------------------
//QUESTION C: Affcshage de la fille d'attente global qui contient chaque clinent avec son guishet associe------------------------------
//ON VA INITIALIZER UN TABLEAU DE TAI MAX_GUISHET A TOUS LES GUISHETS
//(AVEC CHAQUE GUISHET EST UN POINTEUR VERS UN FILE D'ATTENTE PRIORITAIRE)
//ON VA PARCOURIR LA LISTE D'ATTENTE GLOBAL ET ON VA TESTER SI LE MAILLION CORESSPOND A L'UN DES GUISHET DE TABLEAU
//SI ON TROUVE L'EGALITE, ON VA CHNAGER LA VALEUR DE GUISHET DANS LE TABLEAU PAR SON SUIVANT DANS LA LISTE PRIORITAIRE
//ON VA REPETER JUSQU'A LE FIN DE LIST GLOBAL
void affich_list_global(centre_de_guichets t,file_globale p)
{
    int i;
    char ph[100];
    file_globale q;
    centre_de_guichets tab;
    //-------
    system("cls");
    printf("\n\n\n\n");
    Textecolor(2);

    for (i=0;i<MAX_GUICHET;i++)
    {
        tab[i] = t[i];
    }
    //---------
    q = p; //sauvgarder p
    Sleep(200);
    printf("\n");
    printf("                                --------------- LISTE GLOBAL : ---------------\n");
    printf("                                                --------------                 \n\n");
    Sleep(200);
    Textecolor(5);
    printf("                 _______________________________________________________________________________\n");
    printf("                 |Nom                                          |Ticket         |Guichet        |\n");
    printf("                 |_____________________________________________|_______________|_______________|\n");
    Sleep(100);
    while ( q.tete != NULL)
    {
         printf("                 |%-*s",45,nom(q.tete));
         printf("|%-*d",15,ticket(q.tete));
         for (i=0;i<MAX_GUICHET;i++)
         {
             if (tab[i] == q.tete)
             {
                 car_corresp(i,ph);
                 printf("|%-*s|\n",15,ph);
                 tab[i] = suivant(tab[i]);
             }
         }
         printf("                 |_____________________________________________|_______________|_______________|\n");
         Sleep(100);
         q.tete = suiv_ticket(q.tete);
    }
    printf("\n");
    printf("\n\n");
    Textecolor(3);
    printf("\t\t\t ---> ENTREZ UNE TOUCHE POUR QUITTER  ");
    getchar();

}
//-------------------------------------------------------------------------------------------------------------------------------------
                // QUESTION D //

     //fonctions utilise :-----------------------------------------------------
//------------------------------------------------------------
//AFFICHER TOUS LE GUICHETS VIDES SAUF LE GUICHET NUMERO NB (ENTREZ -1 POUR AFFISHER TOUS )
void affich_guich_nonvide (centre_de_guichets tc, int nb)
{
    int i;
    char ph[100];
    printf("\n");
    //----------
    Textecolor(3);
    Sleep(100);
    printf("\t\t\t -->LES GUICHETS NON VIDES SONT : \n");
    Textecolor(5);
    for (i=0;i<nb_guichet;i++)
    {
        car_corresp(i,ph);
        if ((i%26) == 0)
        {
            printf("\n\n");
            printf(" ");
        }
        if (i != nb)
        {
            if (tc[i] != NULL)
            {
                Sleep(75);
               printf(" %s |",ph);
            }
        }
    }
    printf("\n");
    printf("\n");
}
//------------------------------------------------------------
//--------------------------------------------
//CALCULER LE NOMBRE DES GUICHETS VIDES
int nb_guich_vide (centre_de_guichets tc)
{
    int i,cpt;
    //-----------
    cpt = 0;
    for (i=0;i<nb_guichet;i++)
    {
        if (tc[i] == NULL)
        {
            cpt++;
        }
    }
    return cpt;
}
//--------------------------------------------


//----------------------------------------------------------------
//LIRE LE CHARACTER QUI REPRESENTE UN GUISHET ET RETOURNE LE NUMERO DE GUICHET EN RESPECTANT LES CAS SPECIEUX
void lire_guichet(centre_de_guichets tc ,int *num_guich, char mesg[])
{
    char guich[100];
    bool vrai;
    //---------------
    vrai = false;
    while (!vrai)
    {
        Textecolor(3);
        Sleep(100);
        printf("\t\t\t ->%s : ",mesg);
        Textecolor(4);
        scanf("%s",&guich);
        printf("\n");

        clear_input();

        if (guichet_conv(guich))
        {
            *num_guich = nb_corresp(guich);
            vrai=true;
        }
        else
        {
            Textecolor(3);
            printf("\t\t\t -->Entrez un guichet existant s'il vous plait ! \n\n");
            printf("\n");

            Sleep(500);
        }
    }
}
//----------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------
//choix represente si on va affishet ou non, si 1 aficher sinon on affiche pas les guichets
//tg est un tableu tel que ses indices represente chaque guichet, la valeur de chaque column soit 0 ou 1,
//1 represente qu' on va afiisher/(ou non) se guichet
//0 represente qu' on ne va pas afisher/(ou non) ce guichet
void affich_guich_nvide(centre_de_guichets tc, int tg[0], int choix)
{
    int i;
    char ph[100];
    //----------
    printf("\n");
    if (choix == 1)
    {
        Textecolor(3);
        printf("\t\t\t -->LES GUICHETS NON VIDES SONT : \n");
        Sleep(100);
        Textecolor(5);
        for (i=0;i<nb_guichet;i++)
        {
            car_corresp(i,ph);
            if ((i%26) == 0)
            {
                printf("\n\n");
                printf(" ");
            }
            if ((tc[i] != NULL) && (tg[i] == 1))
            {
                Sleep(75);
                printf(" %s |",ph);
            }
        }
    }
    else
    {
        Textecolor(3);
        printf("\t\t\t -->LES GUICHETS VIDES SONT : \n");
        Textecolor(5);
        for (i=0;i<nb_guichet;i++)
        {
            car_corresp(i,ph);
            if ((i%26) == 0)
            {
                printf("\n\n");
                printf(" ");
            }
            if ((tc[i] == NULL) && (tg[i] == 1))
            {
                Sleep(75);
                printf(" %s |",ph);
            }
        }
    }
    printf("\n");
    printf("\n");
}
//-----------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------
//QUESTION D.1 : Redirection d'une file d'attente d'un guichet choisis sur  n  autre guichets qui etaient jusqu'alors vides-----------
//La fonction principale
void eclatage(centre_de_guichets tc)
{
    char choice [100];
    system("cls");
    printf("\n\n\n\n");
    Textecolor(2);
    Sleep(100);
    printf("\t\t\t  REDIRECTION D'UNE FILE D'ATTENTE D'UN GUICHET CHOISIS SUR 'N' AUTRES GUICHETS VIDES   \n");
    printf("\t\t\t   ---------------------------------------------------------------------------------\n\n\n");
    //------------on va lire le numero de guichet destinaire
    int main_g; //le numero de guichet a rediriger
    bool boucle;
    //afficher les guichets non vides !
    boucle = false;

    affich_guich_nonvide(tc,-1);
    char mesg1[] = "CHOISIR LE GUICHET SOURCE";
    while (!boucle)
    {
       lire_guichet(tc,&main_g,mesg1);

       boucle = ( tc[main_g] != NULL);
       if  (!boucle)
       {
            Textecolor(3);
            Sleep(100);
            printf("\t\t\t ENTREZ UN GUICHET NON VIDE S'IL VOUS PLAIT ! \n");
            printf("\n\n");
       }
    }
    Textecolor(3);
    Sleep(100);
    printf("\n\t\t\t -------------------\n\n\n");
    //------------on va lire le nombre des guichets sources qui on va utiliser
    int nb_vide = nb_guich_vide(tc); //nombre de guichets vide

    int n; //nombre de guichets on va utiliser

    Textecolor(5);
    Sleep(100);
    printf("\t\t\t -IL Y A %d GUICHETS VIDES\n\n",nb_vide);
    boucle = false;
    while (!boucle)
    {
        Textecolor(3);
        Sleep(100);
        printf("\n\t\t\t -->ENTREZ LE NOMBRE DE GUICHETS QUE NOUS ALLONS UTILISER : ");
        Textecolor(4);
        scanf("%d",&n);

        boucle = (n<=nb_vide);
        if (!boucle)
        {
            Textecolor(3);
            Sleep(100);
            printf("\t\t\t -->\nIL N'Y A QUE %d GUICHETS VIDES, VEUILLEZ CHOISIR UN NOMBRE INF%cRIEUR \n",nb_vide,144);
            printf("\n");
        }
    }
    Textecolor(3);
    Sleep(100);
    printf("\n\t\t\t -------------------\n\n");
    //-----------on va lire le numero de guichets sources
    int tab[n]; //tab va contenir le numero de guishets choisis


    int sub_g; //le numero de sous guichet vide choisis


    int tg[nb_guichet];//tg est un tableu tel que ses indices represente chaque guichet, la valeur de chaque colum soit 0 ou 1
    int g;
    for (g=0;g<nb_guichet;g++)
    {
        tg[g] = 1; //1 represente que on va afiisher se guichet, par default on va afiisher tous
    }
    tg[main_g] = 0; //0 represente que on ne va pas afisher ce guichet, dans ce cas on n'affish pas le guichet destinaire

    int i,k;
    for (i=0;i<n;i++)
    {
        boucle = false;
        char mesg2[] = "CHOISIR LE GUISHET VIDE NUMERO ";
        while (!boucle)
        {
            printf("\n");
            Sleep(100);
            affich_guich_nvide(tc,tg,0); //affish tous les guichet non vide (choix = 0) de numero <i> telque tg[i]=1
            sprintf(mesg2 + strlen(mesg2), "%d", i+1);
            lire_guichet(tc,&sub_g,mesg2);

            boucle = ( tc[sub_g] == NULL);
            if  (!boucle)
            {
               Textecolor(3);
               Sleep(100);
               printf("\n\t\t\t -->ENTREZ UN GUICHET VIDE S'IL VOUS PLAIT ! \n");
               printf("\n\n");
            }
            else
            {
                for (k=0;k<i;k++)
                {
                    if (tab[k] == sub_g)
                    {
                       boucle = false;
                    }
                }
                if  (!boucle)
                {
                   Textecolor(3);
                   Sleep(100);
                   printf("\n\t\t\t -->VOUS AVEZ D%cJA CHOISI CE GUICHET, VEUILLEZ EN CHOISIR UN AUTRE\n\n",144);
                   printf("\n");
                }
            }
        }
        printf("\n\n");
        tab[i] = sub_g;
        tg[sub_g] = 0;// sub-g est le numero de guichet choisis, donc on n'afffsih pas
    }

    //-----------------on va fait l'eclatement
    int j; //j est l'indice de tableau tab
    bool initial;
    guichet curr,sauv;

    initial = false; //initilaization de guishets qui sont vides
    while (tc[main_g] != NULL)  //le guichet qui on va rediriger va etre non vide
    {
        j = 0; //cahque foie on termine un itiration on va parcourir le tableau a zero
        while ((tc[main_g] != NULL) && (j<n)) //on ca parcourir tab pour chaque sous guishet vide
        {
            sauv = suivant(tc[main_g]); //sauvgarder le suivant de guishet numero main_g (guichet choisis)
            if (!initial) //comme les guicehts sont vides donc la premiere itiration est toujours l'initialization des guichets
            {
                tc[tab[j]] = tc[main_g];
                aff_adr(tc[tab[j]],NULL);
            }
            else //comme la liste global est ordonne, donc on va seulement enfiler sur les sous guisets
            {
                curr = tc[tab[j]];
                while (curr != NULL)
                {
                    if (suivant(curr) == NULL)
                    {
                        aff_adr(curr,tc[main_g]); //le dernier maillon va point au un maillon de le guichet numero main_g
                        aff_adr(tc[main_g],NULL); //le dernier maillon sera un maillon de le guichet numero main_g qui point vers le NULL
                    }
                    curr = suivant(curr);
                }
            }
            tc[main_g] = sauv; //on va parcourir la list de guishet numero main_g (guichet choisis)
            j++;// j est l'indice de tab donc on incremente chaque foi sachant que 0<=j<n
        }
        initial = true; //on va seulment initializer les guichets un seul foie
    }

    int choix;
    Textecolor(3);
    Sleep(100);
    printf("\n\t\t\t -------------------\n\n");
    Sleep(100);
    printf("\t\t\t ->VOULEZ-VOUS VOIR LES LISTES DES GUICHETS DESTINAIRES CHOISIS ?\n\n\n");
    Textecolor(5);
    Sleep(100);
    printf("\t\t\t 1. OUI. \n\n");
    printf("\t\t\t 2. NON. \n\n\n");

   do {
     lire_choix:
    Textecolor(3);
    Sleep(100);
    printf("\t\t\t ->ENTREZ VOTRE CHOIX :(le choix est 1 ou 2 ) ");
    Textecolor(4);
    scanf("%s",choice);
    fflush(stdin);
     if(! nbr_vrai(choice)){
        printf("\t\t\tLE CHOIX EST UN NOMBRE ENTIER ! \n ");

         goto lire_choix;
     }
     choix=atoi(choice);
    Sleep(500);
    switch(choix)
    {
        case 1:
        {
            Sleep(500);
            system("cls");
            int cpp;
            Textecolor(2);
            Sleep(500);
            printf("\n\n\t\t\t\t -----VOICI LA LISTE DE CHAQUE GUICHET-----");
            for (cpp=0;cpp<n;cpp++)
            {
                Sleep(500);
                affich_list_guichet(tc,tab[cpp],1);
            }

            Textecolor(3);
            Sleep(100);
            printf("\t\t\t---> ENTREZ UNE TOUCHE POUR QUITTER  ");
            getchar();

        }
        //----------------
        case 2:
        {
           Textecolor(2);
           Sleep(100);
           printf("\n\n\t\t\t --->FIN DE TRAITEMENT \n\n\n");
           Sleep(1000);
           break;
        }
        //--------------
        default:
        {
            Textecolor(4);
            Sleep(100);
            printf("\n\t\t\t-->CHOIX NON VALIDE. VEUILLEZ R%cESSAYER.\n\n",144);
            Sleep(1000);
        }
    }
   } while((choix != 1) && (choix != 2));


printf("\n");
}
/***************************************************************************************************************************************************************************************************/
//QUESTION D.ii : Redirection de deux files d'attentes ou plus vers le meme guichet/agent -----------
//c'est le meme principe que fusionner 02 listes ordonnees

//-----------------------------------------------------------------------------------------------------
//fusion (interclassement) de deux listes ordonnees t1 (destination) et t2 (source) vers la seul list t1---
void fusion(guichet *t1, guichet *t2)
{
    guichet t3; //on va sauvgarder le nouvelle list sur t3 et puis la affecter au t1
    guichet p; //pour parcourir les list
    //--------------
    if ((*t1) == NULL) //si la list destinaire t1 est vide donc on va juste la remplacer par t2
    {
        *t1 = *t2;
        *t2 = NULL;
    }
    else //on ne va pas tester si t2 est vide car il sera fait pendant le lecture des guishets sources utilises
    {
        if ( ticket(*t1)<ticket(*t2) ) //on va tester quelle guichet a le plus petiti ticket pour initializer la tete de la list ordone t3
        {
            t3 = *t1;
            *t1 = suivant(*t1);
        }
        else
        {
            t3 = *t2;
            *t2 = suivant(*t2);
        }

        p = t3;
        while ( ((*t1) != NULL) && ((*t2) != NULL) )
        {
            if ( ticket(*t1)<ticket(*t2) ) //si le condition est verifie  on va chaine le maillon de t1 a t3 et avance t1
            {
                aff_adr(p,*t1);
                p = *t1;
                *t1 = suivant(*t1);
            }
            else //meme chose mais por t2
            {
                aff_adr(p,*t2);
                p = *t2;
                *t2 = suivant(*t2);
            }
        }

        if ((*t1) == NULL) //si on sort quand t1 est null, donc le rest des maillons de t2 sont superieures, on fait directement le chainaege
        {
            aff_adr(p,*t2);
            (*t2) = NULL; //la list source sra vide
        }
        else //si t1 n'est pas null donc t2 est null, on fait le meme chose
        {
            aff_adr(p,*t1);
        }
        (*t1) = t3; //la tete de la list
    }
}
//-----------------------------------------------------------------------------------------------------


//---------------------------------------
//calculer le nombre de guichets non vides
int nb_guich_libre(centre_de_guichets tc)
{
    int i,cpt;
    //-----------
    cpt = 0;
    for (i=0;i<nb_guichet;i++)
    {
        if (tc[i] != NULL)
        {
            cpt++;
        }
    }
    return cpt;
}
//-------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//fusion (interclassement) de n guichets sources dans un seul guichet destinaire
void fusion_guichets(centre_de_guichets tc)
{
    char choice[100];//pour verifier que le choix entre est un entier
    system("cls");
    Textecolor(2);
    printf("\n\n\n\n");
    printf("\t\t\t ---------- REDIRECTION DE 'n' FILE D'ATTENTES DANS UN SEUL GUICHET ----------\n");
    printf("\t\t\t            -------------------------------------------------------       \n\n\n");

    //------------on va lire "main_g" le numero de guichet destinaire
    int main_g; //le numero de guichet destinaire

    affich_guich(-1);
    char mesg1[] = "CHOISIR LE GUICHET DESTINAIRE";
    lire_guichet(tc,&main_g,mesg1);

    //------------on va lire "n" le nombre des guichets sources qui on va utiliser
    int nb_libre = nb_guich_libre(tc); //nombre de guichets non vide
    if (tc[main_g] == NULL)
    {
        printf("\t\t\t --->REMARQUE: LE GUICHET QUE VOUS AVEZ CHOISI EST VIDE, MAIS LE TRAITEMENT DE POURSUIVRA NORMALEMENT \n\n\n");
    }
    else
    {
        nb_libre = nb_libre - 1;
    }


    Textecolor(3);
    Sleep(100);
    printf("\n\t\t\t -------------------\n\n");
    int n; //nombre de guichets sources on va utiliser
    bool boucle;
    boucle = false;
    Textecolor(5);
    printf("\t\t\t -->IL Y A %d GUICHETS NON VIDE \n\n",nb_libre);
    while (!boucle)
    {
        Textecolor(3);
        printf("\t\t\t ->ENTREZ LE NOMBRE DE GUICHETS SOURCES QUI ON VA UTILISER : ");
        Textecolor(4);
        scanf("%d",&n);
        printf("\n");

        boucle = (n<=nb_libre);
        if (!boucle)
        {
            Textecolor(3);
            printf("\t\t\t -->IL N'Y A QUE %d GUICHETS NON VIDES, VEUILLEZ CHOISIR UN NOMBRE INF%cRIEUR \n",nb_libre);
            printf("\n");
            printf("\n");
        }
    }


    Textecolor(3);
    Sleep(100);
    printf("\n\t\t\t -------------------\n\n");
    //------------on va lire "sub_g" le numero de guichets sources et stocker dans un tableu "tab" de max tai "n"
    int tab[n]; //tab va contenir le numero de guishets sources choisis

    int sub_g; //le numero de guichets sources non vides choisis


    int tg[nb_guichet];//tg est un tableu tel que ses indices represente chaque guichet, la valeur de chaque colum soit 0 ou 1
    int g;
    for (g=0;g<nb_guichet;g++)
    {
        tg[g] = 1; //1 represente que on va afiisher se guichet, par default on va afiisher tous
    }
    tg[main_g] = 0; //0 represente que on ne va pas afisher ce guichet, dans ce cas on n'affish pas le guichet destinaire


    int i,k;
    for (i=0;i<n;i++)
    {
        boucle = false;
        char mesg2[] = "CHOISIR LE GUICHET SOURCE NUMERO ";
        while (!boucle)
        {
            printf("\n");
            affich_guich_nvide(tc,tg,1); //affish tous les guichet non vide (choix = 1) de numero <i> telque tg[i]=1
            sprintf(mesg2 + strlen(mesg2), "%d", i+1);
            lire_guichet(tc,&sub_g,mesg2);

            boucle = ( tc[sub_g] != NULL);
            if  (!boucle)
            {
               Textecolor(3);
               printf("\t\t\t -->ENTREZ UN GUICHET NON VIDE S'IL VOUS PLAIT ! \n");
               printf("\n");
            }
            else
            {
                for (k=0;k<i;k++)
                {
                    if (tab[k] == sub_g)
                    {
                       boucle = false;
                    }
                }
                if  (!boucle)
                {
                   Textecolor(3);
                   printf("\t\t\t -->VOUS AVEZ DEJA CHOISI CE GUICHET, VEUILLEZ EN CHOISIR UN AUTRE !\n");
                   printf("\n");
                }
            }
        }

        tab[i] = sub_g;
        tg[sub_g] = 0;// sub-g est le numero de guichet choisis, donc on n'afffsih pas
    }

    //------------on va fusioner les guichets
    int j; //j est l'indice de tableau tab
    bool initial;

    for (j=0;j<n;j++)
    {
        fusion(&tc[main_g],&tc[tab[j]]);
    }

    int choix;
    Textecolor(3);
    Sleep(100);
    printf("\n\t\t\t -------------------\n\n");
    Sleep(100);
    printf("\t\t\t ->VOULEZ-VOUS VOIR LA FILE D'ATTENTE DE GUICHET DESTINAIRE CHOISIS ?\n\n\n");
    Textecolor(5);
    Sleep(100);
    printf("\t\t\t 1. OUI. \n\n");
    printf("\t\t\t 2. NON. \n\n\n");

   do {
    lire_choix:
    Textecolor(3);
    Sleep(100);

    printf("\t\t\t ->ENTREZ VOTRE CHOIX (LE CHOIX EST 1 OU 2 ) : ");
    Textecolor(4);
    scanf("%s",&choice);
      fflush(stdin);
         if(! nbr_vrai(choice)){
            printf("LE CHOIX EST UN NOMBRE ENTIER ! \n ");

            goto lire_choix;
        }

       choix=atoi(choice);//convertir la chaine en un entier
    Sleep(500);
    switch(choix)
    {
        case 1:
        {
            Sleep(500);
            system("cls");
            int cpp;
            Textecolor(2);
            Sleep(500);
            printf("\n\n\t\t\t\t ----- VOICI LA LISTE GUICHET DESTINAIRE -----");
            Sleep(500);
            affich_list_guichet(tc,main_g,1);

            Textecolor(3);
            Sleep(100);
            printf("\t\t\t---> ENTREZ UNE TOUCHE POUR QUITTER  ");
            getchar();

        }
        //----------------
        case 2:
        {
           Textecolor(2);
           Sleep(100);
           printf("\n\n\t\t\t --->FIN DE TRAITEMENT \n\n\n");
           Sleep(1000);
           break;
        }
        //--------------
        default:
        {
            Textecolor(4);
            Sleep(100);
            printf("\n\t\t\t-->CHOIX NON VALIDE. VEUILLEZ R%cESSAYER.\n\n",144);
            Sleep(1000);
        }
    }
   } while((choix != 1) && (choix != 2));



}
//-------------------------------------------------------------------------------------------------
//Question D.3 : Requilibrer les files d'attentes des guichets
//On va vider les files d'attentes des guichets , et parcourir la file globale
// au fur et a mesure , on insere chaque client dans la file convenable
//-------------------------------------------------------------------------------------------------
void requilibrer_files (file_globale f_glob ,centre_de_guichets t )
{
    char choice [100];
    system("cls");
    Textecolor(2);
    printf("\n\n\n\n");
    printf("\t\t\t ---------- R%cQUILIBRAGES DE TOUTES LES FILES D'ATTENTES DES GUICHETS  ----------\n",144);
    printf("\t\t\t            ----------------------------------------------------------    \n\n\n");

 creer_centre(t);//vider toutes les files d'attentes

 centre_de_guichets tab_queue;//le tableau continet les queues de chaque guichet
 creer_centre(tab_queue); //au debut les queues sont des ptrs nils

 int guich_dest=0;// le guichet destination d'un client
 guichet p = f_glob.tete;
 while (p!= NULL )
 {
  if (t[guich_dest]==NULL){
    t[guich_dest]=p;
  }
  else {
  aff_adr(tab_queue[guich_dest],p);
  }
  tab_queue[guich_dest]=p;
  aff_adr(tab_queue[guich_dest],NULL);
  guich_dest = (guich_dest +1)%nb_guichet;
  p=suiv_ticket(p);
 }

     int choix;
    Textecolor(3);
    Sleep(100);
    printf("\n\t\t\t -------------------\n\n");
    Sleep(100);
    printf("\t\t\t ->VOULEZ-VOUS VOIR LA FILE D'ATTENTE DE GUICHET DESTINAIRE CHOISIS ?\n\n\n");
    Textecolor(5);
    Sleep(100);
    printf("\t\t\t 1. OUI. \n\n");
    printf("\t\t\t 2. NON. \n\n\n");

   do {
     lire_choix:
    Textecolor(3);
    Sleep(100);

    printf("\t\t\t ->ENTREZ VOTRE CHOIX (LE CHOIX EST 1 OU 2 ) : ");
    Textecolor(4);
    scanf("%s",choice);
    fflush(stdin);
     if(! nbr_vrai(choice)){
        printf("\t\t\tLE CHOIX EST UN NOMBRE ENTIER ! \n ");

         goto lire_choix;
     }
     choix=atoi(choice);
    Sleep(500);
    switch(choix)
    {
        case 1:
        {
            Sleep(500);
            int cpp;
            Sleep(500);
            affich_list_global(t,f_glob);
        }
        //----------------
        case 2:
        {
           Textecolor(2);
           Sleep(100);
           printf("\n\n\t\t\t --->FIN DE TRAITEMENT \n\n\n");
           Sleep(1000);
           break;
        }
        //--------------
        default:
        {
            Textecolor(4);
            Sleep(100);
            printf("\n\t\t\t-->CHOIX NON VALIDE. VEUILLEZ R%cESSAYER.\n\n",144);
            Sleep(1000);
        }
    }
   } while((choix != 1) && (choix != 2));
}
//-------------------------------------------------------------------------------------------------------------------------------------
//QUESTION D.4 : Reinitialiser les tickets
//On parcourt la liste globale et reinitialise les tickets
void reinitialise_ticket (file_globale f, centre_de_guichets t )
{
    char choice [100];
        system("cls");
    Textecolor(2);
    printf("\n\n\n\n");
    printf("\t\t\t ---------- R%cINITIALISATION DE TOUS LES NUM%cRROS DE TICKETS  ----------\n",144,144);
    printf("\t\t\t            --------------------------------------------------            \n\n\n");

    guichet p = f.tete;

    Ticket_glob = 0 ; //reinitliaser le ticket global

    while ( p != NULL){
     p->client.ticket = ++Ticket_glob;
     p=suiv_ticket(p);
    }


         int choix;
    Textecolor(3);
    Sleep(100);
    printf("\n\t\t\t -------------------\n\n");
    Sleep(100);
    printf("\t\t\t ->VOULEZ-VOUS VOIR LA FILE D'ATTENTE DE GUICHET DESTINAIRE CHOISIS ?\n\n\n");
    Textecolor(5);
    Sleep(100);
    printf("\t\t\t 1. OUI. \n\n");
    printf("\t\t\t 2. NON. \n\n\n");

   do {
    lire_choix:
    Textecolor(3);
    Sleep(100);
    printf("\t\t\t ->ENTREZ VOTRE CHOIX :(ENTREZ 1 OU 2 S'IL VOUS PLAIT) ");
    Textecolor(4);
    scanf("%s",choice);
    fflush(stdin);
     if(! nbr_vrai(choice)){
        printf("\t\t\tLE CHOIX EST UN NOMBRE ENTIER ! \n ");

         goto lire_choix;
     }
     choix=atoi(choice);
    Sleep(500);
    switch(choix)
    {
        case 1:
        {
            Sleep(500);
            int cpp;
            Sleep(500);
            affich_list_global(t,f);
        }
        //----------------
        case 2:
        {
           Textecolor(2);
           Sleep(100);
           printf("\n\n\t\t\t --->FIN DE TRAITEMENT \n\n\n");
           Sleep(1000);
           break;
        }
        //--------------
        default:
        {
            Textecolor(4);
            Sleep(100);
            printf("\n\t\t\t-->CHOIX NON VALIDE. VEUILLEZ R%cESSAYER.\n\n",144);
            Sleep(1000);
        }
    }
   } while((choix != 1) && (choix != 2));
}

//-----------------------------------------------------PROGRAMME PRINCIPAL---------------------------------------------------------------
/*************************************************************************************************************************************/
int main ()
{
//-----------------------------------------------------INITIALISATION-------------------------------------------------------------------
//*************************************************************************************************************************************//
file_globale fg;

centre_de_guichets t;
creer_centre(t);

creerfile_glob(&fg);


//*************************************************************************************************************************************//



//-----------------------------------------------------MENU PRINCIPAL-------------------------------------------------------------------
//*************************************************************************************************************************************//
int choix1,choix2,choix3,choix4;
char choice [100];//on l'utilise pour lire les choix et verifier si ce n'est pas une chaine
    //---------------------
    time_t t1 = time(0);

    char *time = ctime(&t1);
    int num_guich;

    int nb_vide,nb_nonvide;

    char nom_guich[100];

    esi();
    system("cls");
    tp_01();
    simulation();
    tp_memb();
    Chargement();
    Barrechargement();

    //lire le nombre de guichets
    bool sortt = false;
    while (!sortt)
    {
        system("cls");
        lire_nb:
        Textecolor(3);
        printf("\n\n\n ->Entrez le nombre de guichet (au moins 3 ,le nombre ne d%cpasse pas %d) qui seront utilis%cs pour le reste du programme : ",130,MAX_GUICHET,130);
        Textecolor(4);
        scanf("%s",choice);
        fflush(stdin);
         if(! nbr_vrai(choice)){
            printf("\n\t\t\t ->LE NOMBRE DE GUICHET EST UN NOMBRE ENTIER ! \n");
            goto lire_nb;
        }
        nb_guichet=atoi(choice);
        sortt = true;
        if (nb_guichet<3 || nb_guichet>MAX_GUICHET)
        {
            sortt = false;
            Textecolor(4);
            printf("\n\t\t\t -->Choix non valide. Veuillez r%cessayer.\n",130);
            Sleep(1000);
        }
        Sleep(500);
    }

    system("cls");
    do {
        printf("\n");
        printf("\n");
        Textecolor(2);
        printf("\n\n                                                     LA DATE D'AUJOURD'HUI : ");
        Textecolor(5);
        printf("%s", time);

        printf("\n\n\n");
        Textecolor(2);
        printf("     ----------------------------------------------------- BIENVENUE DAN LE MENU PRINCIPAL ----------------------------------------------------------\n");
        printf("                                                            -----------------------------                                                \n\n\n");
        printf("\t\t\t                        -ON VOUS DEMANDE DE CHOISIR L'UNE DES OPTIONS SUIVANTES-                        \n\n");
        printf("\t\t\t                                    ----------------------------                                         \n\n\n");
        Textecolor(5);
        printf("\t\t\t*********************************************************************************************************\n\n");
        printf("\t\t\t*                                                                                                       *\n\n");
        printf("\t\t\t*                                   ----------------------------                                        *\n\n");
        Textecolor(3);
        printf("\t\t\t*                        1. AJOUTER DES CLIENTS -GUICHET ACCUEILLE-                                     *\n\n");
        printf("\t\t\t*                        2. R%cCEPTION DES CLIENTS                                                       *\n\n",144);
        printf("\t\t\t*                        3. AFFICHER LA FILE D'ATTENTE GLOBAL                                           *\n\n");
        printf("\t\t\t*                        4. OP%cRATIONS EN VRAC SUR LES FILES D'ATTENTES                                 *\n\n", 144);
        printf("\t\t\t*                        5. QUITTER LE PROGRAMME                                                        *\n\n");
        Textecolor(5);
        printf("\t\t\t*                                   ----------------------------                                        *\n\n");
        printf("\t\t\t*                                                                                                       *\n\n");
        printf("\t\t\t*********************************************************************************************************\n");
        printf("\n");
        printf("\n");

        lire_choix1:
        printf("\t\t\t                                    ----------------------------                                         \n\n");
        Textecolor(3);
        printf("\t\t\t ->ENTREZ VOTRE CHOIX: ");
        Textecolor(4);
        scanf("%s", choice);
        fflush(stdin);
         if(! nbr_vrai(choice)){
            printf("\n\t\t\t ->LE CHOIX EST UN NOMBRE ENTIER ! \n");
            goto lire_choix1;
        }

       choix1=atoi(choice);//convertir la chaine en un entier
        switch(choix1)
        {
            //----------------------------------------------------------------------------------------------------------------
            case 1:
            {
                //printf("\n\t\t\t  -->Vous AVEZ CHOISI L'OPTION 1.\n");

                guichet_accueille(t,&fg);

                Textecolor(3);
                printf("\n\n\t\t\t    --->RETOUR AU MENU PRINCIPAL...\n");

                Sleep(1000);
                break;
            }
            //----------------------------------------------------------------------------------------------------------------
            case 2:
            {
                system("cls");
                printf("\n\n\n\n\n");
                Textecolor(2);
                printf("\t\t\t    -ON VOUS DEMANDE DE CHOISIR LE GUICHET -   \n\n");
                printf("\t\t\t  ------------------------------------------\n\n\n");
                affich_guich(-1);
                char mesgg[] = "CHOISIR UN GUICHET";
                lire_guichet(t,&num_guich,mesgg);
                Sleep(200);
                Textecolor(5);
                car_corresp(num_guich,nom_guich);
                printf("\t\t\t -->VOUS AVEZ CHOISI LE GUICHET %s",nom_guich);
                Sleep(1000);


                system("cls");

               do {
                printf("\n\n\n\n\n");
                Textecolor(2);
                printf("\t\t\t                       R%cCEPTION DES CLIENTS DE GUICHET %s                                            \n",144,nom_guich);
                printf("\t\t\t                              ---------------------                                            \n\n\n");
                Textecolor(5);
                printf("\t\t\t**************************************************************************************\n\n");
                printf("\t\t\t*                                                                                    *\n\n");
                printf("\t\t\t*               -----------------------------------------------                      *\n\n");
                Textecolor(3);
                printf("\t\t\t*      1. AFFICHER LA LISTE DES CLIENTS DANS LA FILE D'ATTENTE DE GUICHET            *\n\n");
                printf("\t\t\t*      2. RECEVOIR UN CLIENT                                                         *\n\n");
                printf("\t\t\t*      3. RETOURNER A L'%cCRAN PR%cC%cEDANT                                             *\n\n",144,144,144);
                Textecolor(5);
                printf("\t\t\t*               -----------------------------------------------                      *\n\n");
                printf("\t\t\t*                                                                                    *\n\n");
                printf("\t\t\t**************************************************************************************\n");
                printf("\n");
                printf("\n");
               lire_choix2:
                Textecolor(3);
                printf("\t\t\t ->ENTREZ VOTRE CHOIX ");
                Textecolor(4);
                 scanf("%s", choice);
                   if(! nbr_vrai(choice)){
                   printf("\t\t\tLE CHOIX EST UN NOMBRE ENTIER !\n");
                   goto lire_choix2;
                   }
                 choix2=atoi(choice);
                switch(choix2)
                {
                        //------------------------------------------------------------------------------
                        case 1:
                        {

                           affich_list_guichet(t,num_guich,0);

                           printf("\n\n\t\t\t  --->RETOUR AU %CCRAN PR%CCEDENT...\n",144,144);

                           Sleep(750);
                           break;
                        }
                        //------------------------------------------------------------------------------
                        case 2:
                        {
                          recevoir_client(t,&fg,num_guich);
                          break;
                        }
                        //------------------------------------------------------------------------------
                        case 3:
                        {
                            Textecolor(3);
                            printf("\n\n\t\t\t    --->RETOUR AU MENU PRINCIPAL...\n");
                            Sleep(1000);
                            break;
                        }
                        //------------------------------------------------------------------------------
                        default:
                        {
                            Textecolor(4);
                            printf("\n\t\t\t-->Choix non valide. Veuillez r%cessayer.\n",130);
                            Sleep(1000);
                        }
                        //------------------------------------------------------------------------------
                }
                //clear screen
                system("cls");
                //------------
             } while (choix2 != 3);
                break;
            }
            //----------------------------------------------------------------------------------------------------------------
            case 3:
            {

                // code for Option 3
                affich_list_global(t,fg);
                printf("\n\n\t\t\t  --->RETOUR AU MENU PRINCIPAL...\n");
                Sleep(750);
                break;
            }
            //----------------------------------------------------------------------------------------------------------------
            case 4:
            {
                system("cls");
               do {


                printf("\n\n\n");
                Textecolor(2);
                printf("\t\t\t                                              OPERATIONS EN VRAC SUR LES FILES D'ATTENTES                                                   \n");
                printf("\t\t\t                                                      -----------------------------                                                \n\n\n");

                printf("\t\t\t                                          -ON VOUS DEMANDE DE CHOISIR L'UN DES OPTIONS SUIVANTS-                             \n\n");
                printf("\t\t\t                                                      ----------------------------                                         \n\n\n");

                Textecolor(5);
                printf("\t\t\t**********************************************************************************************************************************\n\n");
                printf("\t\t\t*                                                                                                                                *\n\n");
                printf("\t\t\t*                                                    ----------------------------                                                *\n\n");
                Textecolor(3);
                printf("\t\t\t*\t                        1. REDERICTION D'UNE FILE D'ATTENTE D'UN GUISHET SUR 'n' AUTRE GUICHETS                          *\n\n");
                printf("\t\t\t*\t                        2. REDIRECTION DE 'n' FILE D'ATTENTES DANS UN SEUL GUICHET                                       *\n\n");
                printf("\t\t\t*\t                        3. R%c%cQUILIBRAGE DE TOUS LES FILES D'ATTENTES                                                    *\n\n",144,144);
                printf("\t\t\t*\t                        4. R%cINITIALISATION DE TOUS LES NUM%cRROS DE TICKETS                                              *\n\n",144,144);
                printf("\t\t\t*\t                        5. RETOUR AU MENU PRINCIPAL                                                                      *\n\n");
                Textecolor(5);
                printf("\t\t\t*                                                    ----------------------------                                                *\n\n");
                printf("\t\t\t*                                                                                                                                *\n\n");
                printf("\t\t\t**********************************************************************************************************************************\n\n\n");


                printf("\t\t\t                                                     ----------------------------                                         \n\n");

                nb_vide = nb_guich_vide(t);
                if (nb_vide == nb_guichet)
                {
                    choix4 = 686;
                }
                else
                {
                lire_choix4:
                    Textecolor(3);
                    printf("\t\t\t ->ENTREZ VOTRE CHOIX: ");
                    Textecolor(4);
                    scanf("%s", choice);
                       fflush(stdin);
                   if(! nbr_vrai(choice)){
                   printf("\t\t\tLE CHOIX EST UN NOMBRE ENTIER ! \n");
                   goto lire_choix4;
                   }
                 choix4=atoi(choice);
                }

                switch(choix4)
                {
                    //------------------------------------------------------------------------------
                    case 1:
                    {
                       nb_nonvide = nb_guich_libre(t);
                       if ( nb_nonvide == nb_guichet)
                       {
                            Sleep(500);
                            Textecolor(5);
                            printf("\n\n\t\t\t -->TOUS LES GUICHETS NE SONT PAS VIDE, VEUILLEZ D'ABORD VIDER AU MOIN UN GUICHET\n\n\n");

                            Textecolor(3);
                            printf("\t\t\t ---> ENTREZ UNE TOUCHE POUR QUITTER  ");
                            getchar();


                            Textecolor(3);
                            printf("\n\n\t\t\t    --->RETOUR AU %cCRAN PR%cCEDENT...\n",144,144);
                            Sleep(1000);
                       }
                       else
                       {
                           eclatage(t);
                       }
                       break;
                    }
                    //------------------------------------------------------------------------------
                    case 2:
                    {
                       fusion_guichets(t);
                       break;
                    }
                    //------------------------------------------------------------------------------
                    case 3:
                    {
                       requilibrer_files(fg,t);
                       break;
                    }
                    //------------------------------------------------------------------------------
                    case 4:
                    {
                       reinitialise_ticket(fg,t);
                       break;
                    }
                    //------------------------------------------------------------------------------
                    case 5:
                    {
                       Textecolor(3);
                       printf("\n\n\t\t\t    --->RETOUR AU MENU PRINCIPAL...\n");
                       Sleep(1000);
                       break;
                    }
                    //------------------------------------------------------------------------------
                    case 686:
                    {
                       Sleep(500);
                       Textecolor(5);
                       printf("\n\n\t\t\t -->TOUS LES GUICHETS SONT VIDES, VEUILLEZ D'ABORD AJOUTER UN CLIENT\n\n\n");

                       Textecolor(3);
                       printf("\t\t\t ---> ENTREZ UNE TOUCHE POUR QUITTER  ");
                       getchar();


                       Textecolor(3);
                       printf("\n\n\t\t\t    --->RETOUR AU MENU PRINCIPAL...\n");
                       Sleep(1000);
                       break;
                    }
                    //------------------------------------------------------------------------------
                    default:
                    {
                        Textecolor(4);
                        printf("\n\t\t\t\t-->CHOIX NON VALIDE, VEUILLEZ R%cESSAYER\n",144);
                        Sleep(1000);;


                    }
                    //------------------------------------------------------------------------------
                }

                system("cls");
            } while ((choix4 != 1) && (choix4 != 2) && (choix4 != 3) && (choix4 != 4) && (choix4 != 5) && (choix4 != 686));
                break;
            }
            //----------------------------------------------------------------------------------------------------------------
            case 5:
            {
                printf("\n\n\t\t\t    Sortie...\n");
                Chargement();
                fin_programme();
                merci();
                Sleep(200);
                break;
            }
            //----------------------------------------------------------------------------------------------------------------
            default:
            {
                Textecolor(4);
                printf("\n\t\t\t\t-->CHOIX NON VALIDE !, VEUILLEZ R%cESSAYER\n",144);
                Sleep(1000);

            }
        }
        //clear screen

        system("cls");
        //------------
    } while (choix1 != 5);

//*************************************************************************************************************************************//
    Textecolor(7);
    return 0;
}
/*************************************************************************************************************************************/
