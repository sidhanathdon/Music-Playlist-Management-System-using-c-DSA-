/**
 * @file header.h
 * @brief Contains function declarations and type definitions for the playlist manager.
 *
 * This header file defines the structure of a Node for a circular doubly linked list 
 * and declares functions used for managing the playlist.
 * 
 * Author: Sidhanath Verekar, Shubhang Rege
 * Date: 2024-10-21
   Modified: 2024-10-22
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @struct Node
 * @brief A node of the doubly linked list representing a song.
 */
struct Node {
    char data[40];             /**< Name of the song */
    struct Node* next;         /**< Pointer to the next song in the list */
    struct Node* prev;         /**< Pointer to the previous song in the list */
};

/* Function Declarations */
void insertMusic(); /* Insert music in playlist*/
void deleteMusic(); /* Delete music in playlist*/
void showPlaylist(); /* shows music playlist*/
void nextSong(); /* Plays the next song*/
void previousSong();  /* Plays the previous song*/
void firstSong();  /* Plays the first song*/
void lastSong();  /* Plays the last song*/
void searchMusic();  /* searches the song and places it*/

