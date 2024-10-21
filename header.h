/**
 * @file header.h
 * @brief Contains function declarations and type definitions for the playlist manager.
 *
 * This header file defines the structure of a Node for a circular doubly linked list 
 * and declares functions used for managing the playlist.
 * 
 * Author: Sidhanath Verekar, Shubhang Rege
 * Date: 2024-10-21
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
void InsertMusic();
void DeleteMusic();
void ShowPlaylist();
void NextSong();
void PreviousSong();
void FirstSong();
void LastSong();
void SearchMusic();

