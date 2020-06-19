/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** helper
*/

#include "my_rpg.h"

static void how_to_lunch(void)
{
    my_putstr("------------------------\n");
    my_putstr("How to launch ?\n");
    my_putstr("------------------------\n");
    my_putstr("\n");
    my_putstr("Pour lancer le jeu vous devez faire :\n");
    my_putstr("./my_rpg\n");
    my_putstr("Vous avez deux choix :\n");
    my_putstr("   - Lancer une nouvelle partie.\n");
    my_putstr("   - Charger une ancienne.\n");
    my_putstr("\n");
    my_putstr("Si vous lancez une nouvelle partie, vous p");
    my_putstr("erdrez une enventuelle sauvegarde.\n");
    my_putstr("La partie est automatiquement sauvegardée lorsque q");
    my_putstr("ue vous quittez le jeu normalement.\n");
    my_putstr("Vous pouvez controler la langue et le son dans le m");
    my_putstr("enu option, les changements sont pris en compte en c");
    my_putstr("hangeant de menu.\n");
    my_putstr("\n");
    my_putstr("Bon jeu à vous !\n");
    my_putstr("\n\n");
}

static void how_to_fight(void)
{
    my_putstr("\n\n");
    my_putstr("------------------------\n");
    my_putstr("How to fight ?\n");
    my_putstr("------------------------\n");
    my_putstr("\n");
    my_putstr("Déroulement du combat : \n");
    my_putstr("  - le joueur attaque en premier, il devra choisir le type d'a");
    my_putstr("ttaque qu'il veut utiliser puis l'ennemi qu'il veut attaquer\n");
    my_putstr("  - ensuite le ou les ennemi(s) attaque(nt)\n");
    my_putstr("  - le combat ce termine lorsque tous les ennemis ou le joueur");
    my_putstr(" n'ont plus de vie\n");
    my_putstr("  - vous pouvez aussi interrompre le combat en fuyant (ECHAP) ");
    my_putstr("mais cela vous donne des malus\n");
    my_putstr("\n");
    my_putstr("Les différentes touches : \n");
    my_putstr("  - [Z] -> déplacer le curseur vers le haut\n");
    my_putstr("  - [S] -> déplacer le curseur vers le bas\n");
    my_putstr("  - [SPACE] -> valider une action ou un ennemi\n");
    my_putstr("  - [Q] -> changer de colonne après avoir valider une action\n");
}

static void how_to_play(void)
{
    my_putstr("\n");
    my_putstr("(le scénario n'est pas implémenté, seule l'arène est fonctio");
    my_putstr("nnelle)\n");
    my_putstr("\n\n");
    my_putstr("------------------------\n");
    my_putstr("How to play ?\n");
    my_putstr("------------------------\n");
    my_putstr("\n");
    my_putstr("[Z] -> Aller vers le haut.\n");
    my_putstr("[S] -> Aller vers le bas.\n");
    my_putstr("[D] -> Aller vers la droite.\n");
    my_putstr("[Q] -> Aller vers la gauche.\n");
    my_putstr("[ESCAPE] -> Menu Pause\n");
    my_putstr("[TOUCHE E] -> L'inventaire (non fonctionnel)\n");
    my_putstr("[TOUCHE C] -> Lancer un combat si vous êtes dans l'arène\n");
    my_putstr("[CLIQUE GAUCHE] -> Entrer dans les batiments\n");
    how_to_fight();
    my_putstr("\n\n");
    how_to_lunch();
}

void helper(void)
{
    my_putstr("\n");
    my_putstr("------------------------\n");
    my_putstr(" my_rpg\n");
    my_putstr("------------------------\n");
    my_putstr("\n");
    my_putstr("Vous êtes actuellement dans une époque futuriste !\n");
    my_putstr("Vous venez de débarquer dans un des quartiers malfamés du b");
    my_putstr("as fond de cette ville.\n");
    my_putstr("Votre but est de finir le contrat qui vous a été donné :\n");
    my_putstr("Vous devez retrouver un certain 'John Carter' et vous en déb");
    my_putstr("arrasser une bonne fois pour toutes.\n");
    my_putstr("Vous n'en savez, malheureusement, pas plus sur lui, le bar ser");
    my_putstr("a donc surement un bon début pour trouver plus informations.\n");
    my_putstr("\n");
    my_putstr("Si vous voulez vous entraîner au combat, direction l'arène c");
    my_putstr("landestine à l'EST du quartier.\nSi vous voulez changer de l");
    my_putstr("ook, allez au coiffer, vendeur de vetemenst ou à l'armurier\n");
    my_putstr("Bonne chance ! Et ramènez moi sa tête si vous voulez votre a");
    my_putstr("rgent.\n");
    how_to_play();
}