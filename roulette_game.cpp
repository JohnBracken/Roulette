#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <cstdlib>
using namespace std;


//Function to choosen and return the type of bet.  
char choose_bet_type(){
    char bet_type;
    bool valid_bet_choice = false;
    
    while(!valid_bet_choice){

        //Bet type
        cout << "Roulette bet types: " << "\n";
        cout << "A: Single number bet" << "\n";
        cout << "B: Split bet" << "\n";
        cout << "C: Street bet" << "\n";
        cout << "D: Corner bet" << "\n";
        cout << "E: Six line bet" << "\n";
        cout << "F: Outside bet" << "\n";
        cout << "G: Columns bet" << "\n";
	cout << "H: Dozens bet" << "\n";
	cout << "I: Basket bet" << "\n";
        cout << "Q: Quit playing" << "\n";



        //Flag to check if character was entered.	
        bool char_flag = false;

        while(!char_flag){
	    cout << "Pick your bet type:" << "\n";
            cin >> bet_type;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the bet type options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        char_flag = true;
	        break;
            }
	}

 	    
        switch(bet_type){
            case 'A':
	    case 'a':
                cout << "You selected single number bet." << "\n\n";
		valid_bet_choice = true;
                break;
            case 'B':
	    case 'b':
                cout << "You selected split bet." << "\n\n";
		valid_bet_choice = true;
                break;
            case 'C':
	    case 'c':
                cout << "You selected street bet." << "\n\n";
		valid_bet_choice = true;
                break;
            case 'D':
	    case 'd':
                cout << "You selected corner bet." << "\n\n";
		valid_bet_choice = true;
                break;
            case 'E':
	    case 'e':
                cout << "You selected six line bet." << "\n\n";
		valid_bet_choice = true;
                break;
            case 'F':
	    case 'f':
                cout << "You selected outside bet." << "\n\n";
		valid_bet_choice = true;
                break;
            case 'G':
	    case 'g':
                cout << "You selected column bet." << "\n\n";
		valid_bet_choice = true;
                break;
            case 'H':
	    case 'h':
                cout << "You selected dozens bet." << "\n\n";
		valid_bet_choice = true;
                break;
            case 'I':
	    case 'i':
                cout << "You selected basket bet." << "\n\n";
		valid_bet_choice = true;
                break;
	    case 'Q':
	    case 'q':
	        cout << "Thanks for playing!" << "\n";
	        valid_bet_choice = true;
		break;
	    default:
	        cout << "Invalid bet type choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your bet type.  Thanks..." << "\n";

    return bet_type;
}

array<int,1> straight_up(char bet_type){
    bool valid_number_choice = false;
    array<int,1> number_array;  //Roulette number chosen
    int option;  //Betting option chosen
    
    string intro = "Single roulette number options.  Select an option from 0 to 38: ";
    string string0 = "Option 0: Refers to the roulette number 0";
    string string1 = "Option 1: Refers to the roulette number 1";
    string string2 = "Option 2: Refers to the roulette number 2";
    string string3 = "Option 3: Refers to the roulette number 3";
    string string4 = "Option 4: Refers to the roulette number 4";
    string string5 = "Option 5: Refers to the roulette number 5";
    string string6 = "Option 6: Refers to the roulette number 6";
    string string7 = "Option 7: Refers to the roulette number 7";
    string string8 = "Option 8: Refers to the roulette number 8";
    string string9 = "Option 9: Refers to the roulette number 9";
    string string10 = "Option 10: Refers to the roulette number 10";
    string string11 = "Option 11: Refers to the roulette number 11";
    string string12 = "Option 12: Refers to the roulette number 12";
    string string13 = "Option 13: Refers to the roulette number 13";
    string string14 = "Option 14: Refers to the roulette number 14";
    string string15 = "Option 15: Refers to the roulette number 15";
    string string16 = "Option 16: Refers to the roulette number 16";
    string string17 = "Option 17: Refers to the roulette number 17";
    string string18 = "Option 18: Refers to the roulette number 18";
    string string19 = "Option 19: Refers to the roulette number 19";
    string string20 = "Option 20: Refers to the roulette number 20";
    string string21 = "Option 21: Refers to the roulette number 21";
    string string22 = "Option 22: Refers to the roulette number 22";
    string string23 = "Option 23: Refers to the roulette number 23";
    string string24 = "Option 24: Refers to the roulette number 24";
    string string25 = "Option 25: Refers to the roulette number 25";
    string string26 = "Option 26: Refers to the roulette number 26";
    string string27 = "Option 27: Refers to the roulette number 27";
    string string28 = "Option 28: Refers to the roulette number 28";
    string string29 = "Option 29: Refers to the roulette number 29";
    string string30 = "Option 30: Refers to the roulette number 30";
    string string31 = "Option 31: Refers to the roulette number 31";
    string string32 = "Option 32: Refers to the roulette number 32";
    string string33 = "Option 33: Refers to the roulette number 33";
    string string34 = "Option 34: Refers to the roulette number 34";
    string string35 = "Option 35: Refers to the roulette number 35";
    string string36 = "Option 36: Refers to the roulette number 36";
    string string37 = "Option 37: Refers to the roulette number 00";
    string string38 = "Option 38: Option to quit the game";
   
    string single_numbers[] = {intro, string0, string1, string2, string3, 
                               string4, string5, string6, string7,
                               string8, string9, string10, string11,
                               string12, string13, string14, string15,
                               string16, string17, string18, string19,
                               string20, string21, string22, string23,
                               string24, string25, string26, string27,
                               string28, string29, string30, string31,
                               string32, string33, string34, string35,
                               string36, string37, string38};

    int string_array_length = sizeof(single_numbers)/sizeof(single_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << single_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette numbered options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the roulette number 0." << "\n\n";
		number_array = {0};
		valid_number_choice = true;
                break;
            case 1:
                cout << "You selected the roulette number 1." << "\n\n";
		number_array = {1};
		valid_number_choice = true;
                break;
            case 2:
                cout << "You selected the roulette number 2." << "\n\n";
		number_array = {2};
		valid_number_choice = true;
                break;
            case 3:
                cout << "You selected the roulette number 3." << "\n\n";
		number_array = {3};
		valid_number_choice = true;
                break;
            case 4:
                cout << "You selected the roulette number 4." << "\n\n";
		number_array = {4};
		valid_number_choice = true;
                break;
            case 5:
                cout << "You selected the roulette number 5." << "\n\n";
		number_array = {5};
		valid_number_choice = true;
                break;
            case 6:
                cout << "You selected the roulette number 6." << "\n\n";
		number_array = {6};
		valid_number_choice = true;
                break;
            case 7:
                cout << "You selected the roulette number 7." << "\n\n";
		number_array = {7};
		valid_number_choice = true;
                break;
            case 8:
                cout << "You selected the roulette number 8." << "\n\n";
		number_array = {8};
		valid_number_choice = true;
                break;
            case 9:
                cout << "You selected the roulette number 9." << "\n\n";
		number_array = {9};
		valid_number_choice = true;
                break;
            case 10:
                cout << "You selected the roulette number 10." << "\n\n";
		number_array = {10};
		valid_number_choice = true;
                break;
            case 11:
                cout << "You selected the roulette number 11." << "\n\n";
		number_array = {11};
		valid_number_choice = true;
                break;
            case 12:
                cout << "You selected the roulette number 12." << "\n\n";
		number_array = {12};
		valid_number_choice = true;
                break;
            case 13:
                cout << "You selected the roulette number 13." << "\n\n";
		number_array = {13};
		valid_number_choice = true;
                break;
            case 14:
                cout << "You selected the roulette number 14." << "\n\n";
		number_array = {14};
		valid_number_choice = true;
                break;
            case 15:
                cout << "You selected the roulette number 15." << "\n\n";
		number_array = {15};
		valid_number_choice = true;
                break;
            case 16:
                cout << "You selected the roulette number 16." << "\n\n";
		number_array = {16};
		valid_number_choice = true;
                break;
            case 17:
                cout << "You selected the roulette number 17." << "\n\n";
		number_array = {17};
		valid_number_choice = true;
                break;
            case 18:
                cout << "You selected the roulette number 18." << "\n\n";
		number_array = {18};
		valid_number_choice = true;
                break;
            case 19:
                cout << "You selected the roulette number 19." << "\n\n";
		number_array = {19};
		valid_number_choice = true;
                break;
            case 20:
                cout << "You selected the roulette number 20." << "\n\n";
		number_array = {20};
		valid_number_choice = true;
                break;
            case 21:
                cout << "You selected the roulette number 21." << "\n\n";
		number_array = {21};
		valid_number_choice = true;
                break;
            case 22:
                cout << "You selected the roulette number 22." << "\n\n";
		number_array = {22};
		valid_number_choice = true;
                break;
            case 23:
                cout << "You selected the roulette number 23." << "\n\n";
		number_array = {23};
		valid_number_choice = true;
                break;
            case 24:
                cout << "You selected the roulette number 24." << "\n\n";
		number_array = {24};
		valid_number_choice = true;
                break;
            case 25:
                cout << "You selected the roulette number 25." << "\n\n";
		number_array = {25};
		valid_number_choice = true;
                break;
            case 26:
                cout << "You selected the roulette number 26." << "\n\n";
		number_array = {26};
		valid_number_choice = true;
                break;
            case 27:
                cout << "You selected the roulette number 27." << "\n\n";
		number_array = {27};
		valid_number_choice = true;
                break;
            case 28:
                cout << "You selected the roulette number 28." << "\n\n";
		number_array = {28};
		valid_number_choice = true;
                break;
            case 29:
                cout << "You selected the roulette number 29." << "\n\n";
		number_array = {29};
		valid_number_choice = true;
                break;
            case 30:
                cout << "You selected the roulette number 30." << "\n\n";
		number_array = {30};
		valid_number_choice = true;
                break;
            case 31:
                cout << "You selected the roulette number 31." << "\n\n";
		number_array = {31};
		valid_number_choice = true;
                break;
            case 32:
                cout << "You selected the roulette number 32." << "\n\n";
		number_array = {32};
		valid_number_choice = true;
                break;
            case 33:
                cout << "You selected the roulette number 33." << "\n\n";
		number_array = {33};
		valid_number_choice = true;
                break;
            case 34:
                cout << "You selected the roulette number 34." << "\n\n";
		number_array = {34};
		valid_number_choice = true;
                break;
            case 35:
                cout << "You selected the roulette number 35." << "\n\n";
		number_array = {35};
		valid_number_choice = true;
                break;
            case 36:
                cout << "You selected the roulette number 36." << "\n\n";
		number_array = {36};
		valid_number_choice = true;
                break;
            case 37:
                cout << "You selected the roulette number 00." << "\n\n";
		number_array = {37};
		valid_number_choice = true;
                break;
	    case 38:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid option choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your number.  Thanks..." << "\n";
    return number_array;

}

//Function to deal with split bets
array<int, 2> split_bet(char bet_type){
    
    bool valid_number_choice = false;
    int option;
    array<int, 2> number_array;

    string intro = "Split bet roulette number options.  Select an option from 0 to 57: ";
    string string0 = "Option 0: Refers to the roulette numbers 1 and 2";
    string string1 = "Option 1: Refers to the roulette numbers 4 and 5";
    string string2 = "Option 2: Refers to the roulette numbers 7 and 8";
    string string3 = "Option 3: Refers to the roulette numbers 10 and 11";
    string string4 = "Option 4: Refers to the roulette numbers 13 and 14";
    string string5 = "Option 5: Refers to the roulette numbers 16 and 17";
    string string6 = "Option 6: Refers to the roulette numbers 2 and 3";
    string string7 = "Option 7: Refers to the roulette numbers 5 and 6";
    string string8 = "Option 8: Refers to the roulette numbers 8 and 9";
    string string9 = "Option 9: Refers to the roulette numbers 11 and 12";
    string string10 = "Option 10: Refers to the roulette numbers 14 and 15";
    string string11 = "Option 11: Refers to the roulette numbers 17 and 18";
    string string12 = "Option 12: Refers to the roulette numbers 19 and 20";
    string string13 = "Option 13: Refers to the roulette numbers 20 and 21";
    string string14 = "Option 14: Refers to the roulette numbers 22 and 23";
    string string15 = "Option 15: Refers to the roulette numbers 23 and 24";
    string string16 = "Option 16: Refers to the roulette numbers 25 and 26";
    string string17 = "Option 17: Refers to the roulette numbers 26 and 27";
    string string18 = "Option 18: Refers to the roulette numbers 28 and 29";
    string string19 = "Option 19: Refers to the roulette numbers 29 and 30";
    string string20 = "Option 20: Refers to the roulette numbers 31 and 32";
    string string21 = "Option 21: Refers to the roulette numbers 32 and 33";
    string string22 = "Option 22: Refers to the roulette numbers 34 and 35";
    string string23 = "Option 23: Refers to the roulette numbers 35 and 36";
    string string24 = "Option 24: Refers to the roulette numbers 1 and 4";
    string string25 = "Option 25: Refers to the roulette numbers 4 and 7";
    string string26 = "Option 26: Refers to the roulette numbers 7 and 10";
    string string27 = "Option 27: Refers to the roulette numbers 10 and 13";
    string string28 = "Option 28: Refers to the roulette numbers 13 and 16";
    string string29 = "Option 29: Refers to the roulette numbers 16 and 19";
    string string30 = "Option 30: Refers to the roulette numbers 19 and 22";
    string string31 = "Option 31: Refers to the roulette numbers 22 and 25";
    string string32 = "Option 32: Refers to the roulette numbers 25 and 28";
    string string33 = "Option 33: Refers to the roulette numbers 28 and 31";
    string string34 = "Option 34: Refers to the roulette numbers 31 and 34";
    string string35 = "Option 35: Refers to the roulette numbers 2 and 5";
    string string36 = "Option 36: Refers to the roulette numbers 5 and 8";
    string string37 = "Option 37: Refers to the roulette numbers 8 and 11";
    string string38 = "Option 38: Refers to the roulette numbers 11 and 14";
    string string39 = "Option 39: Refers to the roulette numbers 14 and 17";
    string string40 = "Option 40: Refers to the roulette numbers 17 and 20";
    string string41 = "Option 41: Refers to the roulette numbers 20 and 23";
    string string42 = "Option 42: Refers to the roulette numbers 23 and 26";
    string string43 = "Option 43: Refers to the roulette numbers 26 and 29";
    string string44 = "Option 44: Refers to the roulette numbers 29 and 32";
    string string45 = "Option 45: Refers to the roulette numbers 32 and 35";
    string string46 = "Option 46: Refers to the roulette numbers 3 and 6";
    string string47 = "Option 47: Refers to the roulette numbers 6 and 9";
    string string48 = "Option 48: Refers to the roulette numbers 9 and 12";
    string string49 = "Option 49: Refers to the roulette numbers 12 and 15";
    string string50 = "Option 50: Refers to the roulette numbers 15 and 18";
    string string51 = "Option 51: Refers to the roulette numbers 18 and 21";
    string string52 = "Option 52: Refers to the roulette numbers 21 and 24";
    string string53 = "Option 53: Refers to the roulette numbers 24 and 27";
    string string54 = "Option 54: Refers to the roulette numbers 27 and 30";
    string string55 = "Option 55: Refers to the roulette numbers 30 and 33";
    string string56 = "Option 56: Refers to the roulette numbers 33 and 36";
    string string57 = "Option 57: Quit the game";

   
    string split_bet_numbers[] = {intro, string0, string1, string2, string3, 
                               string4, string5, string6, string7,
                               string8, string9, string10, string11,
                               string12, string13, string14, string15,
                               string16, string17, string18, string19,
                               string20, string21, string22, string23,
                               string24, string25, string26, string27,
                               string28, string29, string30, string31,
                               string32, string33, string34, string35,
                               string36, string37, string38, string39,
                               string40, string41, string42, string43,
                               string44, string45, string46, string47,
                               string48, string49, string50, string51,
                               string52, string53, string54, string55,
                               string56, string57};

    int string_array_length = sizeof(split_bet_numbers)/sizeof(split_bet_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << split_bet_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette number options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the roulette numbers 1 and 2." << "\n\n";
		number_array = {1,2};
		valid_number_choice = true;
                break;
            case 1:
                cout << "You selected the roulette numbers 4 an 5." << "\n\n";
		number_array = {4,5};
		valid_number_choice = true;
                break;
            case 2:
                cout << "You selected the roulette numbers 7 and 8." << "\n\n";
		number_array = {7,8};
		valid_number_choice = true;
                break;
            case 3:
                cout << "You selected the roulette numbers 10 and 11." << "\n\n";
		number_array = {10,11};
		valid_number_choice = true;
                break;
            case 4:
                cout << "You selected the roulette numbers 13 and 14." << "\n\n";
		number_array = {13,14};
		valid_number_choice = true;
                break;
            case 5:
                cout << "You selected the roulette numbers 16 and 17." << "\n\n";
		number_array = {16,17};
		valid_number_choice = true;
                break;
            case 6:
                cout << "You selected the roulette numbers 2 and 3." << "\n\n";
		number_array = {2,3};
		valid_number_choice = true;
                break;
            case 7:
                cout << "You selected the roulette numbers 5 and 6." << "\n\n";
		number_array = {5,6};
		valid_number_choice = true;
                break;
            case 8:
                cout << "You selected the roulette numbers 8 and 9." << "\n\n";
		number_array = {8,9};
		valid_number_choice = true;
                break;
            case 9:
                cout << "You selected the roulette numbers 11 and 12." << "\n\n";
		number_array = {11,12};
		valid_number_choice = true;
                break;
            case 10:
                cout << "You selected the roulette numbers 14 and 15." << "\n\n";
		number_array = {14,15};
		valid_number_choice = true;
                break;
            case 11:
                cout << "You selected the roulette numbers 17 and 18." << "\n\n";
		number_array = {17,18};
		valid_number_choice = true;
                break;
            case 12:
                cout << "You selected the roulette numbers 19 and 20." << "\n\n";
		number_array = {19,20};
		valid_number_choice = true;
                break;
            case 13:
                cout << "You selected the roulette numbers 20 and 21." << "\n\n";
		number_array = {20,21};
		valid_number_choice = true;
                break;
            case 14:
                cout << "You selected the roulette numbers 22 and 23." << "\n\n";
		number_array = {22,23};
		valid_number_choice = true;
                break;
            case 15:
                cout << "You selected the roulette numbers 23 and 24." << "\n\n";
		number_array = {23,24};
		valid_number_choice = true;
                break;
            case 16:
                cout << "You selected the roulette numbers 25 and 26." << "\n\n";
		number_array = {25,26};
		valid_number_choice = true;
                break;
            case 17:
                cout << "You selected the roulette numbers 26 and 27." << "\n\n";
		number_array = {26,27};
		valid_number_choice = true;
                break;
            case 18:
                cout << "You selected the roulette numbers 28 and 29." << "\n\n";
		number_array = {28,29};
		valid_number_choice = true;
                break;
            case 19:
                cout << "You selected the roulette numbers 29 and 30." << "\n\n";
		number_array = {29,30};
		valid_number_choice = true;
                break;
            case 20:
                cout << "You selected the roulette numbers 31 and 32." << "\n\n";
		number_array = {31,32};
		valid_number_choice = true;
                break;
            case 21:
                cout << "You selected the roulette numbers 32 and 33." << "\n\n";
		number_array = {32,33};
		valid_number_choice = true;
                break;
            case 22:
                cout << "You selected the roulette numbers 34 and 35." << "\n\n";
		number_array = {34,35};
		valid_number_choice = true;
                break;
            case 23:
                cout << "You selected the roulette numbers 35 and 36." << "\n\n";
		number_array = {35,36};
		valid_number_choice = true;
                break;
            case 24:
                cout << "You selected the roulette numbers 1 and 4." << "\n\n";
		number_array = {1,4};
		valid_number_choice = true;
                break;
            case 25:
                cout << "You selected the roulette numbers 4 and 7." << "\n\n";
		number_array = {4,7};
		valid_number_choice = true;
                break;
            case 26:
                cout << "You selected the roulette numbers 7 and 10." << "\n\n";
		number_array = {7, 10};
		valid_number_choice = true;
                break;
            case 27:
                cout << "You selected the roulette numbers 10 and 13." << "\n\n";
		number_array = {10,13};
		valid_number_choice = true;
                break;
            case 28:
                cout << "You selected the roulette numbers 13 and 16." << "\n\n";
		number_array = {13,16};
		valid_number_choice = true;
                break;
            case 29:
                cout << "You selected the roulette numbers 16 and 19." << "\n\n";
		number_array = {16,19};
		valid_number_choice = true;
                break;
            case 30:
                cout << "You selected the roulette numbers 19 and 22." << "\n\n";
		number_array = {19,22};
		valid_number_choice = true;
                break;
            case 31:
                cout << "You selected the roulette numbers 22 and 25." << "\n\n";
		number_array = {22,25};
		valid_number_choice = true;
                break;
            case 32:
                cout << "You selected the roulette numbers 25 and 28." << "\n\n";
		number_array = {25,28};
		valid_number_choice = true;
                break;
            case 33:
                cout << "You selected the roulette numbers 28 and 31." << "\n\n";
		number_array = {28,31};
		valid_number_choice = true;
                break;
            case 34:
                cout << "You selected the roulette numbers 31 and 34." << "\n\n";
		number_array = {31,34};
		valid_number_choice = true;
                break;
            case 35:
                cout << "You selected the roulette numbers 2 and 5." << "\n\n";
		number_array = {2,5};
		valid_number_choice = true;
                break;
            case 36:
                cout << "You selected the roulette numbers 5 and 8." << "\n\n";
		number_array = {5,8};
		valid_number_choice = true;
                break;
            case 37:
                cout << "You selected the roulette numbers 8 and 11." << "\n\n";
		number_array = {8,11};
		valid_number_choice = true;
                break;
            case 38:
                cout << "You selected the roulette numbers 11 and 14." << "\n\n";
		number_array = {11,14};
		valid_number_choice = true;
                break;
            case 39:
                cout << "You selected the roulette numbers 14 and 17." << "\n\n";
		number_array = {14,17};
		valid_number_choice = true;
                break;
            case 40:
                cout << "You selected the roulette numbers 17 and 20." << "\n\n";
		number_array = {17,20};
		valid_number_choice = true;
                break;
            case 41:
                cout << "You selected the roulette numbers 20 and 23." << "\n\n";
		number_array = {20,23};
		valid_number_choice = true;
                break;
            case 42:
                cout << "You selected the roulette numbers 23 and 26." << "\n\n";
		number_array = {23,26};
		valid_number_choice = true;
                break;
            case 43:
                cout << "You selected the roulette numbers 26 and 29." << "\n\n";
		number_array = {26,29};
		valid_number_choice = true;
                break;
            case 44:
                cout << "You selected the roulette numbers 29 and 32." << "\n\n";
		number_array = {29,32};
		valid_number_choice = true;
                break;
            case 45:
                cout << "You selected the roulette numbers 32 and 35." << "\n\n";
		number_array = {32,35};
		valid_number_choice = true;
                break;
            case 46:
                cout << "You selected the roulette numbers 3 and 6." << "\n\n";
		number_array = {3,6};
		valid_number_choice = true;
                break;
            case 47:
                cout << "You selected the roulette numbers 6 and 9." << "\n\n";
		number_array = {6,9};
		valid_number_choice = true;
                break;
            case 48:
                cout << "You selected the roulette numbers 9 and 12." << "\n\n";
		number_array = {9,12};
		valid_number_choice = true;
                break;
            case 49:
                cout << "You selected the roulette numbers 12 and 15." << "\n\n";
		number_array = {12,15};
		valid_number_choice = true;
                break;
            case 50:
                cout << "You selected the roulette numbers 15 and 18." << "\n\n";
		number_array = {15,18};
		valid_number_choice = true;
                break;
            case 51:
                cout << "You selected the roulette numbers 18 and 21." << "\n\n";
		number_array = {18,21};
		valid_number_choice = true;
                break;
            case 52:
                cout << "You selected the roulette numbers 21 and 24." << "\n\n";
		number_array = {21,24};
		valid_number_choice = true;
                break;
            case 53:
                cout << "You selected the roulette numbers 24 and 27." << "\n\n";
		number_array = {24,27};
		valid_number_choice = true;
                break;
            case 54:
                cout << "You selected the roulette numbers 27 and 30." << "\n\n";
		number_array = {27,30};
		valid_number_choice = true;
                break;
            case 55:
                cout << "You selected the roulette numbers 30 and 33." << "\n\n";
		number_array = {30,33};
		valid_number_choice = true;
                break;
            case 56:
                cout << "You selected the roulette numbers 33 and 36." << "\n\n";
		number_array = {33,36};
		valid_number_choice = true;
                break;
	    case 57:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500,500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid number choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your roulette numbers.  Thanks..." << "\n";
    return number_array;

}

//Function to deal with street bets
array<int, 3> street_bet(char bet_type){
    
    bool valid_number_choice = false;
    int option;
    array<int, 3> number_array;

    string intro = "Street bet roulette number options.  Select an option from 0 to 12: ";
    string string0 = "Option 0: Refers to the roulette numbers 1,2 and 3";
    string string1 = "Option 1: Refers to the roulette numbers 4,5, and 6";
    string string2 = "Option 2: Refers to the roulette numbers 7, 8 and 9";
    string string3 = "Option 3: Refers to the roulette numbers 10, 11 and 12";
    string string4 = "Option 4: Refers to the roulette numbers 13, 14 and 15";
    string string5 = "Option 5: Refers to the roulette numbers 16, 17 and 18";
    string string6 = "Option 6: Refers to the roulette numbers 19, 20 and 21";
    string string7 = "Option 7: Refers to the roulette numbers 22, 23 and 24";
    string string8 = "Option 8: Refers to the roulette numbers 25, 26 and 27";
    string string9 = "Option 9: Refers to the roulette numbers 28, 29 and 30";
    string string10 = "Option 10: Refers to the roulette numbers 31, 32 and 33";
    string string11 = "Option 11: Refers to the roulette numbers 34, 35 and 36";
    string string12 = "Option 12:  Quit the game";
   
    string street_bet_numbers[] = {intro, string0, string1, string2, string3, 
                               string4, string5, string6, string7,
                               string8, string9, string10, string11, string12};

    int string_array_length = sizeof(street_bet_numbers)/sizeof(street_bet_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << street_bet_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette number options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the roulette numbers 1,2 and 3." << "\n\n";
		number_array = {1,2,3};
		valid_number_choice = true;
                break;
            case 1:
                cout << "You selected the roulette numbers 4, 5 and 6." << "\n\n";
		number_array = {4,5,6};
		valid_number_choice = true;
                break;
            case 2:
                cout << "You selected the roulette numbers 7, 8 and 9." << "\n\n";
		number_array = {7,8,9};
		valid_number_choice = true;
                break;
            case 3:
                cout << "You selected the roulette numbers 10, 11 and 12." << "\n\n";
		number_array = {10,11,12};
		valid_number_choice = true;
                break;
            case 4:
                cout << "You selected the roulette numbers 13, 14 and 15." << "\n\n";
		number_array = {13,14,15};
		valid_number_choice = true;
                break;
            case 5:
                cout << "You selected the roulette numbers 16, 17 and 18." << "\n\n";
		number_array = {16,17,18};
		valid_number_choice = true;
                break;
            case 6:
                cout << "You selected the roulette numbers 19,20 and 21." << "\n\n";
		number_array = {19,20,21};
		valid_number_choice = true;
                break;
            case 7:
                cout << "You selected the roulette numbers 22,23 and 24." << "\n\n";
		number_array = {22,23,24};
		valid_number_choice = true;
                break;
            case 8:
                cout << "You selected the roulette numbers 25, 26 and 27." << "\n\n";
		number_array = {25,26,27};
		valid_number_choice = true;
                break;
            case 9:
                cout << "You selected the roulette numbers 28, 29 and 30." << "\n\n";
		number_array = {28,29,30};
		valid_number_choice = true;
                break;
            case 10:
                cout << "You selected the roulette numbers 31, 32 and 33." << "\n\n";
		number_array = {31,32,33};
		valid_number_choice = true;
                break;
            case 11:
                cout << "You selected the roulette numbers 34, 35 and 36." << "\n\n";
		number_array = {34,35,36};
		valid_number_choice = true;
                break;
	    case 12:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500,500,500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid number choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your roulette numbers.  Thanks..." << "\n";
    return number_array;

}


//Function to deal with corner bets
array<int, 4> corner_bet(char bet_type){
    
    bool valid_number_choice = false;
    int option;
    array<int, 4> number_array;

    string intro = "Corner bet roulette number options.  Select an option from 0 to 22: ";
    string string0 = "Option 0: Refers to the roulette numbers 1, 2, 4 and 5";
    string string1 = "Option 1: Refers to the roulette numbers 2, 3, 5 and 6";
    string string2 = "Option 2: Refers to the roulette numbers 4, 5, 7 and 8";
    string string3 = "Option 3: Refers to the roulette numbers 5, 6, 8 and 9";
    string string4 = "Option 4: Refers to the roulette numbers 7, 8, 10 and 11";
    string string5 = "Option 5: Refers to the roulette numbers 8, 9, 11 and 12";
    string string6 = "Option 6: Refers to the roulette numbers 10, 11, 13 and 14";
    string string7 = "Option 7: Refers to the roulette numbers 11, 12, 14 and 15";
    string string8 = "Option 8: Refers to the roulette numbers 13, 14, 16 and 17";
    string string9 = "Option 9: Refers to the roulette numbers 14, 15, 17 and 18";
    string string10 = "Option 10: Refers to the roulette numbers 16, 17, 19 and 20";
    string string11 = "Option 11: Refers to the roulette numbers 17, 18, 20 and 21";
    string string12 = "Option 12: Refers to the roulette numbers 19, 20, 22 and 23";
    string string13 = "Option 13: Refers to the roulette numbers 20, 21, 23 and 24";
    string string14 = "Option 14: Refers to the roulette numbers 22, 23, 25 and 26";
    string string15 = "Option 15: Refers to the roulette numbers 23, 24, 26 and 27";
    string string16 = "Option 16: Refers to the roulette numbers 25, 26, 28 and 29";
    string string17 = "Option 17: Refers to the roulette numbers 26, 27, 29 and 30";
    string string18 = "Option 18: Refers to the roulette numbers 28, 29, 31 and 32";
    string string19 = "Option 19: Refers to the roulette numbers 29, 30, 32 and 33";
    string string20 = "Option 20: Refers to the roulette numbers 31, 32, 34 and 35";
    string string21 = "Option 21: Refers to the roulette numbers 32, 33, 35 and 36";
    string string22 = "Option 22: Quit the game";

   
    string corner_bet_numbers[] = {intro, string0, string1, string2, string3, 
                               string4, string5, string6, string7,
                               string8, string9, string10, string11,
                               string12, string13, string14, string15,
                               string16, string17, string18, string19,
                               string20, string21, string22};

    int string_array_length = sizeof(corner_bet_numbers)/sizeof(corner_bet_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << corner_bet_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette number options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the roulette numbers 1, 2, 4 and 5." << "\n\n";
		number_array = {1,2,4,5};
		valid_number_choice = true;
                break;
            case 1:
                cout << "You selected the roulette numbers 2, 3, 5 and 6." << "\n\n";
		number_array = {2,3,5,6};
		valid_number_choice = true;
                break;
            case 2:
                cout << "You selected the roulette numbers 4, 5, 7 and 8." << "\n\n";
		number_array = {4,5,7,8};
		valid_number_choice = true;
                break;
            case 3:
                cout << "You selected the roulette numbers 5, 6, 8 and 9." << "\n\n";
		number_array = {5,6,8,9};
		valid_number_choice = true;
                break;
            case 4:
                cout << "You selected the roulette numbers 7, 8, 10 and 11." << "\n\n";
		number_array = {7,8,10,11};
		valid_number_choice = true;
                break;
            case 5:
                cout << "You selected the roulette numbers 8, 9, 11 and 12." << "\n\n";
		number_array = {8,9,11,12};
		valid_number_choice = true;
                break;
            case 6:
                cout << "You selected the roulette numbers 10, 11, 13 and 14." << "\n\n";
		number_array = {10,11,13,14};
		valid_number_choice = true;
                break;
            case 7:
                cout << "You selected the roulette numbers 11, 12, 14 and 15." << "\n\n";
		number_array = {11,12,14,15};
		valid_number_choice = true;
                break;
            case 8:
                cout << "You selected the roulette numbers 13, 14, 16 and 17." << "\n\n";
		number_array = {13,14,16,17};
		valid_number_choice = true;
                break;
            case 9:
                cout << "You selected the roulette numbers 14, 15, 17 and 18." << "\n\n";
		number_array = {14,15,17,18};
		valid_number_choice = true;
                break;
            case 10:
                cout << "You selected the roulette numbers 16, 17, 19 and 20." << "\n\n";
		number_array = {16,17,19,20};
		valid_number_choice = true;
                break;
            case 11:
                cout << "You selected the roulette numbers 17, 18, 20 and 21." << "\n\n";
		number_array = {17,18,20,21};
		valid_number_choice = true;
                break;
            case 12:
                cout << "You selected the roulette numbers 19, 20, 22 and 23." << "\n\n";
		number_array = {19,20,22,23};
		valid_number_choice = true;
                break;
            case 13:
                cout << "You selected the roulette numbers 20, 21, 23, 24." << "\n\n";
		number_array = {20,21,23,24};
		valid_number_choice = true;
                break;
            case 14:
                cout << "You selected the roulette numbers 22, 23, 25 and 26." << "\n\n";
		number_array = {22,23,25,26};
		valid_number_choice = true;
                break;
            case 15:
                cout << "You selected the roulette numbers 23, 24, 26 and 27." << "\n\n";
		number_array = {23,24,26,27};
		valid_number_choice = true;
                break;
            case 16:
                cout << "You selected the roulette numbers 25, 26, 28 and 29." << "\n\n";
		number_array = {25,26,28,29};
		valid_number_choice = true;
                break;
            case 17:
                cout << "You selected the roulette numbers 26, 27, 29 and 30." << "\n\n";
		number_array = {26,27,29,30};
		valid_number_choice = true;
                break;
            case 18:
                cout << "You selected the roulette numbers 28, 29, 31 and 32." << "\n\n";
		number_array = {28,29,31,32};
		valid_number_choice = true;
                break;
            case 19:
                cout << "You selected the roulette numbers 29, 30, 32 and 33." << "\n\n";
		number_array = {29,30,32,33};
		valid_number_choice = true;
                break;
            case 20:
                cout << "You selected the roulette numbers 31, 32, 34 and 35." << "\n\n";
		number_array = {31,32,34,35};
		valid_number_choice = true;
                break;
            case 21:
                cout << "You selected the roulette numbers 32, 33, 35 and 36." << "\n\n";
		number_array = {32,33,35,36};
		valid_number_choice = true;
                break;
	    case 22:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500,500,500,500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid number choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your roulette numbers.  Thanks..." << "\n";
    return number_array;

}


//Function to deal with six line bets
array<int, 6> six_line_bet(char bet_type){
    
    bool valid_number_choice = false;
    int option;
    array<int, 6> number_array;

    string intro = "Six-line bet roulette number options.  Select an option from 0 to 11: ";
    string string0 = "Option 0: Refers to the roulette numbers 1, 2, 3, 4, 5, and 6";
    string string1 = "Option 1: Refers to the roulette numbers 4, 5, 6, 7, 8 and 9";
    string string2 = "Option 2: Refers to the roulette numbers 7, 8, 9, 10, 11 and 12";
    string string3 = "Option 3: Refers to the roulette numbers 10, 11, 12, 13, 14 and 15";
    string string4 = "Option 4: Refers to the roulette numbers 13, 14, 15, 16, 17 and 18";
    string string5 = "Option 5: Refers to the roulette numbers 16, 17, 18, 19, 20 and 21";
    string string6 = "Option 6: Refers to the roulette numbers 19, 20, 21, 22, 23 and 24";
    string string7 = "Option 7: Refers to the roulette numbers 22, 23, 24, 25, 26 and 27";
    string string8 = "Option 8: Refers to the roulette numbers 25, 26, 27, 28, 29 and 30";
    string string9 = "Option 9: Refers to the roulette numbers 28, 29, 30, 31, 32 and 33";
    string string10 = "Option 10: Refers to the roulette numbers 31, 32, 33, 34, 35 and 36";
    string string11 = "Option 11: Quit the game";

   
    string six_line_bet_numbers[] = {intro, string0, string1, string2, string3, 
                               string4, string5, string6, string7,
                               string8, string9, string10, string11};

    int string_array_length = sizeof(six_line_bet_numbers)/sizeof(six_line_bet_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << six_line_bet_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette number options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the roulette numbers  1, 2, 3, 4, 5 and 6." << "\n\n";
		number_array = {1,2,3,4,5,6};
		valid_number_choice = true;
                break;
            case 1:
                cout << "You selected the roulette numbers 4, 5, 6, 7, 8 and 9." << "\n\n";
		number_array = {4,5,6,7,8,9};
		valid_number_choice = true;
                break;
            case 2:
                cout << "You selected the roulette numbers 7, 8, 9, 10, 11 and 12." << "\n\n";
		number_array = {7,8,9,10,11,12};
		valid_number_choice = true;
                break;
            case 3:
                cout << "You selected the roulette numbers 10, 11, 12, 13, 14 and 15." << "\n\n";
		number_array = {10,11,12,13,14,15};
		valid_number_choice = true;
                break;
            case 4:
                cout << "You selected the roulette numbers 13, 14, 15, 16, 17 and 18." << "\n\n";
		number_array = {13,14,15,16,17,18};
		valid_number_choice = true;
                break;
            case 5:
                cout << "You selected the roulette numbers 16, 17, 18, 19, 20 and 21." << "\n\n";
		number_array = {16,17,18,19,20,21};
		valid_number_choice = true;
                break;
            case 6:
                cout << "You selected the roulette numbers 19, 20, 21, 22, 23 and 24." << "\n\n";
		number_array = {19,20,21,22,23,24};
		valid_number_choice = true;
                break;
            case 7:
                cout << "You selected the roulette numbers 22, 23, 24, 25, 26 and 27." << "\n\n";
		number_array = {22,23,24,25,26,27};
		valid_number_choice = true;
                break;
            case 8:
                cout << "You selected the roulette numbers 25, 26, 27, 28, 29 and 30." << "\n\n";
		number_array = {25,26,27,28,29,30};
		valid_number_choice = true;
                break;
            case 9:
                cout << "You selected the roulette numbers 28, 29, 30, 31, 32 and 33." << "\n\n";
		number_array = {28,29,30,31,32,33};
		valid_number_choice = true;
                break;
            case 10:
                cout << "You selected the roulette numbers 31, 32, 33, 34, 35 and 36." << "\n\n";
		number_array = {31,32,33,34,35,36};
		valid_number_choice = true;
                break;
	    case 11:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500,500,500,500,500,500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid number choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your roulette numbers.  Thanks..." << "\n";
    return number_array;

}


//Function to deal with column bets
array<int, 12> column_bet(char bet_type){
    
    bool valid_number_choice = false;
    int option;
    array<int, 12> number_array;

    string intro = "Column bet roulette number options.  Select an option from 0 to 3: ";
    string string0 = "Option 0: Refers to the roulette numbers 1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31 and 34";
    string string1 = "Option 1: Refers to the roulette numbers 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32 and 35";
    string string2 = "Option 2: Refers to the roulette numbers 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33 and 36";
    string string3 = "Option 3: Quit the game";

   
    string column_bet_numbers[] = {intro, string0, string1, string2, string3};

    int string_array_length = sizeof(column_bet_numbers)/sizeof(column_bet_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << column_bet_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette number options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the roulette numbers  1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31 and 34." << "\n\n";
		number_array = {1,4,7,10,13,16,19,22,25,28,31,34};
		valid_number_choice = true;
                break;
            case 1:
                cout << "You selected the roulette numbers 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32 and 35." << "\n\n";
		number_array = {2,5,8,11,14,17,20,23,26,29,32,35};
		valid_number_choice = true;
                break;
            case 2:
                cout << "You selected the roulette numbers 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33 and 36." << "\n\n";
		number_array = {3,6,9,12,15,18,21,24,27,30,33,36};
		valid_number_choice = true;
                break;
	    case 3:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500,500,500,500,500,500,500,500,500,500,500,500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid number choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your roulette numbers.  Thanks..." << "\n";
    return number_array;

}



//Function to deal with outside bets
array<int, 18> outside_bet(char bet_type){
    
    bool valid_number_choice = false;
    int option;
    array<int, 18> number_array;

    string intro = "Outside bet roulette number options.  Select an option from 0 to 6: ";
    string string0 = "Option 0: Refers to red roulette numbers (1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36)";
    string string1 = "Option 1: Refers to the black roulette numbers (2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35)";
    string string2 = "Option 2: Refers to the odd roulette numbers (1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35)";
    string string3 = "Option 3: Refers to the even roulette numbers (2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36)";
    string string4 = "Option 4: Refers to the high roulette numbers (19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36)";
    string string5 = "Option 5: Refers to the low roulette numbers (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18)";
    string string6 = "Option 6: Quit the game";

   
    string outside_bet_numbers[] = {intro, string0, string1, string2, string3, string4, string5, string6};

    int string_array_length = sizeof(outside_bet_numbers)/sizeof(outside_bet_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << outside_bet_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette number options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the red roulette numbers" << "\n\n";
		number_array = {1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36};
		valid_number_choice = true;
                break;
            case 1:
                cout << "You selected the black roulette numbers" << "\n\n";
		number_array = {2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35};
		valid_number_choice = true;
                break;
            case 2:
                cout << "You selected the odd roulette numbers" << "\n\n";
		number_array = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35};
		valid_number_choice = true;
                break;
	    case 3:
	        cout << "You selected the even roulette numbers" << "\n";
		number_array = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36};
		valid_number_choice = true;
		break;
	    case 4:
	        cout << "You selected the high roulette numbers" << "\n";
		number_array = {19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
		valid_number_choice = true;
		break;
	    case 5:
	        cout << "You selected the low roulette numbers" << "\n";
		number_array = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
		valid_number_choice = true;
		break;
	    case 6:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid number choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your roulette numbers.  Thanks..." << "\n";
    return number_array;

}


//Function to deal with dozens bets
array<int, 12> dozens_bet(char bet_type){
    
    bool valid_number_choice = false;
    int option;
    array<int, 12> number_array;

    string intro = "Dozens bet roulette number options.  Select an option from 0 to 3: ";
    string string0 = "Option 0: Refers to the roulette numbers 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12";
    string string1 = "Option 1: Refers to the roulette numbers 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24";
    string string2 = "Option 2: Refers to the roulette numbers 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36";
    string string3 = "Option 3: Quit the game";

   
    string dozens_bet_numbers[] = {intro, string0, string1, string2, string3};

    int string_array_length = sizeof(dozens_bet_numbers)/sizeof(dozens_bet_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << dozens_bet_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette number options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the roulette numbers 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12" << "\n\n";
		number_array = {1,2,3,4,5,6,7,8,9,10,11,12};
		valid_number_choice = true;
                break;
            case 1:
                cout << "You selected the roulette numbers 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24" << "\n\n";
		number_array = {13,14,15,16,17,18,19,20,21,22,23,24};
		valid_number_choice = true;
                break;
            case 2:
                cout << "You selected the roulette numbers 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36" << "\n\n";
		number_array = {25,26,27,28,29,30,31,32,33,34,35,36};
		valid_number_choice = true;
                break;
	    case 3:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500,500,500,500,500,500,500,500,500,500,500,500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid number choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your roulette numbers.  Thanks..." << "\n";
    return number_array;

}



//Function to deal with basket bet
array<int, 5> basket_bet(char bet_type){
    
    bool valid_number_choice = false;
    int option;
    array<int, 5> number_array;

    string intro = "Basket bet (roulette numbers 0, 00, 1, 2, 3)";
    string string0 = "Option 0:  You selected the numbers 0, 00, 1, 2, 3"; 
    string string1 = "Option 1: Quit the game";
   
    string basket_bet_numbers[] = {intro, string0, string1};

    int string_array_length = sizeof(basket_bet_numbers)/sizeof(basket_bet_numbers[0]);
    
    int pageSize = 20;
    int num_pages = (string_array_length + pageSize -1)/pageSize;


    while(!valid_number_choice){
        for (int page = 0; page < num_pages; ++page){  //Page loop
            cout << "Page " << page + 1 << "/" << num_pages << ":\n";
	    for (int i=page*pageSize; i < (page + 1) *pageSize && i < string_array_length; ++i){  //Results loop
	        cout << basket_bet_numbers[i] << "\n";    
	    }
      
            cout << "Enter 'm' to see more of the list..." << "\n";
            char choice;
	    bool page_choice = false;
	    
	    while(!page_choice){
                cin >> choice;

		if(choice == 'm' || choice == 'M'){
		    page_choice = true;
		    break;
		} else {		
	            cout << "You didn't select the letter 'm'.  Try again:" << "\n";
	        }    
	    }
        }
        
        //Flag to check if number was entered.	
        bool number_flag = false;

        while(!number_flag){
	    cout << "Pick your numbered option:" << "\n";
            cin >> option;
            if(cin.fail() || cin.peek() != '\n'){
                cout << "You didn't enter one of the roulette number options above....Try again...." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
	        number_flag = true;
	        break;
            }
	}

        switch(option){
	    case 0:
                cout << "You selected the roulette numbers 0, 00, 1, 2, 3" << "\n\n";
		number_array = {0,1,2,3,37};
		valid_number_choice = true;
                break;
	    case 1:
	        cout << "Thanks for playing!" << "\n";
		number_array = {500,500,500,500,500};
		valid_number_choice = true;
		break;
	    default:
	        cout << "Invalid number choice.  Please pick again." << "\n\n";
		continue;
        }
    }
    
    cout << "You successfully picked your roulette numbers.  Thanks..." << "\n";
    return number_array;

}


template <size_t Size>
bool spin_wheel(const array<int, Size>& number_array){
    
    //Seed value
    srand(time(nullptr));

    //Generate random number
    int search_number = rand() % 38;
    int array_size;
    cout << "Spinning the wheel..." << "\n";

    if(search_number == 37){
        cout << "The number that came up was: " << "00" << "\n";
    }else{
        cout << "The number that came up was: " << search_number << "\n";
    }
    array_size = sizeof(number_array)/sizeof(number_array[0]);
    for (int i=0; i < array_size; ++i){
        if (number_array[i] == search_number){
	    return true;
	}
    }
    return false;
}

float update_balance(float balance, float bet_amount,  bool win, int payout_factor){
    if(win){
        balance = balance + payout_factor*bet_amount;
    }else{
        balance = balance - bet_amount;
    }

    return balance;
        
}

int main(){ 

    //Betting balance money	 
    float balance;

    //Chosen type of roulette bet
    char chosen_bet_type;

    //Chosen number for a single number bet.
    array<int, 1> chosen_number_array = {500};

    //Array to hold both numbers of a split bet.
    array<int, 2> split_bet_array = {500,500};

    //Array to hold all 3 numbers of a street bet.
    array<int, 3> street_bet_array = {500, 500, 500};

    //Array to hold all 4 numbers of a corner bet.
    array<int, 4> corner_bet_array = {500, 500, 500, 500};

    //Array to hold all 6 numbers of a six-line bet.
    array<int, 6> six_line_bet_array = {500, 500, 500, 500, 500, 500};

    //Array to hold all 12 numbers of a column bet.
    array<int, 12> column_bet_array = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};

    //Array to hold all 18 numbers of an outside bet.
    array<int, 18> outside_bet_array = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    
    //Array to hold all 12 numbers of a dozens bet.
    array<int, 12> dozens_bet_array = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    
    //Array to hold all 5 numbers of a basket bet.
    array<int, 5> basket_bet_array = {500, 500, 500, 500, 500};
  
    //Payout factor
    int payout_factor;

    //Flag to hold whether or not player won or lost their bet.
    bool bet_won;

    //Betting balance flag
    bool bet_flag = false;

    //Betting amount flag
    bool bet_amount_flag =false;

    //Betting amount
    float bet_amount;

    //Play again?
    char play_again;

    //still playing
    bool still_playing = true;


    //Get starting balance 
    cout << "Welcome to roulette!" << "\n";


    while(!bet_flag){
        cout << "Enter your betting balance to start with: " << "\n";
        cin >> balance;
       
	// cin.fail() checks if input is the right data type for the variable.
	// cin.peek() checks for other types of characters being present after the initial input for the data type.
	// cin.clear() clears any error flags that may have come up
	// cin.ignore() clears the input buffer before getting new input.
        if(cin.fail() || cin.peek() != '\n'){
            cout << "Invalid betting amount...Please enter a valid amount..." << "\n";
	    cin.clear();
	    cin.ignore(10000, '\n');
        }else{ 
            cout << "\n\n" << "Your starting balance is: $" << std::fixed << setprecision(2) << balance << "\n";
	    bet_flag = true;
	    break;
        }
    }

    while(still_playing){

	
        //Play again boolean
        bool play_again_status = false;

        cout << "Your current balance is: $" << std::fixed << setprecision(2) << balance << "\n";
	if(balance <= 0){
	    cout << "Sorry...You don't have any more money to play with." << "\n";
	    break;

	}


        while(!bet_amount_flag){
            cout << "Enter the amount you want to bet: " << "\n";
            cin >> bet_amount;
       
            if((cin.fail()) || (cin.peek() != '\n') || (bet_amount > balance)){
                cout << "Invalid betting amount...Please enter a valid amount..." << "\n";
	        cin.clear();
	        cin.ignore(10000, '\n');
            }else{ 
                cout << "\n" << "You bet $" << std::fixed << setprecision(2) << bet_amount << "\n";
	        bet_flag = true;
	        break;
            }
        } 


        chosen_bet_type = choose_bet_type();

        switch(chosen_bet_type){
            case 'A':
	    case 'a':
                chosen_number_array = straight_up(chosen_bet_type);
                
                //Quit game if option chosen  
		if (chosen_number_array[0] == 500){
		    still_playing = false;
		    break;
		}

	        payout_factor = 35;
	        bet_won = spin_wheel(chosen_number_array);

	        if(bet_won){
	          cout << "You won!  Congratulations!..." << "\n";
	         }else{
	          cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
                
                while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'B':
	    case 'b':
                split_bet_array = split_bet(chosen_bet_type); 
                if (split_bet_array[0] == 500){
		    still_playing = false;
		    break;
		}
	        payout_factor = 17;
	        bet_won = spin_wheel(split_bet_array);

	        if(bet_won){
	            cout << "You won!  Congratulations!..." << "\n";
	         }else{
	            cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
                
		while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'C':
	    case 'c':
                street_bet_array = street_bet(chosen_bet_type); 
                if (street_bet_array[0] == 500){
		    still_playing = false;
		    break;
		}
	        payout_factor = 11;
	     
	        bet_won = spin_wheel(street_bet_array);

	        if(bet_won){
	            cout << "You won!  Congratulations!..." << "\n";
	         }else{
	            cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
		
		while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'D':
	    case 'd':
                corner_bet_array = corner_bet(chosen_bet_type); 
                if (corner_bet_array[0] == 500){
		    still_playing = false;
		    break;
		}
	        payout_factor = 8;

	        bet_won = spin_wheel(corner_bet_array);

	        if(bet_won){
	            cout << "You won!  Congratulations!..." << "\n";
	         }else{
	            cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
		
		while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'E':
	    case 'e':
                six_line_bet_array = six_line_bet(chosen_bet_type); 
                if (six_line_bet_array[0] == 500){
		    still_playing = false;
		    break;
		}
	        payout_factor = 5;
	     
	        bet_won = spin_wheel(six_line_bet_array);

	        if(bet_won){
	            cout << "You won!  Congratulations!..." << "\n";
	         }else{
	            cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
		
		while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'F':
	    case 'f':
                outside_bet_array = outside_bet(chosen_bet_type); 
                if (outside_bet_array[0] == 500){
		    still_playing = false;
		    break;
		}
	        payout_factor = 1;
	     
	        bet_won = spin_wheel(outside_bet_array);

	        if(bet_won){
	            cout << "You won!  Congratulations!..." << "\n";
	         }else{
	            cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
		
		while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'G':
	    case 'g':
                column_bet_array = column_bet(chosen_bet_type); 
                if (column_bet_array[0] == 500){
		    still_playing = false;
		    break;
		}
	        payout_factor = 2;
	     
	        bet_won = spin_wheel(column_bet_array);

	        if(bet_won){
	            cout << "You won!  Congratulations!..." << "\n";
	         }else{
	            cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
		
		while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'H':
	    case 'h':
                dozens_bet_array = dozens_bet(chosen_bet_type); 
                if (dozens_bet_array[0] == 500){
		    still_playing = false;
		    break;
		}
	        payout_factor = 2;
	     
	        bet_won = spin_wheel(dozens_bet_array);

	        if(bet_won){
	            cout << "You won!  Congratulations!..." << "\n";
	         }else{
	            cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
		
		while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'I':
	    case 'i':
                basket_bet_array = basket_bet(chosen_bet_type); 
                if (basket_bet_array[0] == 500){
		    still_playing = false;
		    break;
		}
	        payout_factor = 6;
	     
	        bet_won = spin_wheel(basket_bet_array);

	        if(bet_won){
	            cout << "You won!  Congratulations!..." << "\n";
	         }else{
	            cout << "Sorry, you lost...Better luck next time..." << "\n";
	         }
	        balance = update_balance(balance, bet_amount, bet_won, payout_factor);
	        cout << "Your new balance is $" << std::fixed << setprecision(2) << balance << "\n";
		
		while(!play_again_status){
		    cout << "Would you like to play again(y/n)?" << "\n";
		    cin >> play_again;
		    if(play_again == 'Y' || play_again == 'y'){
	                still_playing = true;
			play_again_status = true;
		    }
		    else if(play_again == 'N' || play_again == 'n' ){
		        still_playing = false;
			play_again_status = true;
		    }
		    else{
	                cout << "Invalid choice.  Please select y or n for yes or no..." << "\n";
			continue;
		    }
		}
	        break;
	    case 'Q':
	    case 'q':
               still_playing = false;
        }	   

    }
    cout << "You final balance is $" << std::fixed << setprecision(2) << balance << "\n"; 
    cout << "Thanks for playing roulette!" << "\n";

    return 0;
}
