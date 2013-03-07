
Playlist
========


Data Structures/Concepts Used:
==============================
Arrays, Structs, Linear Search


Description:
============
Implementation (function definitions) of two functions, named SEARCH and ADD.
The SEARCH function will search your music database for all mp3s that match specific criteria, 
based on any of the data variables described in your struct. The add function will allow a user
to add a specific mp3 to their playlist (which for right now, will be a simple text file), based
on the artist name and title. Finally, write the DRIVER (main) function that will read in data for
5 mp3 records from a file.  Mirror this input data and put the data for each mp3 in an array of STRUCTS.
Apply (call) the SEARCH method to locate each mp3 stored in your array. As it is found, output the results
of the search and add it to the playlist(i.e. .txt file).


Output:
=======
	Tacuma Solomon
	Computer Science 2 - Elementary Data Structures
	Description
	Write the implementation (function definitions) of two functions, named SEARCH a
	nd ADD.
	Your SEARCH function will search your music database for all mp3s that match sp
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
	
#####playlist.dat
	I Don't Care  
	Folie a Deux  
	Fall Out Boy
	Rock         
	10
	
	Blame it       
	Intuition
	Jaime Foxx 
	Hip-Hop
	5
	
	So Special
	Unfinished Business Riddim
	Mavado
	Dancehall
	8
	
	Blazing D Trail
	Wining Season
	Machel Montano
	Soca
	15
	
	Dead and Gone
	Paper Trail
	T.I. 
	Hip-Hop
	6
	

Input:
======
#####library.dat
	I Don't Care  
	Folie a Deux  
	Fall Out Boy
	Rock         
	10
	
	Blame it       
	Intuition
	Jaime Foxx 
	Hip-Hop
	5
	
	So Special
	Unfinished Business Riddim
	Mavado
	Dancehall
	8
	
	Blazing D Trail
	Wining Season
	Machel Montano
	Soca
	15
	
	Dead and Gone
	Paper Trail
	T.I. 
	Hip-Hop
	6
	