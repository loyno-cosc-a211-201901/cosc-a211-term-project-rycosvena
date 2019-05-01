// file location constants complete
// openAndCheckFiles() function complete
// getComicInfo() function complete
// writeToFiles() function I think is complete
// recallFiles() function I think is complete
// closeFiles() function I think is complete
// save_comic_files(), loadComicFiles(), and listComics() functions need to be started
	/*move the file-write operation into a "save comic files" function that writes a single
	  comic (from the in-memory arrays or vectors) to the storage files. From there, you can 
	  stub out a complete menu system that adds "load comic files" and "list comics".*/
// global for each variable arrays/Vectors NEED to be incorporated (cpmpleted)
	//with sort and searches
// Incorporate all functions into main (completed I think)
// probably need cases for each input user preference (completed)
// Vectors w/ sets
// Default case needs to be fixed. It doesn't work as is.




// Program Name: Comic Book Organizer
/* Purpose: To display and organize the comics inputted. Should display
 * the comics' series name, issue name, issue number, author, and main artist.
 * Hopefully it will organize these titles by the users selected parameters. */
// Author: Kyla Evans
// Date Last Modified: 5/1/19
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <set>
using namespace std;

// Constants for file calling and usage
const string LOCATION_OF_FILES = "C:\\Users\\Witle\\Documents\\GitHub\\cosc-a211-term-project-rycosvena\\Final Project Submission\\";
const string SERIES_NAME_FILE = LOCATION_OF_FILES + "series.txt";
const string ISSUE_NAME_FILE = LOCATION_OF_FILES + "issue.txt";
const string AUTHOR_FILE = LOCATION_OF_FILES + "author.txt";
//const string ARTIST_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string COLORIST_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string ISSUE_NUMBER_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string VARIANT_LETTER_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string PUBLISH_DATE_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string CONDITION_RATING_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
const string PRICE_PAID_FILE = LOCATION_OF_FILES + "price_paid.txt";


//fstream series_namefile, issue_namefile, authorfile;, artistfile, coloristfile, issue_numberfile, variant_letterfile, publish_datefile, conditionfile, price_payedfile;
ofstream series_namefile, issue_namefile, author_file, artist_file, colorist_file, issue_numberfile, variant_letterfile, publish_datefile, condition_file, price_paidfile;
ifstream seriesnamefile, issuenamefile, authorfile, artistfile, coloristfile, issuenumberfile, variantletterfile, publishdatefile, conditionfile, pricepaidfile;
const int MAX_NUM_OF_COMICS = 500;
int numberOfComics = 0;
string seriesName[MAX_NUM_OF_COMICS];					// the complete title of the series
string issueName[MAX_NUM_OF_COMICS];					// some comics have specific names for the issue
string author[MAX_NUM_OF_COMICS];						// enter full name
//string artistOrPenciller[MAX_NUM_OF_COMICS];				// the drawer
//string colorist[MAX_NUM_OF_COMICS];						// the colorer
//int issueNumber[MAX_NUM_OF_COMICS];						// the number assighned to an issue in a series
//char variantLetter[MAX_NUM_OF_COMICS];					// this letter corresponds w/ the different cover arts available for an issue (some are valuable than others)
//string publishDate[MAX_NUM_OF_COMICS];					// the date published
//string conditionRating[MAX_NUM_OF_COMICS];
float pricePaid[MAX_NUM_OF_COMICS];
// Use getline for the strings

bool openAndCheckOFiles()			// checks and opens the comic info writing files
{
	series_namefile.open(SERIES_NAME_FILE);
	if (!series_namefile)
	{
		cout << "Series name file open failure" << endl;
		cout << SERIES_NAME_FILE << endl;
	}
	else
	{
		cout << " Series name file open success." << endl;
	}
	issue_namefile.open(ISSUE_NAME_FILE);
	if (!issue_namefile)
	{
		cout << "Issue name file open failure" << endl;
		cout << ISSUE_NAME_FILE << endl;
	}
	else
	{
		cout << " Issue name file open success." << endl;
	}
	author_file.open(AUTHOR_FILE);
	if (!author_file)
	{
		cout << "Author file open failure" << endl;
		cout << AUTHOR_FILE << endl;
	}
	else
	{
		cout << " Author file open success." << endl;
	}
/*
	artist_file.open(ARTIST_FILE);
	if (!artist_file)
	{
		cout << "Artist file open failure" << endl;
		cout << ARTIST_FILE << endl;
	}
	colorist_file.open(COLORIST_FILE);
	if (!colorist_file)
	{
		cout << "Colorist file open failure" << endl;
		cout << COLORIST_FILE << endl;
	}
	issue_numberfile.open(ISSUE_NUMBER_FILE);
	if (!issue_numberfile)
	{
		cout << "Issue number file open failure" << endl;
		cout << ISSUE_NUMBER_FILE << endl;
	}
	variant_letterfile.open(VARIANT_LETTER_FILE);
	if (!variant_letterfile)
	{
		cout << "Variant letter file open failure" << endl;
		cout << VARIANT_LETTER_FILE << endl;
	}
	series_namefile.open(PUBLISH_DATE_FILE);
	if (!series_namefile)
	{
		cout << "Series name file open failure" << endl;
		cout << SERIES_NAME_FILE << endl;
	}
	condition_file.open(CONDITION_RATING_FILE);
	if (!condition_file)
	{
		cout << "Condition file open failure" << endl;
		cout << CONDITION_RATING_FILE << endl;
	}*/
	price_paidfile.open(PRICE_PAID_FILE);
	if (!price_paidfile)
	{
		cout << "Price paid file open failure" << endl;
		cout << PRICE_PAID_FILE << endl;
	}

	cout << endl;
	return 0;
}
bool openAndCheckIFiles()			// checks and opens the comic info reading files
{
	seriesnamefile.open(SERIES_NAME_FILE);
	if (!seriesnamefile)
	{
		cout << "Series name file open failure" << endl;
		cout << SERIES_NAME_FILE << endl;
	}
	else
	{
		cout << " Series name file open success." << endl;
	}
	issuenamefile.open(ISSUE_NAME_FILE);
	if (!issuenamefile)
	{
		cout << "Issue name file open failure" << endl;
		cout << ISSUE_NAME_FILE << endl;
	}
	else
	{
		cout << " Issue name file open success." << endl;
	}
	authorfile.open(AUTHOR_FILE);
	if (!authorfile)
	{
		cout << "Author file open failure" << endl;
		cout << AUTHOR_FILE << endl;
	}
	else
	{
		cout << " Author file open success." << endl;
	}
/*
	artistfile.open(ARTIST_FILE);
	if (!artistfile)
	{
		cout << "Artist file open failure" << endl;
		cout << ARTIST_FILE << endl;
	}
	else
	{
		cout << " Artist file open success." << endl;
	}
	coloristfile.open(COLORIST_FILE);
	if (!coloristfile)
	{
		cout << "Colorist file open failure" << endl;
		cout << COLORIST_FILE << endl;
	}
	else
	{
		cout << " Colorist file open success." << endl;
	}
	issuenumberfile.open(ISSUE_NUMBER_FILE);
	if (!issuenumberfile)
	{
		cout << "Issue number file open failure" << endl;
		cout << ISSUE_NUMBER_FILE << endl;
	}
	else
	{
		cout << " Issue number file open success." << endl;
	}
	variantletterfile.open(VARIANT_LETTER_FILE);
	if (!variantletterfile)
	{
		cout << "Variant letter file open failure" << endl;
		cout << VARIANT_LETTER_FILE << endl;
	}
	else
	{
		cout << " Variant letter file open success." << endl;
	}
	publishdate.open(PUBLISH_DATE_FILE);
	if (!publishdatefile)
	{
		cout << "Publish date file open failure" << endl;
		cout << PUBLISH_DATE_FILE_ << endl;
	}
	else
	{
		cout << " Publish date file open success." << endl;
	}
	conditionfile.open(CONDITION_RATING_FILE);
	if (!conditionfile)
	{
		cout << "Condition file open failure" << endl;
		cout << CONDITION_RATING_FILE << endl;
	}
	else
	{
		cout << " Condition rating file open success." << endl;
	}*/
	pricepaidfile.open(PRICE_PAID_FILE);
	if (!pricepaidfile)
	{
		cout << "Price paid file open failure" << endl;
		cout << PRICE_PAID_FILE << endl;
	}
	else
	{
		cout << " Price paid file open success." << endl;
	}

	cout << endl;
	return 0;
}
int getComicInfo()			// gets all of the comics' information from the user
{
	int comicInfo;
	cout << "Please enter series name." << endl;
	getline(cin, seriesName[numberOfComics]);
	
	
	cout << "Please enter issue name, if applicable." << endl;
	getline(cin, issueName[numberOfComics]); // Can be considered a subtitle
	
	cout << "Please enter author's name." << endl;
	getline(cin, author[numberOfComics]);
	
	/*cout << "Please enter the artist's or penciller's name." << endl;
	getline(cin, artistOrPenciller[0]); // Comics can say either
	cout << "Please enter colorist's name." << endl;
	getline(cin, colorist[0]); // The artist usually only draws, not colors
	cout << "Please enter issue number." << endl;
	 cin >> issueNumber[0];
	cout << "Please enter variant letter." << endl;
	 cin >> variantLetter[0];
	cout << "Please enter the publish date. Separate the month and year with a slash if necessary." << endl;
	 cin >> publishDate[0]; // string/getline didn't work.
	cout << "Please enter condition rating. (Use letter notation)." << endl;
	 cin >> conditionRating[0]; // Letter rating system prefered*/
	cout << "Please enter the price you paid for the comic. (DO NOT PUT COMMAS)" << endl;
	 cin >> pricePaid[numberOfComics];
	cout << endl;


	
	return (comicInfo);
}
int writeToFiles()			// take user inputs and put into respective files
{
	int write;
	for (int comNO = 0; comNO < numberOfComics; comNO++)
	{
		series_namefile << seriesName[comNO] << endl;
		issue_namefile << issueName[comNO] << endl;
		author_file << author[comNO] << endl;
	/*
		artist_fire << artistOrPenciller[0];
		colorist_file << colorist[0];
		issue_numberfile << issueNumber[0];
		variant_letterfile << variantLetter[0];
		publish_datefile << publishDate[0];
		condition_file << conditionRating[0];*/
		price_paidfile << pricePaid[comNO] << endl;
	}
	return (write);
}

int recallFiles ()			// calling the files to read inputs within
{
	int recall;
	while (!seriesnamefile.eof()&& !issuenamefile.eof()&& !authorfile.eof() && !pricepaidfile.eof() && numberOfComics < MAX_NUM_OF_COMICS)
	{
		seriesnamefile >> seriesName[numberOfComics];
		issuenamefile >> issueName[numberOfComics];
		authorfile >> author[numberOfComics];
	/*
		artistfire >> artistOrPenciller[0];
		coloristfile >> colorist[0];
		issuenumberfile >> issueNumber[0];
		variantletterfile >> variantLetter[0];
		publishdatefile >> publishDate[0];
		conditionfile >> conditionRating[0];*/
		pricepaidfile >> pricePaid[numberOfComics];
	//	numberOfComics++;  It's this incrementation that messed it up.
		cout << "number of comics incremented to " << numberOfComics << endl;
	}
	return (recall);
}

int closeOfiles()			// closes the comic info files
{
	// These don't compile.
	/*series_namefile.close(SERIES_NAME_FILE);
	  issue_namefile.close(ISSUE_NAME_FILE);
	  author_file.close(AUTHOR_FILE);
	  artist_file.close(ARTIST_FILE);
	  colorist_file.close(COLORIST_FILE);
	  issue_numberfile.close(ISSUE_NUMBER_FILE);
	  variant_letterfile.close(VARIANT_LETTER_FILE);
	  series_namefile.close(PUBLISH_DATE_FILE);
	  condition_file.close(CONDITION_RATING_FILE);
	  price_paidfile.close(PRICE_PAID_FILE);
	*/
	series_namefile.close();
	issue_namefile.close();
	author_file.close();
	/*artist_file.close();
	colorist_file.close();
	issue_numberfile.close();
	variant_letterfile.close();
	series_namefile.close();
	condition_file.close();*/
	price_paidfile.close();
	
	return 0;
}

int closeIfiles()
{
	seriesnamefile.close();
	issuenamefile.close();
	authorfile.close();
	/*artistfile.close();
	coloristfile.close();
	issuenumberfile.close();
	variantletterfile.close();
	seriesnamefile.close();
	conditionfile.close();*/
	pricepaidfile.close();
	
	return 0;
}
/*
 should:
		load comic-book data into parallel arrays
		give the user a command to save the data from the arrays into files
		give the user a command to load the data from the files into the arrays
 */ 
void save_comic_files()
{
	writeToFiles();
	closeOfiles();
	cout << "Finished saving inputted comics..." << endl;
}
int loadComicFiles()
{
	int loaded;
	//open and check ifstream files
	openAndCheckIFiles();
	recallFiles();
	return (loaded);
}

void orgMenu()		//make list to choose what variable to organize comics by
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(5) << "1: Series Name" << endl;
	cout << setw(5) << "2: Issue Name" << endl;
	cout << setw(5) << "3: Author" << endl;
	cout << setw(5) << "4: Artist/Penciller" << endl;
	cout << setw(5) << "5: Colorist" << endl;
	cout << setw(5) << "6: Issue Number w/ variant letter" << endl;
	cout << setw(5) << "7: Publsh Date" << endl;
	cout << setw(5) << "8: Condition Rating" << endl;
	cout << setw(5) << "9: Price Paid" << endl;
	cout << setw(5) << "10: End program" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
int listComics()
{
	int list;
	int choice;
	int userChoice;
	cout << "How would you like your comics organized?" << endl;
	cout << endl;
	
	orgMenu();
	cin >> choice;
	cout << "You chose to organize your comics by option #" << choice << "." << endl;
	//do cases for the cout formatting (try to do it in chart format)
	for (int comNo = 0; comNo < numberOfComics; comNo++)
	{
		switch (choice)
		{
			case 1: cout << setw(10) << comNo + 1 << ": " << seriesName[comNo] << '\t' << "| " << issueName[comNo] << '\t' << "| " << author[comNo] <<
						// "| " << artistOrPenciller[0] <<
						// "| " << colorist[0] <<
						// "| " << issueNumber[0] << variantLetter[0] <<
						// "| " << publishDate[0] <<
						// "| " << conditionRating[0] <<
						'\t' << "| " << pricePaid[comNo] <<
						endl;
					  break;
			case 2: cout << setw(10) << comNo + 1 << ": " << issueName[comNo] << '\t' << "| " << seriesName[comNo] << '\t' << "| " << author[comNo] <<
						//	"| " << artistOrPenciller[0] <<
						// "| " << colorist[0] <<
						// "| " << issueNumber[0] << variantLetter[0] <<
						// "| " << publishDate[0] <<
						// "| " << conditionRating[0] <<
						'\t' << "| " << pricePaid[comNo] <<
						endl;
					  break;
			case 3: cout << setw(10) << comNo + 1 << ": " << author[comNo] << '\t' << "| " << seriesName[comNo] << '\t' << "| " << issueName[comNo] << 
						//	"| " << artistOrPenciller[0] <<
						// "| " << colorist[0] <<
						// "| " << issueNumber[0] << variantLetter[0] <<
						// "| " << publishDate[0] <<
						// "| " << conditionRating[0] <<
						'\t' << "| " << pricePaid[comNo] <<
						endl;
					  break;
			/*case '4': cout << setw(10) << comNo << ": " << artistOrPenciller[0] << "| " << seriesName[0] << "| " << issueName[0] << "| "
						//	<< author[0] << "| "
						//  << colorist[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << publishDate[0] << "| " 
						//  << conditionRating[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '5': cout << setw(10) << comNo << ": " << colorist[0] << "| " << issueName[0] << "| " << seriesName[0] << "| "
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << publishDate[0] << "| " 
						//  << conditionRating[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '6': cout << setw(10) << comNo << ": " << issueNumber[0] << variantLetter[0] << "| " << seriesName[0] << "| " << issueName[0] << "| " 
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << colorist[0] << "| "
						//  << publishDate[0] << "| " 
						//  << conditionRating[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '7': cout << setw(10) << comNo << ": " << publishDate[0] << "| " << seriesName[0] << "| " << issueName[0] << "| " 
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << colorist[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << conditionRating[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '8': cout << setw(10) << comNo << ": " << conditionRating[0] << "| " << seriesName[0] << "| " << issueName[0] << "| " 
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << colorist[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << publishDate[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;*/
			case 9: cout << setw(10) << comNo + 1 << ": " << pricePaid[comNo] << '\t' << "| " << seriesName[comNo] << '\t' << "| " << issueName[comNo] << '\t' << "| "
							 << author[comNo] //<< "| "
						//  << artistOrPenciller[0] << "| "
						//  << colorist[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << publishDate[0] << "| " 
						//  << conditionRating[0] 
						<< endl;
					  break;
			case 10: cout << "Program ended" << endl;
					 break;
			default: {cout << "You didn't enter your organizing choice. I'll give you one more chance. Did you mean to? (Y or N)" << endl;
					   cin >> userChoice;
					  while (userChoice == 'N')
					  {
						  orgMenu();
						  cin >> choice;
						 // organizationCases();
					  }
				  }
			// Will try to restart questioning for choice. Choice function?
		}
	}
	closeIfiles();
	return (list);
}
//void comicBubbleSortWords(seriesName[], issueName[], author[], numberOfComics)			// the sorting function for nominal inputs {}
//void comicBubbleSortNums()			// the sorting function for ordinal inputs {}
	


int main()
{
	char userAnswer;
	openAndCheckOFiles();
	cout << "This program is a comic book organizer. You will now be asked to enter the comics' " << endl <<
			"series name, issue name, author" <<
			// ", artist (orPenciller)" <<
			// ", colorist" <<
			// ", issue number" <<
			// " (with variant)" <<
			// ", date published" <<
			// ", condition" <<
			", and price paid, when applicable." <<
			endl;
	// I want to make this work.
	/*cout << "You already have items in a file?(Y or N)" << endl;
	 cin >> userAnswer;
	 
	if (userAnswer == 'Y')
	{
		loadComicFiles();
		listComics();
	}
	else
	{
		cin.ignore(100,'\n');*/
	cout << endl;
	getComicInfo();
	numberOfComics++;
	cout << "number of comics incremented to " << numberOfComics << endl;
	cout << "Do you want to input more comics? Y (Yes) or N (No)" << endl;
	 cin >> userAnswer;
	cout << endl;
	// I probably need if/ else
	while (numberOfComics <= MAX_NUM_OF_COMICS && userAnswer == 'Y')
	{
		if (userAnswer == 'Y')
		{
			cin.ignore(100,'\n');
			getComicInfo(); //will call function here
			numberOfComics++;
			cout << "number of comics incremented to " << numberOfComics << endl;
			cout << "Do you want to input more comics? Y (Yes) or N (No)" << endl;
			 cin >> userAnswer;
		}
	}
	if (userAnswer == 'N')
	{
		save_comic_files();
		cout << endl;
		cout << endl;
		loadComicFiles();
		listComics();	
		cout << "You entered: " << numberOfComics << " comics!" << endl;
		cout << "Keep your comics safe! Thank you for using this program." << endl;
	}


	// search function??
	// find a way to select and alphebetize	by selected parameters
	// Need to figure out storage. watch lecture 0x17 (3-1-19)
	// stay tune for arrays
	return 0;
	
}
