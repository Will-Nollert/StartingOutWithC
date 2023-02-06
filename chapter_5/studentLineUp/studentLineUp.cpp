
//____________________________Sudo Code___________________________________________

//headers, iostream, string, fstream
//using namespace std

//use ifstream to declare local var name for file after import 
//use STRING to delcare the users input for name of the file 
//Use STRING to decalre a big string that will hold all the names of students in class

//get the filename from the user

//check if file exsists 
    //if inputFile
        //while(inputFile >> number){ read names into local var name strings }
    //close the file
    //else 
        //display error 

//end the program 



//__________________________File Reading Notes_____________________________________

//Use fstream header for files access 
//File Stream types:
    //ifstream for input from a file 
    //ofstream for output to a file
    //fstream for input or output for a file 

//Deine file objects 
    //ifstream infile;
    //ofstream outfile; 

//Opening Files 
    //infile.open("example.txt")
    //outfile.opne("example.txt")
        //testing 

        //infile.open("exaple.txt");
        //  if(!infile){ cout << 'File open failed'}
        //can also use fail member function 

//Using Files 
    //Can use inout files objects and >> to copy data from files to vars   
        //infile >> partNum 

//Using loops to process files 
    //The stream extraction opperatotr >> returns True with data and false otherwise. 
    //Can be tested in  while loop while( inputFile >> number)
    
//Closing Files 
    //use the close member function     
    // infile.close()
    //outfile.close()


