#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STRLENGTH 50
void addUser(char newUser[]){
  char user[STRLENGTH];
  printf("donne le nom du l utilusateur :");
  scanf("%s",user);
  strcpy(newUser,user);   
}
void editUser(){}
void removeUser(char *tab,int *startpoint){
  char nom[STRLENGTH];
  int found = 0;
  printf("donne le nom du l utilusateur  a effacer:");
  scanf("%s",nom);
//   for(int i = 0; i < (*startpoint); i++){
//     found = (*nom)==(*(tab +(i * STRLENGTH)));
//     if (found)
//     {
//       printf("%s est effacer avec succee",nom);
//     }
//   }
// if(!found){
//   printf("introuvable");
// }
}
void listUsers(){}
void findUser(){}
void addObj(){}
void removeObj(){}
void editObj(){}
void listObjs(){}
void findObj(){}
void gestionDesAdherents(char *tab,int *startpoint){
     int choix,precise,i=0;
     char toAddUser[STRLENGTH];
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
                    addUser(toAddUser);
                    printf("%s est ajouter en succee en %d\n",toAddUser,*startpoint);
                    strcpy(tab +(STRLENGTH * (*startpoint)),toAddUser);
                    *startpoint += 1;
                    break;
                case 2:
                    editUser();
                    break;
                case 3:
                    removeUser(tab,startpoint);
                    break;
                default:
                    printf("Invalid");
                    break;
            }
            break;
          case 2:
            for(int i = 0; i < (*startpoint); i++){
            printf("%s\n",tab +(i * STRLENGTH));
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
  char usersTab[maxUsers][STRLENGTH]={};
  char *pusersTab = usersTab;
  while(test){
      printf("slvp selectioner l'un des choix:\n");
      printf("(1)Gestion des Adhérents\n");
      printf("(2)Gestion des Objets\n");
      printf("(3)Gestion des Réservations\n");
      printf("(4)Quit\n");
      scanf("%d",&input);
      switch(input){
          case 1:
            gestionDesAdherents(pusersTab,pointerStartPoint);
            break;
          case 2:
            gestionDesObjets();
            break;
          case 3:
            gestionDesReservations();
            break;
          default:
            printf("Thanks for using the app!");
            test = 0;
            break;
      }
  }
}