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
void InsertMusic(); /* Insert music in playlist*/
void DeleteMusic(); /* Delete music in playlist*/
void ShowPlaylist(); /* shows music playlist*/
void NextSong(); /* Plays the next song*/
void PreviousSong();  /* Plays the previous song*/
void FirstSong();  /* Plays the first song*/
void LastSong();  /* Plays the last song*/
void SearchMusic();  /* searches the song and places it*/

