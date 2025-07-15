#include<iostream>
#include<conio.h>
#include<windows.h>
#include<fstream> 
#include<string>  

using namespace std;

// File names for data persistence
const string USERS_FILE = "users.txt";
const string ROOMS_FILE = "rooms.txt";
const string BOOKINGS_FILE = "bookings.txt";
const string EVENTS_FILE = "events.txt";
const string FEEDBACK_FILE = "feedback.txt";

const int arraynumber = 15;
string users[arraynumber];
string passwords[arraynumber];
string roles[arraynumber];

const string namemanager = "Umer";
const string passwordmanager = "1234567";

const int arraynumber1 = 20; // Used for rooms, bookings, events, feedback
int rooms[arraynumber1] = {101, 102, 103, 104, 105, 106};
float prices[arraynumber1] = {300, 320, 220, 190, 500, 435};
string Roomtype[arraynumber1] = {"Double", "Double", "Single", "Normal", "Bussiness", "Suit"};
string guestName[arraynumber1];
int age[arraynumber1];
int nights[arraynumber1];
bool isBooked[arraynumber1] = {false};

int usersCount = 0; 

string eventNames[arraynumber1];
string eventDay[arraynumber1]; 
int eventcount = 0; 

string feedbacks[arraynumber1];
int feedbackCount = 0; 

string Name;
string feedback;
string role; 

// Function Prototypes
int mainMenu();
string login(string name, string password);
void header();
bool signUp(string name, string password, string role);
bool checkadd(int newroomNumber, float newprice, string newroomtype);
void ManagerInterface();
int ManagerMenu();
void updateHotel();
void all();
int GuestMenu();
void GuestInterface();
void available();
void Events();
void reviewFeedback();
void Feedback();
bool checkbooking(int guestroom, string guest, int guestage, int Nights);
bool checksearch(string searchType);
bool checkcancel(int roomNumber);
bool checkremove(int eraseroom);
bool updateRooms(string newType, float newPrice, int roomNumber);
bool isValidUsername(string username);
bool isValidPassword(string password);
bool isValidRole(string role);
void setColor(int color);

// File Handling Prototypes
void saveUsers();
void loadUsers();
void saveRooms();
void loadRooms();
void saveBookings();
void loadBookings();
void saveEvents();
void loadEvents();
void saveFeedback();
void loadFeedback();

// Function Definitions
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Save Functions
void saveUsers() {
    ofstream outFile(USERS_FILE);
    if (outFile.is_open()) {
        for (int i = 0; i < usersCount; ++i) {
            outFile << users[i] << " " << passwords[i] << " " << roles[i] << endl;
        }
        outFile.close();
    } else {
        cout << "Error: Unable to open " << USERS_FILE << " for writing!" << endl;
    }
}

void saveRooms() {
    ofstream outFile(ROOMS_FILE);
    if (outFile.is_open()) {
        for (int i = 0; i < arraynumber1; ++i) {
            if (rooms[i] != 0) {
                outFile << rooms[i] << " " << prices[i] << " " << Roomtype[i] << endl;
            }
        }
        outFile.close();
    } else {
        cout << "Error: Unable to open " << ROOMS_FILE << " for writing!" << endl;
    }
}

void saveBookings() {
    ofstream outFile(BOOKINGS_FILE);
    if (outFile.is_open()) {
        for (int i = 0; i < arraynumber1; ++i) {
            if (isBooked[i]) {
                outFile << rooms[i] << " " << guestName[i] << " " << age[i] << " " << nights[i] << " " << isBooked[i] << endl;
            }
        }
        outFile.close();
    } else {
        cout << "Error: Unable to open " << BOOKINGS_FILE << " for writing!" << endl;
    }
}

void saveEvents() {
    ofstream outFile(EVENTS_FILE);
    if (outFile.is_open()) {
        for (int i = 0; i < eventcount; ++i) {
            outFile << eventNames[i] << endl; 
            outFile << eventDay[i] << endl;   
        }
        outFile.close();
    } else {
        cout << "Error: Unable to open " << EVENTS_FILE << " for writing!" << endl;
    }
}

void saveFeedback() {
    ofstream outFile(FEEDBACK_FILE);
    if (outFile.is_open()) {
        for (int i = 0; i < feedbackCount; ++i) {
            outFile << feedbacks[i] << endl; // Feedback might contain spaces
        }
        outFile.close();
    } else {
        cout << "Error: Unable to open " << FEEDBACK_FILE << " for writing!" << endl;
    }
}

// Load Functions
void loadUsers() {
    ifstream inFile(USERS_FILE);
    if (inFile.is_open()) {
        string name, password, userRole;
        usersCount = 0; 
        while (inFile >> name >> password >> userRole && usersCount < arraynumber) {
            users[usersCount] = name;
            passwords[usersCount] = password;
            roles[usersCount] = userRole;
            usersCount++;
        }
        inFile.close();
    } else {
        cout << "Info: " << USERS_FILE << " not found or unable to open. Starting with no registered users." << endl;
    }
}

void loadRooms() {
    ifstream inFile(ROOMS_FILE);
    if (inFile.is_open()) {
        for (int i = 0; i < arraynumber1; ++i) {
            rooms[i] = 0;
            prices[i] = 0.0;
            Roomtype[i] = "";
        }
        int roomNum;
        float priceVal;
        string type;
        int i = 0;
        while (inFile >> roomNum >> priceVal >> type && i < arraynumber1) {
            rooms[i] = roomNum;
            prices[i] = priceVal;
            Roomtype[i] = type;
            i++;
        }
        inFile.close();
    } else {
        cout << "Info: " << ROOMS_FILE << " not found or unable to open. Starting with default rooms." << endl;
    }
}

void loadBookings() {
    ifstream inFile(BOOKINGS_FILE);
    if (inFile.is_open()) {
        // Reset all bookings to false initially
        for (int i = 0; i < arraynumber1; ++i) {
            isBooked[i] = false;
            guestName[i] = "";
            age[i] = 0;
            nights[i] = 0;
        }

        int roomNum, guestAge, numNights, bookedStatus;
        string gName;
        int i = 0;
        while (inFile >> roomNum >> gName >> guestAge >> numNights >> bookedStatus && i < arraynumber1) {
            // Find the room index by room number
            int roomIndex = -1;
            for(int j = 0; j < arraynumber1; ++j) {
                if (rooms[j] == roomNum) {
                    roomIndex = j;
                    break;
                }
            }

            if (roomIndex != -1) {
                guestName[roomIndex] = gName;
                age[roomIndex] = guestAge;
                nights[roomIndex] = numNights;
                isBooked[roomIndex] = (bookedStatus == 1);
            }
            i++; 
        }
        inFile.close();
    } else {
        cout << "Info: " << BOOKINGS_FILE << " not found or unable to open. Starting with no bookings." << endl;
    }
}

void loadEvents() {
    ifstream inFile(EVENTS_FILE);
    if (inFile.is_open()) {
        eventcount = 0; // Reset count before loading
        string eventNameLine, eventDayLine;
        while (getline(inFile, eventNameLine) && getline(inFile, eventDayLine) && eventcount < arraynumber1) {
            eventNames[eventcount] = eventNameLine;
            eventDay[eventcount] = eventDayLine;
            eventcount++;
        }
        inFile.close();
    } else {
        cout << "Info: " << EVENTS_FILE << " not found or unable to open. Starting with no events." << endl;
    }
}

void loadFeedback() {
    ifstream inFile(FEEDBACK_FILE);
    if (inFile.is_open()) {
        feedbackCount = 0; // Reset count before loading
        string feedbackLine;
        while (getline(inFile, feedbackLine) && feedbackCount < arraynumber1) {
            feedbacks[feedbackCount] = feedbackLine;
            feedbackCount++;
        }
        inFile.close();
    } else {
        cout << "Info: " << FEEDBACK_FILE << " not found or unable to open. Starting with no feedback." << endl;
    }
}

int main() {
    
    loadUsers();
    loadRooms();
    loadBookings();
    loadEvents();
    loadFeedback();

    system("cls");
    header();
    int menuOption = mainMenu();
    while (menuOption != 3) {
        system("cls");
        header();
        if (menuOption == 2) { // Sign Up
            string name, password, roleInput;
            cout << "   Enter your name: ";
            cin >> name;
            cout << "   Enter your password: ";
            cin >> password;
            cout << "   Enter your role (Guest or Manager): ";
            cin >> roleInput;
            bool isValid = signUp(name, password, roleInput);
            if (isValid) {
                cout << "   Signed Up Successfully" << endl;
                saveUsers(); // Save users after a successful sign-up
            } else {
                cout << "   Incorrect input or user already exists..." << endl;
            }
            cout << "   Press any key to continue...." << endl;
            getch();
            system("cls");
            header();
            menuOption = mainMenu();
        } else if (menuOption == 1) { // Login
            string name, password;
            cout << "   Enter your name: ";
            cin >> name;
            cout << "   Enter your password: ";
            cin >> password;
            string userRole = login(name, password); // Use a distinct name for the returned role
            if (userRole == "Manager") {
                cout << "Press Any Key to Continue to Manager Interface.." << endl;
                getch();
                system("cls");
                header();
                ManagerInterface();
                menuOption = mainMenu();
            } else if (userRole == "Guest") {
                cout << "Press Any Key to Continue to Guest Interface.." << endl;
                getch();
                system("cls");
                header();
                GuestInterface();
                menuOption = mainMenu();
            } else {
                cout << "Invalid credentials. Try again." << endl;
                cout << "Press any key to continue..." << endl;
                getch();
                system("cls");
                header();
                menuOption = mainMenu();
            }
        }
    }
    system("cls");
    header();
    saveUsers();
    saveRooms();
    saveBookings();
    saveEvents();
    saveFeedback();

    cout << "  Please enter any key to exit the app...." << endl;
    getch();
    system("cls");
    header();
    return 0;
}

bool isValidUsername(string username) {
    if (username.length() < 3 || username.length() > 15) {
        return false;
    }
    for (int i = 0; i < username.length(); i++) {
        if ((username[i] >= '0' && username[i] <= '9') || username[i] == ' ' || username[i] == ',') {
            return false;
        }
    }
    return true;
}

bool isValidPassword(string password) {
    return password.length() >= 6;
}

bool isValidRole(string role) {
    return role == "Guest" || role == "Manager";
}

void header() {
    setColor(14);
    cout << "   =========================================" << endl;
    cout << "        Hotel Booking Management System  " << endl;
    cout << "   =========================================" << endl;
    cout << "                                  " << endl;
}

int mainMenu() {
    setColor(11);
    int option;
    cout << "   1. Login" << endl;
    cout << "   2. Sign up" << endl;
    cout << "   3. Exit" << endl;
    cout << "" << endl;
    cout << "   ------------------------------------------" << endl;
    cout << "   Enter your choice : ";
    cin >> option;
    return option;
}

string login(string name, string password) {
    if (!isValidUsername(name)) {
        cout << "    Invalid username! Please try again." << endl;
        return "";
    }
    if (!isValidPassword(password)) {
        cout << "    Invalid password! Please try again." << endl;
        return "";
    }
    for (int index = 0; index < usersCount; index++) {
        if (users[index] == name && passwords[index] == password) {
            return roles[index];
        }
    }
    if (name == namemanager && password == passwordmanager) {
        return "Manager";
    }
    return "";
}

bool signUp(string name, string password, string role) {
    if (!isValidUsername(name)) {
        cout << "    Invalid username! It must be 3-15 characters long and contain no numbers or spaces." << endl;
        return false;
    }
    if (!isValidPassword(password)) {
        cout << "    Invalid password! It must be at least 6 characters long." << endl;
        return false;
    }
    if (!isValidRole(role)) {
        cout << "    Invalid role! It must be either 'Guest' or 'Manager'." << endl;
        return false;
    }
    for (int index = 0; index < usersCount; index++) {
        if (users[index] == name) {
            cout << "    User already exists!" << endl;
            return false;
        }
    }
    if (usersCount < arraynumber) {
        users[usersCount] = name;
        passwords[usersCount] = password;
        roles[usersCount] = role;
        usersCount++;
        return true;
    }
    return false;
}

int ManagerMenu() {
    setColor(10);
    cout << "  Select one of the following options......." << endl;
    cout << "   1. View All Bookings" << endl;
    cout << "   2. Add Rooms" << endl;
    cout << "   3. Remove Room" << endl;
    cout << "   4. Update Room Details" << endl;
    cout << "   5. Update Hotel Details (Events)" << endl;
    cout << "   6. Review Guest's Feedback" << endl;
    cout << "   7. Exit to the Main Menu" << endl;
    cout << "" << endl;
    int option;
    cout << "   =========================================" << endl;
    cout << "    Enter your option: ";
    cin >> option;
    return option;
}

void ManagerInterface() {
    int managerOption = ManagerMenu();
    while (managerOption != 7) {
        system("cls");
        header();
        if (managerOption == 1) { // View All Bookings
            all();
            cout << "   Press any key to continue to Manager Menu...." << endl;
            getch();
            system("cls");
            header();
            managerOption = ManagerMenu();
        } else if (managerOption == 2) { // Add Rooms
            system("cls");
            header();
            int newroomNumber;
            float newprice;
            string newroomtype;
            cout << "   Enter Room Number: ";
            cin >> newroomNumber;
            cout << "   Enter Room type (e.g., Double, Single, Normal, Bussiness, Suit): ";
            cin >> newroomtype;
            cout << "   Enter Price: ";
            cin >> newprice;
            if (checkadd(newroomNumber, newprice, newroomtype)) {
                cout << "  Room added successfully!..." << endl;
                saveRooms(); // Save rooms after adding
            } else {
                cout << "  No space available or Room Number already exists..." << endl;
            }
            cout << "  Please enter any key to return to Manager Menu....." << endl;
            getch();
            system("cls");
            header();
            managerOption = ManagerMenu();
        } else if (managerOption == 3) { // Remove Room
            int eraseroom;
            cout << "   Enter Room Number to remove: ";
            cin >> eraseroom;
            if (checkremove(eraseroom)) {
                cout << "  Room removed successfully!" << endl;
                saveRooms(); 
            } else {
                cout << "  Room not found!" << endl;
            }
            cout << "  Please enter any key to return to Manager Menu....." << endl;
            getch();
            system("cls");
            header();
            managerOption = ManagerMenu();
        } else if (managerOption == 4) { 
            int roomNumber;
            cout << "   Enter Room Number to update: ";
            cin >> roomNumber;
            string newType;
            float newPrice;
            cout << "   Enter new Type of Room (e.g., Double, Single, Normal, Bussiness, Suit) for Room Number " << roomNumber << ": ";
            cin >> newType;
            cout << "   Enter new Price of Room Number " << roomNumber << ": ";
            cin >> newPrice;
            if (updateRooms(newType, newPrice, roomNumber)) {
                setColor(10);
                cout << "   Successfully Updated the Room Details...." << endl;
                saveRooms(); // Save rooms after updating
            } else {
                setColor(12);
                cout << "   Invalid Room Number...." << endl;
            }
            cout << "   Press any key to continue to Manager Menu...." << endl;
            getch();
            system("cls");
            header();
            managerOption = ManagerMenu();
        } else if (managerOption == 5) { 
            updateHotel();
            saveEvents(); 
            cout << "   Press any key to continue to Manager Menu...." << endl;
            getch();
            system("cls");
            header();
            managerOption = ManagerMenu();
        } else if (managerOption == 6) { // Review Guest's Feedback
            reviewFeedback();
            cout << "   Press any key to continue to Manager Menu...." << endl;
            getch();
            system("cls");
            header();
            managerOption = ManagerMenu();
        }
    }
    system("cls");
    header();
    cout << "  Please enter any key to return to Main Menu....." << endl;
    getch();
    system("cls");
    header();
}

void updateHotel() {
    system("cls");
    header();
    cout << "      ------------Update Events-----------" << endl;
    cout << "       Enter the number of events to update: ";
    cin >> eventcount;
    cin.ignore(); // Clear the input buffer after reading eventcount

    if (eventcount > 0) {
        for (int i = 0; i < eventcount && i < arraynumber1; i++) {
            cout << "   Enter event name " << (i + 1) << ": ";
            getline(cin, eventNames[i]);
            cout << "   Enter event Day (e.g., Monday, Every Saturday): ";
            getline(cin, eventDay[i]);
        }
        cout << "   Hotel events details updated successfully!" << endl;
    } else {
        cout << "  Please enter a valid number of events (greater than 0) or 0 to clear events." << endl;
        eventcount = 0;
    }
}

bool checkadd(int newroomNumber, float newprice, string newroomtype) {
    // Check if room number already exists
    for (int i = 0; i < arraynumber1; i++) {
        if (rooms[i] == newroomNumber && rooms[i] != 0) { 
            return false;
        }
    }
    for (int i = 0; i < arraynumber1; i++) {
        if (rooms[i] == 0) { 
            rooms[i] = newroomNumber;
            prices[i] = newprice;
            Roomtype[i] = newroomtype;
            return true;
        }
    }
    return false; // No space available
}

bool checkremove(int eraseroom) {
    for (int i = 0; i < arraynumber1; i++) {
        if (rooms[i] == eraseroom) {
            rooms[i] = 0;
            prices[i] = 0;
            Roomtype[i] = "";
            isBooked[i] = false; 
            guestName[i] = "";   
            age[i] = 0;
            nights[i] = 0;
            return true;
        }
    }
    return false;
}

void all() {
    system("cls");
    setColor(11);
    cout << "   =========================================" << endl;
    cout << "          All Current Bookings" << endl;
    cout << "   =========================================" << endl;
    cout << "" << endl;
    cout << "   Room No\tGuest Name\tAge\tNights\tTotal Amount" << endl;
    cout << "   --------------------------------------------------------" << endl;
    bool bookingsfound = false;
    for (int i = 0; i < arraynumber1; i++) {
        if (isBooked[i]) {
            float totalAmount = prices[i] * nights[i];
            cout << "   " << rooms[i] << "        \t" << guestName[i] << "       \t" << age[i] << "\t" << nights[i] << "\t" << totalAmount << endl;
            bookingsfound = true;
        }
    }
    if (!bookingsfound) {
        setColor(10);
        cout << "  ----------------No Bookings--------------" << endl;
    }
    cout << "" << endl;
    cout << "   =========================================" << endl;
}

bool updateRooms(string newType, float newPrice, int roomNumber) {
    for (int i = 0; i < arraynumber1; i++) {
        if (rooms[i] == roomNumber) {
            Roomtype[i] = newType;
            prices[i] = newPrice;
            return true;
        }
    }
    return false;
}

int GuestMenu() {
    int option;
    cout << "  Select one of the following options....." << endl;
    cout << "   1. Search Room Type" << endl;
    cout << "   2. Available Rooms" << endl;
    cout << "   3. Book a Room" << endl;
    cout << "   4. Cancel Booking" << endl;
    cout << "   5. Provide Feedback" << endl;
    cout << "   6. Upcoming Events Detail" << endl;
    cout << "   7. Exit to the Main Menu" << endl;
    cout << "   =========================================" << endl;
    cout << "   Enter your choice : ";
    cin >> option;
    return option;
}

void GuestInterface() {
    int guestOption = 0;
    guestOption = GuestMenu();
    while (guestOption != 7) {
        system("cls");
        header();
        if (guestOption == 1) { // Search Room Type
            string searchType;
            cout << "   Enter Room type to search (e.g., Double, Single, Normal, Bussiness, Suit): ";
            cin >> searchType;
            if (checksearch(searchType)) {
                cout << "  Search complete! " << endl;
            } else {
                cout << "  No rooms found for the specified type....." << endl;
            }
            cout << "  Please enter any key to return to Guest Menu....." << endl;
            getch();
            system("cls");
            header();
            guestOption = GuestMenu();
        } else if (guestOption == 2) { // Available Rooms
            available();
            cout << "  Please enter any key to return to Guest Menu....." << endl;
            getch();
            system("cls");
            header();
            guestOption = GuestMenu();
        } else if (guestOption == 3) { // Book a Room
            int guestroom;
            string guest;
            int guestage;
            int Nights;
            cout << "   Enter Room number to book: ";
            cin >> guestroom;
            cin.ignore();
            cout << "  Enter Your Name: ";
            getline(cin, guest); 
            cout << "  Enter Your age: ";
            cin >> guestage;
            cout << "  Enter Number of nights: ";
            cin >> Nights;

            if (checkbooking(guestroom, guest, guestage, Nights)) {
                cout << "  Room Booked Successfully! " << endl;
                saveBookings(); 
            } else {
                cout << "  Room not found or already booked!" << endl;
            }
            cout << "  Please enter any key to return to Guest Menu....." << endl;
            getch();
            system("cls");
            header();
            guestOption = GuestMenu();
        }
        if (guestOption == 4) { // Cancel Booking
            int roomNumber;
            cout << "   Enter Room Number to cancel booking: ";
            cin >> roomNumber;
            if (checkcancel(roomNumber)) {
                cout << "  Booking cancelled successfully!" << endl;
                saveBookings(); 
            } else {
                cout << "  Booking not Found!" << endl;
            }
            cout << "  Please enter any key to return to Guest Menu....." << endl;
            getch();
            system("cls");
            header();
            guestOption = GuestMenu();
        } else if (guestOption == 5) { // Provide Feedback
            Feedback();
            saveFeedback(); 
            cout << "  Please enter any key to return to Guest Menu....." << endl;
            getch();
            system("cls");
            header();
            guestOption = GuestMenu();
        } else if (guestOption == 6) { // Upcoming Events Detail
            Events();
            cout << "  Please enter any key to return to Guest Menu....." << endl;
            getch();
            system("cls");
            header();
            guestOption = GuestMenu();
        }
    }
    system("cls");
    header();
    cout << "   Please enter any key to return to Main menu..." << endl;
    getch();
    system("cls");
    header();
}

bool checkcancel(int roomNumber) {
    for (int i = 0; i < arraynumber1; i++) {
        if (rooms[i] == roomNumber && isBooked[i]) {
            isBooked[i] = false;
            guestName[i] = "";
            age[i] = 0;
            nights[i] = 0;
            return true;
        }
    }
    return false;
}

bool checksearch(string searchType) {
    bool found = false;
    cout << "  Rooms of type: " << searchType << endl;
    cout << "   Room No\tPrice (per night)\tStatus" << endl;
    cout << "   ------------------------------------------" << endl;
    for (int i = 0; i < arraynumber1; i++) {
        if (rooms[i] != 0 && Roomtype[i] == searchType) {
            cout << "   " << rooms[i] << "\t" << prices[i] << "\t\t\t" << (isBooked[i] ? "Booked" : "Available") << endl;
            found = true;
        }
    }
    return found;
}

bool checkbooking(int guestroom, string guest, int guestage, int Nights) {
    for (int i = 0; i < arraynumber1; i++) {
        if (rooms[i] == guestroom && !isBooked[i]) {
            guestName[i] = guest;
            age[i] = guestage;
            nights[i] = Nights;
            isBooked[i] = true;
            return true;
        }
    }
    return false;
}

void available() {
    bool found = false;
    system("cls");
    setColor(11);
    cout << "   =========================================" << endl;
    cout << "                Available Rooms" << endl;
    cout << "   =========================================" << endl;
    cout << "   Room No\tRoom Type\t    Price (per night)" << endl;
    cout << "   ------------------------------------------" << endl;
    for (int i = 0; i < arraynumber1; i++) {
        if (rooms[i] != 0 && !isBooked[i]) { // Check if room exists and is not booked
            cout << "   " << rooms[i] << "\t" << Roomtype[i] << "      \t" << prices[i] << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "  No rooms currently available for booking." << endl;
    }
}

void Events() {
    system("cls");
    cout << "   =========================================" << endl;
    cout << "                Upcoming Events" << endl;
    cout << "   =========================================" << endl;
    if (eventcount == 0) {
        cout << "     No upcoming events." << endl;
    } else {
        cout << "    Event Name\tDay" << endl;
        cout << "    ------------------------------------------" << endl;
        for (int i = 0; i < eventcount; i++) {
            cout << "    " << eventNames[i] << "\t" << eventDay[i] << endl;
        }
    }
}

void reviewFeedback() {
    system("cls");
    header();
    setColor(14);
    cout << "   Guest Feedback:" << endl;
    cout << "   ------------------------------------------" << endl;
    if (feedbackCount == 0) {
        setColor(12);
        cout << "No feedback available." << endl;
    } else {
        for (int i = 0; i < feedbackCount; i++) {
            setColor(11);
            cout << "     " << (i + 1) << ". " << feedbacks[i] << endl;
        }
    }
    cout << "   ------------------------------------------" << endl;
}

void Feedback() {
    cout << "   Enter your name (as used in booking): ";
    cin.ignore(); 
    getline(cin, Name); 

    bool bookingFound = false;
    for (int i = 0; i < arraynumber1; i++) {
        if (guestName[i] == Name && isBooked[i]) {
            cout << "   What do you think about our Hotel Services (e.g., Bad, Average, Good, Astonishing, or your own words)?" << endl;
            cout << "  Enter your Feedback: ";
            getline(cin, feedback); // Read the full line of feedback
            if (feedbackCount < arraynumber1) {
                feedbacks[feedbackCount] = feedback;
                feedbackCount++;
                cout << "Feedback submitted successfully!" << endl;
            } else {
                cout << "Feedback storage is full! Cannot submit more feedback." << endl;
            }
            bookingFound = true;
            break; 
        }
    }
    if (!bookingFound) {
        cout << "  No active booking found under the name '" << Name << "'. Feedback can only be provided by booked guests." << endl;
    }
}