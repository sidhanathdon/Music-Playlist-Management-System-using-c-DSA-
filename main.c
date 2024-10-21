/**
 * @file main.c
 * @brief Main menu for playlist management.
 *
 * This file contains the `main()` function which presents a menu-driven
 * interface for users to interact with the playlist manager.
 * 
 * Author: Sidhanath Verekar, Shubhang Rege
 * Date: 2024-10-21
 */

#include "header.h"
int main() {
    int choice;
    
    do {
        printf("\n------ Menu for Playlist -------\n");
        printf("1: Add music\n");
        printf("2: Remove music\n");
        printf("3: Show playlist\n");
        printf("4: Play next music\n");
        printf("5: Play previous music\n");
        printf("6: Play first music\n");
        printf("7: Play last music\n");
        printf("8: Search music\n");
        printf("9: Exit\n\n");
        
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: InsertMusic(); break;
            case 2: DeleteMusic(); break;
            case 3: ShowPlaylist(); break;
            case 4: NextSong(); break;
            case 5: PreviousSong(); break;
            case 6: FirstSong(); break;
            case 7: LastSong(); break;
            case 8: SearchMusic(); break;
            case 9: break;
            default: printf("Invalid input.\n");
        }
    } while (choice != 9);
    
    printf("Exited successfully.\n");
    return 0;
}

