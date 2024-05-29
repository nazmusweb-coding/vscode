#include "mycs50.h"

// Function to check single character or not
bool isSingleCharacter(const string& str) 
{
    return str.length() == 1;
}

// Get character input
char get_char(const char* txt)
{
    char input;
    bool validInput = false;

    do 
    {
        cout << txt;
        string userInput;
        cin >> userInput;
    
        input = userInput[0];
        validInput = isSingleCharacter(userInput);

    } while (!validInput);
    
    return input;
}

// Get double input
double get_double(const char* txt)
{
    double input;
    bool validInput = false;

    do 
    {
        cout << txt;
        string userInput;
        cin >> userInput;

        try 
        {
            input = stod(userInput);
            validInput = true;
        } 
        catch (const invalid_argument&) 
        {
            
        }
    } while (!validInput);
    
    return input;
}

// Get float input
float get_float(const char* txt)
{
    float input;
    bool validInput = false;

    do 
    {
        cout << txt;
        string userInput;
        cin >> userInput;

        try 
        {
            input = stof(userInput);
            validInput = true;
        } 
        catch (const invalid_argument&) 
        {
            
        }
    } while (!validInput);
    
    return input;
}

// Get integer input
int get_int(const char* txt)
{
    int input;
    bool validInput = false;

    do 
    {
        cout << txt;
        string userInput;
        cin >> userInput;

        try 
        {
            input = stoi(userInput);
            validInput = true;
        } 
        catch (const invalid_argument&) 
        {
            
        }
    } while (!validInput);
    
    return input;
}

// Get long integer input
long long get_long(const char* txt)
{
    long long input;
    bool validInput = false;

    do 
    {
        cout << txt;
        string userInput;
        cin >> userInput;

        try 
        {
            input = stol(userInput);
            validInput = true;
        } 
        catch (const invalid_argument&) 
        {
            
        }
    } while (!validInput);
    
    return input;
}

// Function to check valid string
void ContainsInteger(const string& input)
{
    for (char c : input)
    {
        if (isdigit(c))
        {
            throw invalid_argument("Invalid input, contains integer.\n");
        }
    }
}

// Get string input
string get_string(const char* txt)
{
    string input;
    bool validInput = false;

    do
    {
        try
        {
            cout << txt;
            getline(cin, input);
            ContainsInteger(input);
            validInput = true;
        }
        catch(const exception&)
        {
            
        }
    } while (!validInput);  
    
    return input;
}



// Get positive integer size
int mario::get_size()
{
    int n;
    do
    {
        n = get_int("Enter the size please: ");
    } while (n < 1);
    
    return n;
}

// Print grid of bricks
void mario::print_grid(int size)
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cout << "#";
        }
        cout << endl;
    }
}