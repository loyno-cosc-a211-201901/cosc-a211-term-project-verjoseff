/* My program is a music directory that looks up facts about specific songs. 
It classifies them according to their genres using a database system, which the user will have in mind when choosing a specific song to know more about. 
I aim to use three different genres, and then provide three songs from each of them.
At the start of the program, the user is provided with a list of genres to choose from. 
For example, if he chooses the garage rock genre, the program will then provide a list of garage rock songs for him to choose to know more about. 
My program uses input validation to try to restrict user input to what's being asked.
For example, if the user enters a character instead of the requested number, my program will let him know that he has entered an invalid value.
For this type of program, I will use text files for the songs.

Companion playlist: https://open.spotify.com/playlist/3wjWMqw7j5LFEngjWjabIN?si=xeFRk8-3SAOPNLK5loNJqA */

#include <iostream>
#include <fstream>
using namespace std;

// Database of songs from every genre listed
int playSongs (int genre);

// List of genres
void genreList ();

int main () 
{
    // music player main function
    cout << "Welcome to the Alt Word!\n";
    genreList(); // uses the genre selection function, which in turn uses the song selection function
    return 0;
}

int playSongs (int genre)
{
        bool quit = false; // keeps the program open
        if (genre == 1)
        {
                int britInput;
                while (quit == false)
                {
                        // list of songs for Britpop
                        cout << endl;
                        cout << "Britpop:\n";
                        cout << "1. There She Goes - The La's\n";
                        cout << "2. Wonderwall - Oasis\n";
                        cout << "3. Bitter Sweet Symphony - The Verve\n";
                        cout << "4. Back to genre list\n";
                        cout << endl;
                        cout << "Select a song: ";
                        cin >> britInput;
                        cout << endl;
                        
                        switch (britInput) 
                        {
                                case 1:  
                                {
                                        ifstream brit1("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Britpop songs/thereshegoes.txt");
                                        string thereshegoes; // opens a text file of information for each song

                                        if (brit1.is_open())
                                        {
                                                getline(brit1, thereshegoes); // reads each line of text in specific text file

                                                while (brit1)
                                                {
                                                        cout << thereshegoes << endl; // displays each line of text in file
                                                        getline (brit1, thereshegoes);
                                                }
                                        }
                                        brit1.close(); // closes the file
                                        break;
                                }

                                case 2: 
                                { 
                                        ifstream brit2("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Britpop songs/wonderwall.txt");
                                        string wonderwall;

                                        if (brit2.is_open())
                                        {
                                                getline(brit2, wonderwall);

                                                while (brit2)
                                                {
                                                        cout << wonderwall << endl;
                                                        getline (brit2, wonderwall);
                                                }
                        
                                        }
                                        brit2.close();
                                        break;
                                }

                                case 3: 
                                { 
                                        ifstream brit3("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Britpop songs/bittersweet_symphony.txt");
                                        string bittersweet;

                                        if (brit3.is_open())
                                        {
                                                getline(brit3, bittersweet);

                                                while (brit3)
                                                {
                                                        cout << bittersweet << endl;
                                                        getline (brit3, bittersweet);
                                                }
                        
                                        }
                                        brit3.close();
                                        break;
                                }

                                case 4: cout << "Returning to genre selection...\n";
                                        quit = true; // redirects to genre selection function
                                        break;
                                default: cout << "Invalid value, try again!\n";     
                        }

                        // input validation for the uninitiated user
                        if (cin.fail())
                        {
                                cin.clear();
                                cin.ignore();
                                cin >> britInput;
                        }
                }
                return 1;
        }
        else if (genre == 2)
        {
                while (quit == false)
                {
                        int garageInput;
                        // list of songs for garage rock
                        cout << endl;
                        cout << "Garage rock:\n";
                        cout << "1. Fluorescent Adolescent - Arctic Monkeys\n";
                        cout << "2. Reptilia - The Strokes\n";
                        cout << "3. Maps - Yeah Yeah Yeahs\n";
                        cout << "4. Back to genre list\n";
                        cout << endl;
                        cout << "Select a song: ";
                        cin >> garageInput;
                        cout << endl;

                        // user plays a song from the provided list
                        switch (garageInput)
                        {
                                case 1: 
                                { 
                                        ifstream garage1("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Garage rock songs/fluorescent_adolescent.txt");
                                        string fluorescent;

                                        if (garage1.is_open())
                                        {
                                                getline(garage1, fluorescent);

                                                while (garage1)
                                                {
                                                        cout << fluorescent << endl;
                                                        getline (garage1, fluorescent);
                                                }
                        
                                        }
                                        garage1.close();
                                        break;
                                }

                                case 2: 
                                { 
                                        ifstream garage2("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Garage rock songs/reptilia.txt");
                                        string reptilia;

                                        if (garage2.is_open())
                                        {
                                                getline(garage2, reptilia);

                                                while (garage2)
                                                {
                                                        cout << reptilia << endl;
                                                        getline (garage2, reptilia);
                                                }
                        
                                        }
                                        garage2.close();
                                        break;
                                }
                                
                                case 3: 
                                { 
                                        ifstream garage3("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Garage rock songs/maps.txt");
                                        string maps;

                                        if (garage3.is_open())
                                        {
                                                getline(garage3, maps);

                                                while (garage3)
                                                {
                                                        cout << maps << endl;
                                                        getline (garage3, maps);
                                                }
                        
                                        }
                                        garage3.close();
                                        break;
                                }

                                case 4: cout << "Returning to genre selection...\n";
                                        quit = true;
                                        break;
                                default: cout << "Invalid value, try again!\n";
                        }

                        // input validation
                        if (cin.fail())
                        {
                                cin.clear();
                                cin.ignore();
                                cin >> garageInput;
                        }
                }
                return 1;
        }
        else if (genre == 3)
        {
                while (quit == false)
                {
                        int classicInput;
                        // list of songs for classic alternative
                        cout << endl;
                        cout << "Classic alternative:\n";
                        cout << "1. Start Choppin - Dinosaur Jr\n";
                        cout << "2. Ooh La La - Faces\n";
                        cout << "3. Sweet Jane - The Velvet Underground\n";
                        cout << "4. Back to genre list\n";
                        cout << endl;
                        cout << "Select a song: ";
                        cin >> classicInput;
                        cout << endl;

                        // user plays a song from the provided list
                        switch (classicInput)
                        {
                                case 1: 
                                { 
                                        ifstream classic1("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Classic alternative songs/start_choppin.txt");
                                        string choppin;

                                        if (classic1.is_open())
                                        {
                                                getline(classic1, choppin);

                                                while (classic1)
                                                {
                                                        cout << choppin << endl;
                                                        getline (classic1, choppin);
                                                }
                        
                                        }
                                        classic1.close();
                                        break;
                                }
                                
                                case 2: 
                                { 
                                        ifstream classic2("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Classic alternative songs/oohlala.txt");
                                        string oohlala;

                                        if (classic2.is_open())
                                        {
                                                getline(classic2, oohlala);

                                                while (classic2)
                                                {
                                                        cout << oohlala << endl;
                                                        getline (classic2, oohlala);
                                                }
                        
                                        }
                                        classic2.close();
                                        break;
                                }
                                
                                case 3: 
                                { 
                                        ifstream classic3("/Users/sheilalumod/Documents/GitHub/cosc-a211-term-project-verjoseff/Classic alternative songs/sweet_jane.txt");
                                        string sweetjane;

                                        if (classic3.is_open())
                                        {
                                                getline(classic3, sweetjane);

                                                while (classic3)
                                                {
                                                        cout << sweetjane << endl;
                                                        getline (classic3, sweetjane);
                                                }
                        
                                        }
                                        classic3.close();
                                        break;
                                }
                                
                                case 4: cout << "Returning to genre selection...\n";
                                        quit = true;
                                        break;
                                default: cout << "Invalid value, try again!\n";
                        }

                        // input validation
                        if (cin.fail())
                        {
                                cin.clear();
                                cin.ignore();
                                cin >> classicInput;
                        }
                }
                return 1;
        }
}

void genreList ()
{
    int genreChoice;
    bool exit = false; // keeps the program open
    do
    {
        cout << endl;
        cout << "1. Britpop\n";
        cout << "2. Garage rock\n";
        cout << "3. Classic alternative\n";
        cout << "4. Exit\n";
        cout << endl;
        cout << "Select your genre: ";
        cin >> genreChoice;

        switch (genreChoice)
        {
                case 1: cout << "You selected Britpop.\n";
                        break;
                case 2: cout << "You selected garage rock.\n";
                        break;
                case 3: cout << "You selected classic alternative.\n";
                        break;
                case 4: cout << "Thanks for using the Alt Word, see you again!\n";
                        exit = true; // exits the program
                        break;
                default: cout << "Invalid value, try again!\n";
        }

        // input validation for uninitiated users
        if (cin.fail())
        {
                cin.clear();
                cin.ignore();
                cin >> genreChoice;
        }
    } 
    while(playSongs(genreChoice) == 1 && exit == false); // uses the song selection function back and forth
}