/**
 * @file operations.c
 * @brief Implements the playlist operations using a circular doubly linked list.
 *
 * This file contains the function definitions for operations such as inserting, deleting, 
 * and displaying songs in the playlist. The playlist is represented as a circular doubly linked list.
 * 
 * Author: Sidhanath Verekar rollno:49 , Shubhang Rege rollno:46
 * Date: 2024-10-21
 */

#include "header.h"

/* Global Variables */
struct Node* head = NULL;         /**< Head of the playlist */
struct Node* current_node = NULL; /**< Pointer to the current playing song */
char song_buffer[40];             /**< Temporary buffer for song input */

/**
 * @brief Inserts a new song into the playlist.
 * @pre None
 * @post The song is added at the end of the playlist and the list remains circular.
 */
void insertMusic() {
    printf("Enter the music name:\n");
    while ((getchar()) != '\n');  // Clear input buffer
    scanf("%[^\n]%*c", song_buffer);  // Read input till newline
    
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    strcpy(newnode->data, song_buffer);
    
    if (head == NULL) {
        newnode->next = newnode->prev = newnode;
        head = current_node = newnode;
        printf("Music added to the playlist.\n");
        return;
    }
    
    struct Node* last = head->prev;
    newnode->prev = last;
    last->next = newnode;
    newnode->next = head;
    head->prev = newnode;
    printf("Music added to the playlist.\n");
}

/**
 * @brief Deletes a song from the playlist.
 * @pre The playlist must have at least one song.
 * @post The song is removed, and the list remains circular.
 */
void deleteMusic() {
    if (head == NULL) {
        printf("There is no music to delete.\n");
        return;
    }
    
    printf("Enter the music to delete:\n");
    while ((getchar()) != '\n');  // Clear input buffer
    scanf("%[^\n]%*c", song_buffer);
    
    struct Node* ptr = head;
    do {
        if (strcmp(ptr->data, song_buffer) == 0) {
            if (ptr->next == ptr) {  // Only one node
                printf("One file is deleted! Playlist is empty now.\n");
                head = NULL;
                free(ptr);
                return;
            }
            struct Node* previous_song= ptr->prev;
            struct Node* next_song= ptr->next;
            prev->next = next_song;
            next->prev = previous_song;
            if (ptr == head) {
                head = next;
            }
            free(ptr);
            printf("Music deleted!\n");
            return;
        }
        ptr = ptr->next;
    } while (ptr != head);
    
    printf("No matching music file found.\n");
}

/**
 * @brief Displays the playlist.
 * @pre The playlist must contain at least one song.
 * @post Outputs the entire playlist in order.
 */
void showPlaylist() {
    if (head == NULL) {
        printf("No music in the playlist.\n");
        return;
    }
    
    struct Node* show_ptr = head;
    int i = 1;
    printf("\nDisplaying Playlist:\n");
    do {
        printf("Song %d: %s\n", i, show_ptr->data);
        i++;
        show_ptr = show_ptr->next;
    } while (show_ptr != head);
}

/**
 * @brief Plays the next song in the playlist.
 * @pre The playlist must not be empty.
 * @post The next song is played.
 */
void nextSong() {
    if (current_node == NULL) {
        printf("No songs in the playlist!\n");
        return;
    }
    current_node = current_node->next;
    printf("Playing song: %s\n", current_node->data);
}

/**
 * @brief Plays the previous song in the playlist.
 * @pre The playlist must not be empty.
 * @post The previous song is played.
 */
void previousSong() {
    if (current_node == NULL) {
        printf("No songs in the playlist!\n");
        return;
    }
    current_node = current_node->prev;
    printf("Playing song: %s\n", current_node->data);
}

/**
 * @brief Plays the first song in the playlist.
 * @pre The playlist must not be empty.
 * @post The first song is played.
 */
void firstSong() {
    if (head == NULL) {
        printf("No songs in the playlist!\n");
        return;
    }
    current_node = head;
    printf("Playing first song: %s\n", head->data);
}

/**
 * @brief Plays the last song in the playlist.
 * @pre The playlist must not be empty.
 * @post The last song is played.
 */
void lastSong() {
    if (head == NULL) {
        printf("No songs in the playlist!\n");
        return;
    }
    current_node = head->prev;
    printf("Playing last song: %s\n", head->prev->data);
}

/**
 * @brief Searches for a specific song in the playlist.
 * @pre The playlist must not be empty.
 * @post If found, the song is played.
 */
void searchMusic() {
    if (head == NULL) {
        printf("No music to search.\n");
        return;
    }
    
    printf("Enter the music to search:\n");
    while ((getchar()) != '\n');  // Clear input buffer
    scanf("%[^\n]%*c", song_buffer);
    
    struct Node* ptr = head;
    do {
        if (strcmp(ptr->data, song_buffer) == 0) {
            printf("Music found!\n");
            printf("Playing song: %s\n", ptr->data);
            return;
        }
        ptr = ptr->next;
    } while (ptr != head);
    
    printf("Searched music is not found.\n");
}
