#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

/*
1 - Задачка

char askYesNo1();

char askYesNo2( string question ); 

int main()
{
    char answer1 = askYesNo1();
    cout << "Thanks for answering: " << answer1 << "\n\n";

    char answer2 = askYesNo2("Do you wish to save you game?");
    cout << "Thanks for answering: " << answer2 << "\n";

    return 0;
}

char askYesNo1()
{
    char responsel;

    do
    {
        cout << "Please enter 'y' or 'n': ";
        cin >> responsel;
    }while ( responsel != 'y' && responsel != 'n' );

    return responsel;
}

char askYesNo2( string question )
{
    char response2;

    do
    {
        cout << question << " (y/n): ";
        cin >> response2;
    }while ( response2 != 'y' && response2 != 'n' );
    
    return response2;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

/*
2 - Ззадачка    

    void func();

    int main()
    {
    int var = 5;

    cout << "In main() var is: " << var << "\n\n";
    func();
    cout << "Bsck in main() var is: " << var << "\n\n";

    {
        cout << "In main() in a new scope var is: " << var << "\n\n";
        cout << "Creating new var in new scope.\n";
        int var = 10;
        cout << "In main() in a new scope var is: " << var << "\n\n"; 
    }
    cout << "At end of main() var created in new scope no longer exists.\n";
    cout << "At end main() var is: " << var << "\n"; 

    return 0;
}

void func()
{
    int var = -5;
    cout << "In func() var is: " << var << "\n\n";
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

/*
3 - Задачка

int glob = 10;

void access_global();

void hide_global();

void change_global();

int main(){

    cout << "In main() glob is: " << glob << endl;

    access_global();
    hide_global();

    cout << "In main() glob is: " << glob << "\n\n";

    change_global();
    cout << "In main() glob is: " << glob << "\n\n";

    return 0;
}

void access_global()
{
    cout << "In acces_global() glob is: " << glob << "\n\n"; 
}

void hide_global()
{
    int glob = 0;
    cout << "In hide_global() glob is: " << glob << "\n\n";
}

void change_global()
{
    glob = -10;
    cout << "In chage_global() glob is: " << glob << "\n\n";
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 


/*
4 - Задачка

int askNumber( int high, int low = 1 );

int main()
{
    int number = askNumber(5);
    cout << "Thanks for entering: " << number << "\n\n";

    number = askNumber( 10, 5 );
    cout << "Thanks for enterning: " << number << "\n\n";

    return 0;
}

int askNumber( int high, int low )
{
    int num;
    do
    {
        cout << "Please enter a number" << " (" << low << " - " << high << "): ";
        cin >> num;
    }while( num > high || num < low );
    
    return num;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
5 - Задачка

int triple(int number);
string triple(string text);

int main()
{
    {
        cout << "Tripling 5: " << triple(5) << "\n\n";
        cout << "Triolin 'gamer' : " << triple("gamer") << endl;
    }
    return 0;
}

int triple(int number)
{
    return(number * 3);
}

string triple(string text)
{
    return(text + text + text);
}
*/



// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
6 - Задачка

int radiation(int health);

int main()
{
    int helth = 80;
    cout << "Your health is " << helth << "\n\n";

    helth = radiation(helth);
    cout << "Your health is " << helth << "\n\n";

    helth = radiation(helth);
    cout << "Your health is " << helth << "\n\n";

    helth = radiation(helth);
    cout << "Your health is " << helth << "\n\n";

    return 0;
}

 inline int radiation(int health)
{
    return (health / 2);
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
7 - Задачка
string askText(string prompt);

int askNumber(string prompt);

void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
    cout << "Welcome to Mad Lin.\n\n";

    cout << "Answer the following questions to help create a new strory.\n";

    string name = askText("Please enter a name: ");

    string noun = askText("Please enter a plural noun: ");

    int number = askNumber("Please enter a number: ");

    string bodyPart = askText("Please enter a body part: ");

    string verb = askText("Please string a verb: ");

    tellStory(name, noun, number, bodyPart, verb);

    return 0;
}

string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}

int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
    cout << name << endl;
    cout << noun << endl;
    cout << noun << endl;
    cout << number << endl;
    cout << noun << endl;
    cout << name << endl;
    cout << noun << endl;
    cout << name << endl;
    cout << bodyPart << endl;
    cout << verb << endl;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*  
    7 - Задачка

    int main()
    {   
    int myScore = 1000;

    int& mikesScore = myScore;

    cout << "myScore is: " << myScore << "\n";

    cout << "mikeScores is: " << mikesScore << "\n\n";

    cout << "Adding 500 to myScore\n";

    myScore += 500;

    cout << "myScore is: " << myScore << "\n";
    
    cout << "mikeScores is: " << mikesScore << "\n\n";

    cout << "Adding 500 to mikesScore\n";

    mikesScore += 500;

    cout << "myScore is: " << myScore << "\n";

    cout << "mikesScores is: " << mikesScore << "\n\n";

    return 0;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
8 - Задачка 

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
    int myScore = 150;
    int yourScore = 1000;

    cout << "Original values\n";

    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";

    cout << "Colling badSwap()\n";

    badSwap(myScore, yourScore);

    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";

    cout << "Calling goodSwap()\n";
    goodSwap(myScore, yourScore);
    
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";

}

void badSwap(int x, int y)
{
    swap(x, y);
}

void goodSwap(int& x, int& y)
{
    swap(x, y);
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*

9 - Задачка

void display(const vector<string>& inventory);

int main()
{
    vector <string> inventory;
    
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    display(inventory);

    return 0;
}

void display(const vector<string>& vec)
{
    cout << "Your item:\n";
    for(vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
    {
        cout << *iter << endl;
    }
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*

10 - Задачка

string& refToElement(vector<string>& inventory, int i);

int main()
{
    vector <string> inventory;

    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "Sending the returned reference to cout:\n";
    
    cout << refToElement(inventory, 0) << "\n\n"; 

    cout << "Assingning the returned reference to another reference.\n";

    string& rStr = refToElement(inventory, 1);

    cout << "Sending the new reference to cout:\n";

    cout << rStr << "\n\n";

    cout << "Assinging the returned reference to a string object.\n";

    string str = refToElement(inventory, 2);

    cout << "Sending the new string object to cout:\n";

    cout << str << "\n\n";

    cout << "Alterning an object through a returned reference.\n";

    rStr = "Healthing Potion";

    cout << "Sending the altered object to cout :\n";
    
    cout << inventory[1] << endl;

    return 0;
}

string& refToElement(vector<string>& vec, int i)
{
    return vec[i];
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*

11 - Задачка Крестики нолики с помощью ссылок

const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

void instructions();
char askYesNo(string question);
int askNumber(string qestion, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector <char>& board, int move);
int humanMove(const vector <char>& board, char human);
int computerMove(vector <char> board, char computer);
void announceWinner(char winner, char computer, char human);

int main()
{
    int move;

    const int NUM_SQUARES = 9;
    vector <char> board(NUM_SQUARES, EMPTY);

    instructions();

    char human = humanPiece();
    char computer = opponent(human);

    char turn = X;
    displayBoard(board);

    while(winner(board) == NO_ONE)
    {
        if(turn == human)
        {
            move = humanMove(board, human);
            board[move] = human;
        }
        else
        {
            move = computerMove(board, computer);
            board[move] = computer;
        }
        displayBoard(board);
        turn = opponent(turn);
    }
    announceWinner(winner(board), computer, human);
    return 0;
}

void instructions()
{
    cout << "Добро пожаловать в захПриготовься, человек. Битва вот-вот начнется.\n\nватывающее противостояние человека и машины: крестики-нолики.\n";
    cout << "--где человеческий мозг противостоит кремниевому процессору\n\n";
    cout << "Сделайте свой ход известным, введя число от 0 до 8. Число\n";
    cout << "соответствует желаемой позиции на доске, как показано на рисунке:\n\n";

    cout << " 0 | 1 | 2\n";
    cout << " ---------\n";
    cout << " 3 | 4 | 5\n";
    cout << " ---------\n";
    cout << " 6 | 7 | 8\n\n";
   

    cout << "Приготовься, человек. Битва вот-вот начнется.\n\n";
}

char askYesNo(string question)
{
    char response;
    do
    {
        cout << question << " (y/n): ";
        cin >> response;
    }while(response != 'y' && response != 'n');

    return response;
}

int askNumber(string question, int high, int low)
{
    int number;
    do 
    {
        cout << question << " (" << low << " - " << high << "): ";
        cin >> number;
    }while(number > high || number < low);

    return number;
}

char humanPiece()
{
    char go_first = askYesNo("Вам нужен первый ход?");
    if(go_first == 'y')
    {
        cout << "\nТогда сделайте первый ход. Он вам понадобится.\n";
        return X;
    }
    else
    {
        cout << "\nВаша храбрость погубит вас... Я пойду первым.\n";
        return O;
    }
}

char opponent(char piece)
{
    if(piece == X)
    {
        return O;
    }
    else
    {
        return X;
    }
}

void displayBoard(const vector<char>& board)
{
    cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
    cout << "\n\n";
}

char winner(const vector <char>& board)
{
    const int WINNING_ROWS[8][3] = { {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6} };

    const int TOTAL_ROWS = 8;
    for(int row = 0; row < TOTAL_ROWS; ++row)
    {
        if ( (board[WINNING_ROWS[row][0]] != EMPTY ) &&
        (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
        (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]] ))
        {
            return board[WINNING_ROWS[row][0]];
        }
    }
    if(count(board.begin(), board.end(), EMPTY) == 0)
    {
    return TIE;
    }

    return NO_ONE;
}

inline bool isLegal(int move, const vector<char>& board)
{
    return (board[move] == EMPTY);
}

int humanMove(const vector <char>& board, char human)
{
    int move = askNumber("Куда вы переедете?", (board.size() - 1));
    while(!isLegal(move, board))
    {
        cout << "\nThat square is already accupied, foolish human.\n";
        move = askNumber("Куда вы переедете?", (board.size() - 1));
    }
    cout << "Отлично...\n";
    return move;
}

int computerMove(vector <char> board, char computer)
{
    unsigned int move = 0;
    bool found = false;
    while(!found && move < board.size())
    {
        if(isLegal(move, board))
        {
            board[move] = computer;
            found = winner(board) == computer;
            board[move] = EMPTY;
        }
        if(!found)
        {
            ++move;
        }
    }

    if(!found)
    {
        move = 0;
        char human = opponent(computer);
        while(!found && move < board.size())
        {
            if(isLegal(move, board))
            {
                board[move] = human;
                found = winner(board) == human;
                board[move] = EMPTY;
            }
            if(!found)
            {
                ++move;
            }
        }
    }
    if(!found)
    {
        move = 0;
        unsigned int i = 0;
        const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};

        while(!found && i < board.size())
        {
            move = BEST_MOVES[i];
            if(isLegal(move, board))
            {
                found = true;
            }
            ++i;
        }
    }
    cout << "Я возьму квадратное число " << move << endl;
    return move;
}

void announceWinner(char winner, char computer, char human)
{
    if(winner == computer)
    {
        cout << winner << "'s won!\n";
        cout << "Как я и предсказывал, человек, я снова торжествую — доказательство\n";
        cout << "что компьютеры превосходят людей во всех отношениях.\n";
    }
    else if(winner == human)
    {
        cout << "'s won!\n";
        cout << "Нет нет! Не может быть! Каким-то образом ты обманул меня, человек.\n";
        cout << "Но больше никогда! Я, компьютер, так клянусь!\n";
    }
    else
    {
        cout << "Это галстук.\n";
        cout << "Тебе больше всего повезло, человек, и ты каким-то образом сумел связать меня.\n";
        cout << "Празднуйте... это лучшее, чего вы когда-либо достигнете.\n";
    }
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


/*

11 - Задачка

int main()
{
    int* pAPPointer;
    int* pScore = 0;
    int score = 1000;
    pScore = &score;

    cout << "Assingning &score to pScore\n";

    cout << "&score is: " << &score << "\n";
    cout << "pScore is: " << pScore << "\n";

    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Adding 500 to score\n";
    score += 500;

    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Adding 500 to *pScore\n";
    *pScore += 500;
    
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &newScore to pScore\n";
    int newScore = 5000;

    pScore = &newScore;

    cout << "&newScore is: " << &newScore << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "newScore is: " << newScore << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &str to pStr\n";
    string str = "score";

    string* pStr = &str;
    cout << "str is: " << str << "\n";
    cout << "*pStr is: " << *pStr << "\n";

    cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
    cout << "pStr->size() is: " << pStr->size() << "\n";

    return 0;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
12 - Задачка

void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);

int main()
{
    int myScore = 150;
    int yourScore = 1000;

    cout << "Original values\n";
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
    cout << "calling badSwap()\n";
    badSwap(myScore, yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";

    cout << "calling goodSwap()\n";
    goodSwap(&myScore, &yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n";

    return 0;
}

void badSwap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void goodSwap(int* const pX, int* const pY)
{
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
13 - Задачка

string* ptrtoelement(vector <string>* const pvec, int i);

int main()
{
    vector <string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << *(ptrtoelement(&inventory, 0)) << endl;

    string* pstr = ptrtoelement(&inventory, 1);
    cout << *pstr << endl;

    string str = *(ptrtoelement(&inventory, 2));
    cout << str << endl;

    *pstr = "Healting Potion";

    cout << inventory[1] << endl; 

    return 0;
}

string* ptrtoelement(vector <string>* const pvec, int i)
{
    return &((*pvec)[i]);
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
14 - Задачка


void increase(int* const array, const int NUM_ELEMENTS);
void display(const int* const array, const int NUM_ELEMENTS);

int main()
{
    const int NUM_SCORES = 3;
    int highScores[NUM_SCORES] = {5000, 3500, 2700};

    cout << *highScores << endl;
    cout << *(highScores + 1) << endl;
    cout << *(highScores + 2) << endl;

    increase(highScores, NUM_SCORES);

    cout << endl << endl;

    display(highScores, NUM_SCORES);

    return 0;
}

void increase(int* const array, const int NUM_ELEMENTS)
{
    for(int i = 0; i < NUM_ELEMENTS; i++)
    {
        array[i] += 500;
    }
}

void display(const int* const array, const int NUM_ELEMENTS)
{
    for(int i = 0; i < NUM_ELEMENTS; i++)
    {
        cout << array[i] << endl;
    }
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//Обьектно ориентированное программирование(ООП);

/*
15 - Задачка

class Critter
{
public:
    int m_hunger;
    void Greet();
};

void Critter::Greet()
{
    cout << "Hi. I'm a critter. My hunger level is " << m_hunger << ".\n";
}

int main()
{
    Critter crit1;
    Critter crit2;

    crit1.m_hunger = 9;
    cout << "crit1's hunger level is " << crit1.m_hunger << ".\n";
   
    crit2.m_hunger = 3;
    cout << "crit2's hunger level is " << crit2.m_hunger << ".\n\n";

    crit1.Greet();
    crit2.Greet();
    
    return 0;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
16 - Задачка

class Critter
{
public:
    int m_Hunger;
    Critter(int hunger = 0);
    void Greet();
};

Critter::Critter(int hunger)
{
    cout << "A new critter has been born!" << endl;
    m_Hunger = hunger;
}

void Critter::Greet()
{
    cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << ".\n\n";
}

int main()
{
    Critter crit(7);
    crit.Greet();

    return 0;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
17 - Задачка

class Critter
{
public: // Начало открытого раздела
    Critter(int hunger = 0); // конструктор
    int GetHunger() const; // члены функции
    void SetHunger(int hunger); // члены функции
private: // Начало закрытого раздела
    int m_Hunger; // Члены данных
};

Critter::Critter(int hunger):

m_Hunger(hunger)
{
    cout << "A new critter has been born!" << endl;
}

int Critter::GetHunger() const
{
    return m_Hunger;
}

void Critter::SetHunger(int hunger)
{
    if(hunger < 0)
    {
        cout << "You can't set a critter's hunger to a negative number.\n\n";
    }
    else
    {
        m_Hunger = hunger;
    }
}


int main()
{
    Critter crit(5);
    //cout << crit.m_hunger; // Не допустимо, член m_hunger является закрытым!
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
    cout << "Calling SetHunger() with -1.\n ";
    crit.SetHunger(-1);
    cout << "Calling SetHunger() with 9.\n";
    crit.SetHunger(9);
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";  

    return 0;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
18 - Задачка

class Critter
{
public:
    static int s_Total; // Обьявление статической переменной-члена
    Critter(int hunger = 0);
    static int GetTotal(); // Протатип статической функции-члена
private:
    int m_Hunger;
};

int Critter::s_Total = 0; // инициализация статической переменной-члена
Critter::Critter(int hunger):
m_Hunger(hunger)
{
    cout << endl;
    cout << "A critter has been born!" << endl;
    cout << endl;
    ++s_Total;
}

int Critter::GetTotal() // Определение статической функции-члена
{
    return s_Total;
}

int main()
{
    cout << "The total number of critters is: ";
    cout << Critter::s_Total << endl;
    Critter crit1, crit2, crit3;
    cout << "The total number of critters is: ";
    cout << Critter::GetTotal() << endl;

    return 0;
}
*/

//Игра тамагочи



/*
19 - Задачка

class Critter
{
public: 
    Critter(int hunger = 0, int boredom = 0);
    
    
    void Talk(); 
    void Eat(int food = 4);
    
    void Play(int fun = 4); 
    
private: 
    int m_Huger; 
    int m_Boredom;
    int GetMood() const;
    void PassTime(int time = 1); 
};

Critter::Critter(int hunger, int boredom): 
m_Huger(hunger),
m_Boredom(boredom)
{}

inline int Critter::GetMood() const 

{                                    
    return(m_Huger + m_Boredom);
}

void Critter::PassTime(int time) 
{
    m_Huger += time;
    m_Boredom += time;
}

void Critter::Talk() 
{
    cout << "I'm a critter and i feel ";
    int mood = GetMood();
    if(mood > 15)
    {
        cout << "Возмущен.\n";
    }
    else if(mood > 10)
    {
        cout << "Чувствует себя неуютно.\n";
    }
    else if(mood > 5)
    {
        cout << "Доволен.\n";
    }
    else
    {
        cout << "Счастлив.\n";
    }
    PassTime();
}

void Critter::Eat(int food)  
{
    cout << "Brruuppp.\n";
    m_Huger -= food;
    if(m_Huger < 0)
    {
        m_Huger = 0;
    }
    PassTime();
}

void Critter::Play(int fun) 
{
    cout << "Wheee!\n";
    m_Boredom -= fun;
    if(m_Boredom < 0)
    {
        m_Boredom = 0;
    }
    PassTime();
}

int main()
{
    Critter crit;
    crit.Talk();
    int choice;
    do
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Выход\n";
        cout << "1 - Прислушивайтесь к своему животному\n";
        cout << "2 - Кормить животное\n";
        cout << "3 - Играть с животным\n\n";
        cout << "Выбрать: ";
        cin >> choice;
        switch (choice)
        {
            case 0:
                cout << "Good-bye.\n";
                break;
            case 1:
                crit.Talk();
                break;
            case 2:
                crit.Eat();
                break;
            case 3:
                crit.Play();
                break;
            default:
                cout << "\nИзвините, но " << choice << " не верный выбор.\n";        
        }
    }while(choice != 0);

    return 0;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
20 - Задачка

class critter
{
public:
    critter(const string& name = "");
    string getname() const;
private:
    string m_name;
};

critter::critter(const string& name):
m_name(name)
{}

inline string critter::getname() const
{
    return m_name;
}

//

class farm
{
public:
    farm(int spaces);
    void add(const critter& acritter);
    void rollcall() const;
private:
    vector <critter> m_critters;
};

farm::farm(int spaces)
{
    m_critters.reserve(spaces);
}

void farm::add(const critter& acritter)
{
    m_critters.push_back(acritter);
}

void farm::rollcall() const
{
    for(vector <critter>::const_iterator iter = m_critters.begin(); iter != m_critters.end(); ++iter)
    {
        cout << iter -> getname() << " here.\n";
    }
}

//

int main()
{
    critter crit("poochie");
    cout << "my critter's name is " << crit.getname() << endl;

    cout << "\ncreating critter farm.\n";
    farm myfarm(3);

    cout << "\nadding three critters to the farm.\n";
    myfarm.add(critter("moe"));
    myfarm.add(critter("larry"));
    myfarm.add(critter("curly"));

    cout << "\ncalling roll...\n";

    myfarm.rollcall();

    return 0;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
21 - Задачка

class critter
{

friend void peek(const critter& acritter);
friend ostream& operator<<(ostream& os, const critter& acritter);

public:
    critter(const string& name);
private:
    string m_name;
};

critter::critter(const string& name)
{
    m_name = name;
}

void peek(const critter& acritter);
ostream& operator<<(ostream& os, const critter& acritter);

int main()
{
    critter crit("poochie");
    cout << "calling peek() to access crit's private data member, m_name: \n";

    peek(crit);
    cout << "\nsending crit object to cout with the << operator:\n";
    cout << crit << endl;

    return 0;
}

void peek(const critter& acritter)
{
    cout << acritter.m_name << endl;
}

ostream& operator<<(ostream& os, const critter& acritter)
{
    os << "critter object - ";
    os << "m_name: " << acritter.m_name;
    return os;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
22 - Задачка

int* intoneheap();
void leak1();
void leak2();

int main()
{
    int* pheap = new int;
    *pheap = 10;
    cout << "*pheap: " << *pheap << "\n\n";

    int* pheap2 = intoneheap();
    cout << "*pheap2: " << *pheap2 << "\n\n";

    cout << "freeding memory pointed to by pheap.\n\n";
    delete pheap;

    cout << "freeding memory pointed to by pheap2.\n\n";
    delete pheap2;

    pheap = 0;
    pheap2 = 0;

    return 0;
}

int* intoneheap()
{
    int* ptemp = new int(20);
    return ptemp;
}

void leak1()
{
    int* drip1 = new int(30);
}

void leak2()
{
    int* drip2 = new int(50);
    drip2 = new int(100);
    delete drip2;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
23 - Задачка

class critter
{
public:
    critter(const string& name, int age);
    ~critter();
    critter(const critter& c);
    critter& operator=(const critter& c);
    void greed() const;
private:
    string* m_pname;
    int m_age;
};

critter::critter(const string& name, int age)
{
    cout << "constructor called\n";
    m_pname = new string(name);
    m_age = age;
}

critter::~critter()
{
    cout << "destructor called\n";
    delete m_pname;
}

critter::critter(const critter& c)
{
    cout << "copy constructor called\n";
    m_pname = new string(*c.m_pname);
    m_age = c.m_age;
}

critter& critter::operator=(const critter& c)
{
    cout << "overloaded assignment operator called\n";
    if(this != &c)
    {
        delete m_pname;
        m_pname = new string(*c.m_pname);
        m_age = c.m_age;
    }
    return *this;
}

void critter::greed() const
{
    cout << "i'm " << *m_pname << " and i'm " << m_age << " years old. ";
    cout << "&m_pname: " << &m_pname << endl;
}

void testdestructor();
void testcopyconstructor(critter acopy);
void testassignmentop();

int main()
{
    testdestructor();
    cout << endl;

    critter crit("poochie", 5);
    crit.greed();

    testcopyconstructor(crit);
    crit.greed();

    cout << endl;

    testassignmentop();

    return 0;
}

void testdestructor()
{
    critter todestroy("rover", 3);
    todestroy.greed();
}

void testcopyconstructor(critter acopy)
{
    acopy.greed();
}

void testassignmentop()
{
    critter crit1("crit1", 7);
    critter crit2("crit2", 9);

    crit1 = crit2;
    crit1.greed();
    crit2.greed();
    cout << endl;

    critter crit3("crit", 11);
    crit3 = crit3;
    crit3.greed();
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


//24 - Задачка

class player
{
public:
    player(const string& name);
    string getname() const;
    player* getnext() const;
    void setnext(player* next);
private:
    string m_name;
    player* m_pnext;
};

player::player(const string& name)
{
    m_name = name;
    m_pnext = 0;
}

string player::getname() const
{
    return m_name;
}

player* player::getnext() const
{
    return m_pnext;
}

void player::setnext(player* next)
{
    m_pnext = next;
}

class lobby
{
    friend ostream& operator<<(ostream& os, const lobby& alobby);
public:
    lobby();
    ~lobby();
    void addplayer();
    void removeplayer();
    void clear();
private:
    player* m_phead;
};

lobby::lobby()
{
    m_phead = 0;
}

lobby::~lobby()
{
    clear();
}

void lobby::addplayer()
{
    cout << "Пожалуйста введите имя нового игрока: ";
    string name;
    cin >> name;

    player* pnewplayer = new player(name);

    if(m_phead == 0)
    {
        m_phead = pnewplayer;
    }
    else
    {
        player* piter = m_phead;
        while(piter -> getnext() != 0)
        {
            piter = piter -> getnext();
        }
        piter -> setnext(pnewplayer);
    }
}

void lobby::removeplayer()
{
    if(m_phead == 0)
    {
        cout << "лобби игры пусто. Некому удалить!\n";
    }
    else
    {
        player* ptemp = m_phead;
        m_phead = m_phead -> getnext();
        delete ptemp;
    }
}

void lobby::clear()
{
    while(m_phead != 0)
    {
        removeplayer();
    }
}

ostream& operator<<(ostream& os, const lobby& alobby)
{
    player* piter = alobby.m_phead;
    os << "\nВот кто в игровом лобби:\n";
    if(piter == 0)
    {
        os << "лобби пустой.\n";
    }
    else
    {
        while (piter != 0)
        {
            os << piter -> getname() << endl;
            piter = piter -> getnext();
        }
    }
    return os;
}

int main()
{
    lobby mylobby;
    int choice;

    do
    {
        cout << mylobby;
        cout << "\nИгровое лобби\n";
        cout << "0 - выйти из программы.\n";
        cout << "1 - добавить игрока в лобби.\n";
        cout << "2 - удалить игрока из лобби.\n";
        cout << "3 - очистить лобби.\n";
        cout << endl << "выберите вариант: ";
        cin >> choice;
        switch (choice)
        {
            case 0:cout << "Пока.\n"; break;
            case 1:mylobby.addplayer(); break;
            case 2:mylobby.removeplayer(); break;
            case 3:mylobby.clear();break;
            default:cout << "неверный выбор.\n";
        }
    } 
    while(choice != 0);
    return 0;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
25 - задачка

class enemy
{
public:
    int m_damage;
    enemy();
    void attack() const;
};

enemy::enemy():
m_damage(10)
{}

void enemy::attack() const
{
    cout << m_damage << endl;
}

class boss : public enemy
{
public:
    int m_damagemultiplier;
    boss();
    void specialattack() const;
};

boss::boss():
m_damagemultiplier(3)
{}

void boss::specialattack() const
{
    cout << (m_damage * m_damagemultiplier) << endl;
}

int main()
{
    enemy enemy1;
    enemy1.attack();

    boss boss1;
    boss1.attack();

    boss1.specialattack();

    return 0;
}
*/

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
26 - Задачка

class enemy
{
public:
    enemy(int damage = 10);
    virtual ~enemy();
    void virtual attack() const;
protected:
    int* m_pdamage;
};

enemy::enemy(int damage)
{
    m_pdamage = new int(damage);
}

enemy::~enemy()
{
    cout << "In enemy destructor, deleting m_pdamage.\n";
    delete m_pdamage;
    m_pdamage = 0;
}

void enemy::attack() const
{
    cout << "An enemy attacks and inflicts " << *m_pdamage << " damage points.";
}

//

class boss : public enemy
{
public:
    boss(int multiplier = 3);
    virtual ~boss();
    void virtual attack() const;
protected:
    int* m_pmultiplier;
};

boss::boss(int multiplier)
{
    m_pmultiplier = new int(multiplier);
}

boss::~boss()
{
    cout << "In Boss destructor, deleting m_pmultiplier.\n";
    delete m_pmultiplier;
    m_pmultiplier = 0;
}
*/

//g++ gamefunc.cpp