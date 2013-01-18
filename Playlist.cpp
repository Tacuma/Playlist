//Tacuma Solomon
//@02580808
//SYCS 136 - Elementary Data Structures
//Assignment 2
//20 March 2009
//Description
//Write the implementation (function definitions) of two functions, named SEARCH and ADD.
//Your SEARCH function will search your music database for all mp3’s that match specific criteria, 
//based on any of the data variables described in your struct. The add function will allow a user
//to add a specific mp3 to their playlist (which for right now, will be a simple text file), based
//on the artist name and title. Finally, write the DRIVER (main) function that will read in data for
///5 mp3 records from a file.  Mirror this input data and put the data for each mp3 in an array of STRUCTS.
//Apply (call) the SEARCH method to locate each mp3 stored in your array. As it is found, output the results
//of the search and add it to the playlist(i.e. .txt file).

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct mp3  //playlist struct
{
	string name;
	string album;
	string artist;
	string genre;
	string play_count;
};


void search(mp3[], int);  // search function prototype
void add (mp3[],int, int); // add function prototype
void header(); // Prints student info
void Footer();

//driver
int main()
{
	ifstream inData;
	inData.open ("library.dat");
	int length= 5;
	int index=0;
	mp3 track[5];
    string choice;
	bool end=false;
	int num=0;
	header();
	cout << " <------------------------------------------------------------------------->" << endl
		 << " <-----------------------TaKuma's Finite Library-------------------------->" << endl
		 << " <------------------------------------------------------------------------->" << endl << endl;

	while (index<=(length-1)) // This loops fills the array of structs from the file
	{
		
		getline(inData, track[index].name);
		getline(inData, track[index].album);
		getline(inData, track[index].artist);
		getline(inData, track[index].genre);
		getline(inData, track[index].play_count);
		inData.ignore(5, '\n');
		cout <<"		Track Name: " << track[index].name << endl
			 <<"		Album     : " << track[index].album << endl
			 <<"		Artist    : " << track[index].artist << endl
			 <<"		Genre     : " << track[index].genre << endl
			 <<"		Play Count: " << track[index].play_count << endl << endl;
		index++;
			
	}
	cout << "                      ---- Database Loaded -----     " << endl << endl << endl;
	search(track, 5);
	int i=0;
	while (i<=4) // asks to write to make a playlist 4 times
	{
		cout << "          Do you want to contine adding songs from the Database?" << endl;
		cout << "                               y or n " << endl;
 		getline(cin, choice);
		if (choice=="y")
			search(track, 5);
		else if (choice=="n")
		{
			cout << "Thank you for using the finite playlist" << endl;
			Footer();
			system("pause");
			return 0;
		}
		i++;
	}
	return 0;
}


void search (mp3 song[], int num) //search function
{
	bool found = false;
	cout << setw(10) <<" ";
	cout << "Please Type a Track name, or artist to add to Playlist. "<< endl;
	cout << setw(10) <<" ";
	string key;
	getline(cin, key);
	for (int i=0;i<num;i++) {
		if ((key == song[i].name) || (key == song[i].album) || ( key == song[i].artist)  )
		{
			cout << "Your Song has been found and added to your playlist" << endl << endl;
			cout << " ----------------------------------------------------------------------- " << endl;
			cout << "              Track Name: " << song[i].name << endl;
			cout << "              Album     : " << song[i].album << endl;
			cout << "              Artist    : " << song[i].artist << endl;
			cout << "              Genre     : " << song[i].genre << endl;
			cout << "              Play Count: " << song[i].play_count << endl;
			cout << " ----------------------------------------------------------------------- " << endl << endl;
			found =true;
			//add(song, 5, i);
		}
	}
	if (found = false)
		cout << "Song not found. Please try again." << endl;
}

void add (mp3 song[], int num, int position) // adds funciton to the file "playlist.txt"
{
			ofstream outData;
			outData.open("playlist.txt");
			outData << "Track Name: " << song[position].name << endl;
			outData << "Album     : " << song[position].album << endl;
			outData << "Artist    : " << song[position].artist << endl;
			outData << "Genre     : " << song[position].genre << endl;
			outData << "Play Count: " << song[position].play_count << endl;
}
void header() // Prints my information
{
	cout << "Tacuma Solomon " << endl;
	cout << "Computer Science 2 - Elementary Data Structures" << endl;
	cout << "Description" << endl;
	cout << "Write the implementation (function definitions) of two functions, named SEARCH and ADD." << endl;
	cout << "Your SEARCH function will search your music database for all mp3’s that match specific criteria, " << endl;
	cout << "based on any of the data variables described in your struct. The add function will allow a user" << endl;
	cout << "to add a specific mp3 to their playlist (which for right now, will be a simple text file), based" << endl;
	cout << "on the artist name and title. Finally, write the DRIVER (main) function that will read in data for" << endl;
	cout << "5 mp3 records from a file.  Mirror this input data and put the data for each mp3 in an array of STRUCTS." << endl;
	cout << "Apply (call) the SEARCH method to locate each mp3 stored in your array. As it is found, output the results" << endl;
	cout << "of the search and add it to the playlist(i.e. .txt file)." << endl << endl;
}

void Footer()
{
	cout << endl << endl;
	cout << "() Code by Tacuma Solomon " << endl;
	cout << "() Not for Redistribution or Reuse." << endl << endl;
}

/*
Tacuma Solomon
Computer Science 2 - Elementary Data Structures
Description
Write the implementation (function definitions) of two functions, named SEARCH a
nd ADD.
Your SEARCH function will search your music database for all mp3Æs that match sp
ecific criteria,
based on any of the data variables described in your struct. The add function wi
ll allow a user
to add a specific mp3 to their playlist (which for right now, will be a simple t
ext file), based
on the artist name and title. Finally, write the DRIVER (main) function that wil
l read in data for
5 mp3 records from a file.  Mirror this input data and put the data for each mp3
 in an array of STRUCTS.
Apply (call) the SEARCH method to locate each mp3 stored in your array. As it is
 found, output the results
of the search and add it to the playlist(i.e. .txt file).

 <------------------------------------------------------------------------->
 <-----------------------TaKuma's Finite Library-------------------------->
 <------------------------------------------------------------------------->

                Track Name: I Don't Care
                Album     : Folie a Deux
                Artist    : Fall Out Boy
                Genre     : Rock
                Play Count: 10

                Track Name: Blame it
                Album     : Intuition
                Artist    : Jaime Foxx
                Genre     : Hip-Hop
                Play Count: 5

                Track Name: So Special
                Album     : Unfinished Business Riddim
                Artist    : Mavado
                Genre     : Dancehall
                Play Count: 8

                Track Name: Blazing D Trail
                Album     : Wining Season
                Artist    : Machel Montano
                Genre     : Soca
                Play Count: 15

                Track Name: Dead and Gone
                Album     : Paper Trail
                Artist    : T.I.
                Genre     : Hip-Hop
                Play Count: 6

                      ---- Database Loaded -----


          Please Type a Track name, or artist to add to Playlist.
          Fall Out Boy
Your Song has been found and added to your playlist

 -----------------------------------------------------------------------
              Track Name: I Don't Care
              Album     : Folie a Deux
              Artist    : Fall Out Boy
              Genre     : Rock
              Play Count: 10
 -----------------------------------------------------------------------

          Do you want to contine adding songs from the Database?
                               y or n
y
          Please Type a Track name, or artist to add to Playlist.
          Mavado
Your Song has been found and added to your playlist

 -----------------------------------------------------------------------
              Track Name: So Special
              Album     : Unfinished Business Riddim
              Artist    : Mavado
              Genre     : Dancehall
              Play Count: 8
 -----------------------------------------------------------------------

          Do you want to contine adding songs from the Database?
                               y or n
y
          Please Type a Track name, or artist to add to Playlist.
          Machel Montano
Your Song has been found and added to your playlist

 -----------------------------------------------------------------------
              Track Name: Blazing D Trail
              Album     : Wining Season
              Artist    : Machel Montano
              Genre     : Soca
              Play Count: 15
 -----------------------------------------------------------------------

          Do you want to contine adding songs from the Database?
                               y or n
n
Thank you for using the finite playlist


() Code by Tacuma Solomon
() Not for Redistribution or Reuse.

Press any key to continue . . .
*/