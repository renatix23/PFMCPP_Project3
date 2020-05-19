/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main function at the bottom of that file,

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.







//1)
struct AudioInterface
{
    int speakerOuputs = 4;
    int micInputs = 8;
    int lineInputs = 8;
    float gain = 70.5f;
    bool phantomPower = false;
    std::string audioInterfaceName = "Arturia";

    AudioInterface()
    {
        speakerOuputs = 2;
        micInputs = 1;
        lineInputs = 1;
        gain = 0.0f;
        phantomPower = false;
    }

    void amplifySound(bool micGain = true);
    bool analogToDigital (bool convertion = true);
    void invertPhase(); 
    void manufacturerName()
    {
        std::cout << "Manufacturer Name = " << audioInterfaceName << std::endl;
    }
};


void AudioInterface::amplifySound(bool micGain)
{
    bool micConected = micGain;

    if (micConected == false)
    {
        std::cout << "Connect Mic" << micConected << "\n";
    }
    else
    {
        std::cout << "Amplified" << micConected << "\n";
    }
}


bool AudioInterface::analogToDigital(bool convertion)
{
    if (convertion == true)
    {
        std::cout << "Analog To Digital successful" << convertion << "\n";
    }
    else
    {
        std::cout << "Analog To Digital failed" << convertion << "\n";
    }

    return convertion;
}


void AudioInterface::invertPhase()
{
    int quantityOfMics = 2;
    bool changePolarity = false;

    if (quantityOfMics == 2)
    {
        changePolarity = true;
    }
    else
    {
        changePolarity = false;
    }
}


//2)
struct Tree
{
    float leaves = 5293.23f;
    int seeds;
    float water = 5.32f;
    int flowers = 32;
    float energy = 424.3f;

    Tree()
    {
        seeds = 1;
    }

    void photosynthesis();
    bool releaseOxygen (bool isPhotosynthesisDone = true);
    void produceFruit();
};


void Tree::photosynthesis()
{
    bool oxygen = false;
    bool plantEnergy = true;
    
    if (plantEnergy == true)
    {
        oxygen = true;
        std::cout << "Photosyntesis was made" << plantEnergy << "\n";
    }
}


bool Tree::releaseOxygen(bool isPhotosynthesisDone)
{
    isPhotosynthesisDone = true;
    return isPhotosynthesisDone;
}


void Tree::produceFruit()
{
    int quantityOfFruitPoints = 23;
    bool fruitsOnTree = false;

    if (quantityOfFruitPoints > 0)
    {
        fruitsOnTree = true;
        std::cout << "Yei, There are some fruits! Fruits produced " << quantityOfFruitPoints << "\n";
    }
    else
    {
        fruitsOnTree = false;
        std::cout << "D: We don't have Fruits! Fruits produced " << quantityOfFruitPoints << "\n";
    }
}


//3)
struct Dog
{
    int legs = 4;
    float fur = 8324.5f;
    int eyes = 2;
    int nose = 1;
    int tail = 1;
    int dogAge = 3;

    Dog()
    {
        dogAge = 3;
    }

    bool bark (bool isHungry = true);
    void eat();
    int jump (int bedHeight = 120);
    void DogAge()
    {
        std::cout << "Dog's Age = " << dogAge << std::endl;
    }
};


bool Dog::bark(bool isHungry)
{  
    int howLoud = 10;

    if (isHungry == true)
    {
        howLoud = 10;
        std::cout << "Bark loudness" << howLoud << "\n";
    }
    else
    {
        howLoud = 0;
        std::cout << "Bark loudness" << howLoud << "\n";
    }
    return howLoud;
}


void Dog::eat()
{
    bool isFoodInPlate = true;
    bool dogEats = false;

    if (isFoodInPlate== true)
    {
        dogEats = true;
        std::cout << "the dog is eating!" << std::endl;
    }
}


int Dog::jump(int bedHeight)
{
    int jumpHeight = 120;
    bool dogJump = true;

    if (jumpHeight == bedHeight)
    {
        dogJump = true;
    }
    return dogJump;
}


//4)
struct Monitor
{
    int woofer = 1;
    int tweeter = 2;
    int rcaInput = 2;
    int lineInput = 4;
    int auxInput = 1;

    Monitor()
    {
        woofer = 1;
        tweeter = 2;
        auxInput = 1;
    }

    void receiveSignal();
    void playSound();
    void changeVolume();
};


void Monitor::receiveSignal(){}


void Monitor::playSound()
{
    bool signalReceived = true;
    bool playSong = true;

    if (signalReceived == true)
    {
        playSong = true;
        std::cout << "Song is playing" << "\n";
    }
}


void Monitor::changeVolume()
{
    bool gainMoved = true;
    float volumeLevel = 60.5f;

    if (gainMoved == false)
    {
        volumeLevel = 0.0f;
        std::cout << "Needs more gain" << volumeLevel << "\n";
    }
}

//5)
struct Characters
{
    int body = 1;
    bool movement = true;
    int colourIndicator = 2;
    bool soundChar = true;
    int backgroundStory = 23;

    struct ColorIndicator 
    { 
        int red = 1;
        int blue = 2;
        int green = 3;
    
        int setColourSelector(int colour = 1);
    };

    Characters()
    {
        body = 1;
        colourIndicator = 1;
    }

    int move (int x = 2, int y = 5, int z = 7);
    void jump();
    bool run(bool isInARush = true);
};


int Characters::ColorIndicator::setColourSelector(int colour)
{
    if (colour == 1)
    {
        std::cout << "Red" << colour << "\n";
    }
    else if (colour == 2)
    {
        std::cout << "Blue" << colour << "\n";
    }
    else if (colour == 3)
    {
        std::cout << "Green" << colour << "\n";
    }
    return colour;
}


int Characters::move(int x, int y, int z)
{
    x = 13;
    y = 32;
    z = 41;
    return z;
}


void Characters::jump()
{
    bool keyPressed = true;
    bool charJump = true;

    if (keyPressed == true)
    {
        charJump = true;
        std::cout << "Character Jumps " << "\n";
    }
}


bool Characters::run(bool isInARush)
{
    int movePosition = 4;
    
    if (isInARush == true)
    {
        movePosition = 1;
    }
    else
    {
        movePosition = 0;
    }
    
    return movePosition;
}


//6)
struct Inventory
{
    int skillSlots = 2;
    int weapons = 25;
    int skins = 135;
    int pets = 5;
    int coins = 2134;
    int spaceLeft = 100;

    struct Pets
    { 
        int cat = 1;
        int penguin = 2;
        int horse = 3;
        int bear = 4;
        int wolf = 5;
    
        int selectPet(int pet = 5);
    };
 
    Inventory()
    {
        weapons = 1;
        skins = 0;
    }

    void saveItem();
    void checkIfSkinEquipped();
    void addItems();
    void spaceLeftOnInventory()
    {
        std::cout << "Space Left On Inventory = " << spaceLeft << std::endl;
    }
 };


int Inventory::Pets::selectPet(int pet)
{
    if (pet == 1)
    {
        std::cout << "Cat" << pet << "\n";
    }
    else if (pet == 2)
    {
        std::cout << "Penguin" << pet << "\n";
    }
    else if (pet == 3)
    {
        std::cout << "Horse" << pet << "\n";
    }
    else if (pet == 4)
    {
        std::cout << "Bear" << pet << "\n";
    }
    else if (pet == 5)
    {
        std::cout << "Wolf" << pet << "\n";
    }

    return pet;
}


void Inventory::saveItem()
{
    bool isGrabbed = true;
    bool getInBackpack = true;

    if (isGrabbed == true)
    {
        getInBackpack = true;
    }
}


void Inventory::checkIfSkinEquipped()
{
    bool isEquipped = true;
    bool checked = true;
    
    if (isEquipped == true)
    {
        checked = true;
        std::cout << "Item equipped!" << std::endl;
    }
}

void Inventory::addItems(){}

//7)
struct Level
{
    int difficult = 4;
    int bots = 27;
    int map = 13;
    bool clip = true;
    int checkpoint = 1;

    Level();

    void giveRewards();
    void saveProgress();
    void loadItems();
 };


void Level::giveRewards()
{
    bool addCoins = true;
    bool reachedCheckpoint = true;

    if (reachedCheckpoint == true)
    {
        addCoins = true;
    }
}


void Level::saveProgress(){}


void Level::loadItems()
{
    bool levelStart = false;
    bool loadScenery = true;

    if (levelStart == true)
    {
        loadScenery = true;
        std::cout << "Start Game!" << std::endl;
    }
}


//8)
struct UserInterface
{
    bool exitMenu = false;
    int levelSelector = 1;
    int characterSelection = 2;
    bool startOption = true;
    float healthBar = 99.8f;

    UserInterface()
    {
        exitMenu = false;
        levelSelector = 1;
        characterSelection = 0;
        startOption = false;
        healthBar = 0.0f;
    }

    void showWarning(bool accountIsSuspended = true);
    void showMap();
    bool endGame (bool buttonPressed = true); 
};


void UserInterface::showWarning(bool accountIsSuspended)
{   
    if (accountIsSuspended == true)
    {
        std::cout << "Your account has been suspended" << "\n";
    }
}


void UserInterface::showMap()
{
    bool buttonIsClicked = true;
    bool openMapWindow = false;

    if (buttonIsClicked == false)
    {
        openMapWindow = false;
    }
}


bool UserInterface::endGame(bool buttonPressed)
{
    buttonPressed = true;

    return buttonPressed;
}


//9)
struct Enemy
{
    int body = 1;
    int damage = 43;
    double speed = 4.3;
    int lives = 5;
    int reflex = 8;

    Enemy(){damage = 0;}

    void killPlayer (int characterHealth = 0);
    int hurtPlayer (int playerDamage = 12);
    int move (int x = 2, int y = 3, int z = 0);
};


void Enemy::killPlayer(int characterHealth)
{
    characterHealth = 0;
}


int Enemy::hurtPlayer(int playerDamage)
{
    if (playerDamage > 0)
    {
        std::cout << "Damage " << playerDamage << "\n";
    }
    else
    {
        std::cout << "Good save" << playerDamage << "\n";
    }

    return playerDamage;
}


int Enemy::move(int x, int y, int z)
{
    x = 8;
    y = 1;
    z = -2;

    int enemyMovement = x + y + z;

    return enemyMovement;
}


//10)
struct VideoGame
{
    Characters movement;
    Inventory skins;
    Level difficult;
    UserInterface healthBar;
    Enemy speed;

    VideoGame();

    void startGame();
    void loadMatch();
    void endGame();
 };

void VideoGame::startGame()
{
    bool initializeGame = true;
    bool gameOpened = true;

    if (gameOpened == true)
    {
        initializeGame = true;
        std::cout << "Are You Ready?" << initializeGame << "\n";
    }
}


void VideoGame::loadMatch()
{
    bool matchStartButtonClicked = false;
    bool matchStart = false;

    if (matchStartButtonClicked == true)
    {
        matchStart = true;
    }
}

void VideoGame::endGame(){}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    AudioInterface myAudioInterface;
    myAudioInterface.manufacturerName();

    Characters harry ;
    harry.jump();

    Inventory mainInventory;
    mainInventory.checkIfSkinEquipped();
    mainInventory.spaceLeftOnInventory();

    Enemy max;
    max.hurtPlayer();

    Dog nala;
    nala.DogAge();

    Tree pine;
    pine.produceFruit();

    Monitor monitorA;
    monitorA.playSound();

    UserInterface mainMenu;
    mainMenu.showWarning();

    pine.seeds = 13;
    std::cout << "This are the pine seeds produced " << pine.seeds << std::endl;
    std::cout << "Are the seeds from the pine 0? " << (pine.seeds == 0 ? "Yes" : "No") << std::endl;

    harry.colourIndicator = 1;
    std::cout << "Harry's colour indicator is " << harry.colourIndicator << std::endl;
    std::cout << "Is Harry Colour Indicator Blue ? " << (harry.colourIndicator == 2 ? "Yes" : "No") << std::endl;

    std::cout << nala.dogAge << std::endl;

    std::cout << max.speed << std::endl;

    std::cout << "My audio Interface's mic inputs " << myAudioInterface.micInputs << std::endl;

    std::cout << "Pet Selected " << mainInventory.pets << std::endl;
    std::cout << "Is the pet selected a wolf? " << (mainInventory.pets == 5 ? "Yes" : "No") << std::endl;

    std::cout << "Monitor's quantity of tweeters = " << monitorA.tweeter << std::endl;

     std::cout << "Player's health = " << mainMenu.healthBar << std::endl;

    Example::main();
    std::cout << "good to go!" << std::endl;
}
