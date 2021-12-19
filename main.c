/*ISMAIL BILGHIT tp project */
/*read cmmnt just in case of anny error :)*/
#include <stdio.h>/*using func like scanf(),printf()*/
#include <string.h>/*using func like gets(),stcpy(),strcmp(),strlen()...*/
#include <stdlib.h>
#include <ctype.h>//using func like toupper(),isspace()
#define STRLENGTH 50 /*this is the MAXimum Length user name can have*/
#define defaultOs "cls" /*attention a changer en cas en clear en cas d'etulistion d'une linux Dist || cls por windows*/
#define maxAge 100
#define minAge 10
/*Default struct for newUsers stund for updates*/
struct user {
  char famName[STRLENGTH];
  char name[STRLENGTH];
  int age;
};
/*this is the beta virsion of OBJ updt soon thx for wating*/
struct OBJ {
  char typeOfobj[STRLENGTH];
  char nameOfobj[STRLENGTH];
  char discOfobj[STRLENGTH];
};
/*addString is  a function responsible to get string Updates*/
void addString(char newUser[],int enabaleSpc,char keyMsg[],char keyWord[]){
  char usert[STRLENGTH];//returned user 
  int testAssets = 0;//Boolean test point initialized on False
  do{
  system(defaultOs);
  if(!enabaleSpc){
    printf("!!! ATTENTION espace est interdi dans ctte cmnd !!!\n"); 
    }
    printf("donne l%s du l %s:",keyMsg,keyWord);
    gets(usert);
    // just to check if user is legit or not
    for(int i=0;i<strlen(usert);i++){
      if(toupper(usert[i])>'Z' || toupper(usert[i])<'A' ){
        testAssets = 1;// if space is Disabled or entring nonalphabet word
      }
    }
  }while(testAssets);// to keep reppiting in case of wrong entry 
  strcpy(newUser,usert);//returning the user by pointers
}
int addNum(char keyWord[],int minCondition,int maxCondition){
  int num;
  do{
    printf("donne %s :",keyWord);
    scanf("%d",&num);
  }while(num < minCondition || num > maxCondition);
  return num;
}
void editUser(){}
void removeUser(char *tab,int *startpoint){
  char nom[STRLENGTH];
  int found = 0,comp=0;
  printf("donne le nom du l utilusateur  a effacer:");
  scanf("%s",nom);
}
void listUsers(){}
void findUser(){}
void addObj(){}
void removeObj(){}
void editObj(){}
void listObjs(){}
void findObj(){}
void gestionDesAdherents(struct user tab[],int *startpoint){
     int choix,precise,i=0;
     char toAddUserNam[STRLENGTH];
     char toAddUserFam[STRLENGTH];
     /*           ****      list of choices can be done to user ****             */
     printf("choisir l'un de ces operation pour modifier votre adhérents:\n"); 
     printf("(1)Ajouter, modifier ou supprimer un adhérent\n");
     printf("(2)Afficher la liste des adhérents par ordre alphabétique (Prénom)\n");
     printf("(3)Chercher un adhérent par nom\n");
     scanf("%d",&choix);
     switch(choix){
          case 1:
            printf("(1)pour ajouter\n");
            printf("(2)pour modifier\n");
            printf("(3)pour supprimer\n");
            scanf("%d",&precise);
            switch(precise){
                case 1:
                    //addString(toAddUserFam,1,"e nom","utilusateur");
                    addString(toAddUserNam,1,"e prenom","utilusateur");
                    addString(toAddUserNam,1,"e prenom","utilusateur");
                    addString(toAddUserFam,0,"e nom","utilusateur");
                    printf("%s est ajouter en succee en %d\n",toAddUserFam,*startpoint + 1);
                    printf("%s est ajouter en succee en %d\n",toAddUserNam,*startpoint + 1);
                    strcpy(tab[*startpoint].famName,toAddUserFam);
                    strcpy(tab[*startpoint].name,toAddUserNam);
                    tab[*startpoint].age =addNum("l'age",minAge,maxAge);
                    *startpoint += 1;
                    break;
                case 2:
                    editUser();
                    break;
                case 3:
                    //removeUser(tab,startpoint);
                    break;
                default:
                    printf("Invalid");
                    break;
            }
            break;
          case 2:
            for(int i = 0; i < (*startpoint)-1; i++){
            printf("%s\n",tab);
            }
            listUsers();
            break;
          case 3:
            findUser();
            break;
          default:
            printf("Invalid");
            break;
      }
}
void gestionDesObjets(){}
void gestionDesReservations(){}

void main(){
  int input,startpoint=0,test=1;
  int *pointerStartPoint = &startpoint;
  size_t maxUsers = 100;
  struct user usersTab[maxUsers];
  while(test){
      printf("slvp selectioner l'un des choix:\n");
      printf("(1)Gestion des Adhérents\n");
      printf("(2)Gestion des Objets\n");
      printf("(3)Gestion des Réservations\n");
      printf("(4)Quit\n");
      scanf("%d",&input);
      switch(input){
          case 1:
            system(defaultOs);/*to clear up last changes*/
            gestionDesAdherents(usersTab,pointerStartPoint);/*calling the pros and passing the Tabel of users and the pointer of last point reach by the tab  */
            break;
          case 2:
            system(defaultOs);/*to clear up last changes*/
            gestionDesObjets();
            break;
          case 3:
            system(defaultOs);/*to clear up last changes*/
            gestionDesReservations();
            break;
          case 4:
            system(defaultOs);/*to clear up last changes*/
            printf("Thanks for using the app!");
            test = 0;
            break;
          default:
          printf("invalid!!");
          break;
      }
  }
}
/*this project is maid with love <3*/