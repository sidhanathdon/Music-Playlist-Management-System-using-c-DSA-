/**
 * @file main.c
 * @brief Main menu for playlist management.
 *
 * This file contains the `main()` function which presents a menu-driven
 * interface for users to interact with the playlist manager.
 * 
 * Author: Sidhanath Verekar rollno:49 , Shubhang Rege rollno:46
 * Date: 2024-10-21
   modified:2024-10-22
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
            case 1: insertMusic(); break;
            case 2: deleteMusic(); break;
            case 3: showPlaylist(); break;
            case 4: nextSong(); break;
            case 5: previousSong(); break;
            case 6: firstSong(); break;
            case 7: lastSong(); break;
            case 8: searchMusic(); break;
            case 9: break;
            default: printf("Invalid input.\n");
        }
    } while (choice != 9);
    
    printf("Exited successfully.\n");
    return 0;
}

