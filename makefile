# Makefile for Music Playlist Management System
# This Makefile builds the Music_Playlist_Management executable by compiling
# main.c and operations.c into object files and then linking them together.
# Author: Sidhanath Verekar, Shubhang Rege
# Date: 2024-10-21
#updated 2024-10-23

# Rule to link object files and create the final executable
Music_Playlist_Management: main.o operations.o
	# Linking object files to create the final executable
	gcc -o Music_Playlist_Management main.o operations.o

# Rule to compile main.o from main.c and operations.o
main.o: main.c operations.c
	# Compiling main.c and operations.c into object files
	gcc -c main.c operations.c

# Rule to compile operations.o from operations.c and header.h
operations.o: operations.c header.h
	# Compiling operations.c into an object file
	gcc -c operations.c

# Clean target to remove object files and executable
clean:
	# Removing object files and the executable
	rm -f main.o operations.o Music_Playlist_Management

