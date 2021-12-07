#include <stdio.h>
void addUser(){}
void removeUser(){}
void editUser(){}
void listUsers(){}
void findUser(){}
void addObj(){}
void removeObj(){}
void editObj(){}
void listObjs(){}
void findObj(){}
void gestionDesAdherents(){
     int choixl,precise;
     printf("choisir l'un de ces operation pour modifier votre adhérents:\n"); 
     printf("(1)Ajouter, modifier ou supprimer un adhérent\n");
     printf("(2)Afficher la liste des adhérents par ordre alphabétique (Prénom)\n");
     printf("(3)Chercher un adhérent par nom\n");
     scanf(">>%d",&choix);
     switch(choix){
          case 1:
            printf("(1)pour ajouter\n");
            printf("(2)pour modifier\n");
            printf("(3)pour supprimer\n");
            scanf(">>%d",&precise);
            switch(precise){
                case 1:
                    addUser();
                    break;
                case 2:
                    editUser();
                    break;
                case 3:
                    removeUser();
                    break;
                default:
                    printf("Invalid");
                    break;
            }
            break;
          case 2:
            listUsers();
            break;
          case 3:
            findUser()
            break;
          default:
            printf("Invalid");
            break;
      }
}
void gestionDesObjets(){}
void gestionDesReservations(){}

void main(){
  int input;
  while(1){
      printf("slvp selectioner l'un des choix:\n");
      printf("(1)Gestion des Adhérents\n");
      printf("(2)Gestion des Objets\n");
      printf("(3)Gestion des Réservations\n");
      printf("(4)Quit\n");
      scanf(">>%d",&input);
      switch(input){
          case 1:
            gestionDesAdherents();
            break;
          case 2:
            gestionDesObjets();
            break;
          case 3:
            break;
          case 4:
            gestionDesReservations();
            break;
          default:
            printf("Invalid");
            break;
      }
  }
}