#include <iostream>
#include <vector>
using namespace std;

struct User {
    string name, middleI, surname, course, srCode;
    char picture, signature, cor, grades, indigency, functionary;
};

vector<User> users; // Vector to store user data


//all the function used in the system
void displayAdminMenu();
void addUser();
void requirements();
void modifyUser();
void deleteUser();
void viewUsers();
void adminMenu();
void info();
void userMenu();
void displayUserMenu();

int main() {

    int user;

    do{
        system("cls");
        cout << "\n\n";
        cout << "\t\t=======================================================================" << endl;
        cout << "\t\t        BSU - Scholarship Office : Requirements Checklist System       " << endl;
        cout << "\t\t=======================================================================" << endl;
        cout << "\n";
        cout << "\t\t                      Are you a student or an admin?                   " << endl;
        cout << "\t\t                               [1] Admin                               " << endl;
        cout << "\t\t                              [2] Student                              " << endl;
        cout << "\t\t                               [3] Exit                                " << endl;
        cout << "\n\t\t                     Enter choice: " ;
        cin >> user;
        cout << "\n";

        if (user == 1){
            adminMenu();
        }
        else if (user == 2){
            userMenu();
        }
        else if (user == 3) {
            break;
        }
        else {
            cout << "Invalid Choice!"<< endl;
        }
    }while (user != 3);

    cout << "\t\t***********************************************************************"<< endl;
    cout << "\t\t                     Thank you for using our program!                  " << endl;
    return 0;
}

// Function to display the admin menu
void displayAdminMenu() {
    system("cls");
    cout << "\n\t\t-----------------------------------------------------------------------"<< endl;
    cout << "\t\t                              ADMIN MENU                                 "<< endl;
    cout << "\n\t\t-----------------------------------------------------------------------"<< endl;
    cout << "\t\t                            [1] Add Student                              "<< endl;
    cout << "\t\t                        [2] Verify the documents                         "<< endl;
    cout << "\t\t                           [3] Delete Student                            "<< endl;
    cout << "\t\t                          [4] List of Students                           "<< endl;
    cout << "\t\t                               [5] Exit                                  "<< endl << endl;
    cout << "\t\t                          Enter choice: ";
}

//function to display user menu
void displayUserMenu() {
    int app;
    do{
        system("cls");
        cout << "\n\t\t-----------------------------------------------------------------------"<< endl;
        cout << "\t\t                   STUDENT MENU: Available Scholarship                   "<< endl;
        cout << "\n\t\t-----------------------------------------------------------------------"<< endl;
        cout << "\t\t                  [1] Him Scholarship Requirements                       "<< endl;
        cout << "\t\t                    [2] Apply in Him Scholarship                         "<< endl;
        cout << "\t\t                            [3] About Us                                 "<< endl;
        cout << "\t\t                              [4] Exit                                   "<< endl << endl;
        cout << "\t\t                       Enter choice: ";
        cin >> app;
        switch (app)
        {
            case 1:
                requirements();
                break;
            case 2:
                addUser();
                break;
            case 3:
                info();
                cin.ignore();
                cin.get();
                break;
            case 4:
                cout << "\t\tExiting...";
                cin.ignore();
                cin.get();
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (app != 4);
}

// Function to add a user
void addUser() {
    User user;
    system("cls");
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\t\t              GOVERNOR MANDANAS SCHOLARSHIP (HIM SCHOLARSHIP)            "<< endl;
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\t\tEnter name: \t\t\t\t\t";
    cin >> user.name;
    cout << "\t\tEnter middle initial: \t\t\t\t";
    cin >> user.middleI;
    cout << "\t\tEnter surname: \t\t\t\t\t";
    cin >> user.surname;
    cout << "\t\tEnter course: \t\t\t\t\t";
    cin >> user.course;
    cout << "\t\tEnter sr-code: \t\t\t\t\t";
    cin >> user.srCode;
    cout << "\n\t\t*****************************Checklist**********************************"<< endl;

    while (user.picture != 'y' && user.picture != 'n' && user.picture != 'Y' && user.picture != 'N'){
        cout << "\t\t1x1 picture (y/n): \t\t\t\t";
        cin >> user.picture;
    }

    while (user.signature != 'y' && user.signature != 'n' && user.signature != 'Y' && user.signature != 'N') {
        cout << "\t\tStudent ID with 3 signature (y/n): \t\t";
        cin >> user.signature;
    }

    while (user.cor != 'y' && user.cor != 'n' && user.cor != 'Y' && user.cor != 'N') {
        cout << "\t\tCertificate of Registration (y/n): \t\t";
        cin >> user.cor;
    }

    while (user.grades != 'y' && user.grades != 'n' && user.grades != 'Y' && user.grades != 'N') {
        cout << "\t\tReport Card (y/n): \t\t\t\t";
        cin >> user.grades;
    }

    while (user.indigency != 'y' && user.indigency != 'n' && user.indigency != 'Y' && user.indigency != 'N') {
        cout << "\t\tCertificate of Indigency (y/n): \t\t";
        cin >> user.indigency;
    }

    cout << "\n\t\t******************************Question**********************************"<< endl;

    while (user.functionary != 'y' && user.functionary != 'n' && user.functionary != 'Y' && user.functionary != 'N') {
        cout << "\t\tFunctionary Parents (y/n): \t\t\t";
        cin >> user.functionary;
    }

    users.push_back(user);
    if (user.picture == 'y' && user.signature == 'y' && user.cor == 'y' && user.grades =='y' && user.indigency == 'y'|| user.picture == 'Y' && user.signature == 'Y' && user.cor == 'Y' && user.grades =='Y' && user.indigency == 'Y'){
        cout << "\n\n\t\t   You've completed the requirements. Please wait for the text    " << endl;
        cout << "\t\t           confirmation from the external scholarship!                "<< endl;
    }
    else {
        cout << "\n\n\t\t    Your requirements is incomplete. Complete the requirements    "<< endl;
        cout << "\t\t                so we can process your documents                      "<< endl;
    }

    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

//function for the requirements of scholarship
void requirements() {
    system("cls");
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\t\t      GOVERNOR MANDANAS SCHOLARSHIP (HIM SCHOLARSHIP) REQUIREMENTS       "<< endl;
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\t\t                             1 by 1 picture                              "<< endl;
    cout << "\t\t                     Student ID with 3 signatures                        "<< endl;
    cout << "\t\t                      Certificate of Registration                        "<< endl;
    cout << "\t\t                                 Grades                                  "<< endl;
    cout << "\t\t                        Certificate of Indigency                         "<< endl;
    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

// Function to modify a user
void modifyUser() {
    string name, middleI, surname;
    system("cls");
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\t\t                             VERIFY THE DOCUMENTS                        ";
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\t\tEnter name of the user to verify: \t\t";
    cin >> name >> middleI >> surname;
    bool found = false;
    for (int i = 0; i < users.size(); i++) {
        if (users[i].name == name && users[i].middleI == middleI && users[i].surname == surname) {
            cout << "\t\t1x1 picture (y/n): \t\t\t\t";
            cin >> users[i].picture;
            cout << "\t\tStudent ID with 3 signature (y/n): \t\t";
            cin >> users[i].signature;
            cout << "\t\tCertificate of Registration (y/n): \t\t";
            cin >> users[i].cor;
            cout << "\t\tReport Card (y/n): \t\t\t\t";
            cin >> users[i].grades;
            cout << "\t\tCertificate of Indigency (y/n): \t\t";
            cin >> users[i].indigency;
            cout << "\t\tFunctionary Parents (y/n): \t\t\t";
            cin >> users[i].functionary;
            found = true;
            break;
        }
    }
    if (found) {
        cout << "\n\n\t\tUser modified successfully!\n";
    } else {
        cout << "\t\tUser not found!\n";
    }

    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

// Function to delete a user
void deleteUser() {
    string name, middleI, surname;
    system("cls");
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\t\t                        Delete User Information\n                 ";
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\t\tEnter name of the user to delete: ";
    cin >> name >> middleI >> surname;
    bool found = false;
    for (int i = 0; i < users.size(); i++) {
        if (users[i].name == name && users[i].middleI == middleI && users[i].surname == surname) {
            users.erase(users.begin() + i);
            found = true;
            break;
        }
    }
    if (found) {
        cout << "\n\n\t\tUser deleted successfully!\n";
    } else {
        cout << "\t\tUser not found!\n";
    }

    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

// Function to view all users
void viewUsers() {
    system("cls");
    if (users.empty()) {
        cout << "\t\tNo users found!\n";
    } else {
        cout << "\n\t\t......................................................................."<< endl;
        cout << "\t\t                             LIST OF STUDENTS         \n                 ";
        cout << "\n\t\t......................................................................."<< endl;
        for (const auto& user : users) {
            cout << "\t\tName: \t\t\t\t\t" << user.name <<" "<< user.middleI << ". "<< user.surname << "\n";
            cout << "\t\tCourse: \t\t\t\t" << user.course << "\n";
            cout << "\t\tSr-code: \t\t\t\t" << user.srCode << "\n";
            cout << "\t\t1x1 picture: \t\t\t\t" << user.picture << "\n";
            cout << "\t\tStudent ID with 3 signature: \t\t" << user.signature << "\n";
            cout << "\t\tCertificate of Registration: \t\t" << user.cor << "\n";
            cout << "\t\tReport Card: \t\t\t\t" << user.grades << "\n";
            cout << "\t\tCertificate of Indigency: \t\t" << user.indigency << "\n";
            cout << "\t\tFunctionary Parents: \t\t\t"<< user.functionary << "\n";
            if (user.picture == 'y' && user.signature == 'y' && user.cor == 'y' && user.grades =='y' && user.indigency == 'y'|| user.picture == 'Y' && user.signature == 'Y' && user.cor == 'Y' && user.grades =='Y' && user.indigency == 'Y'){
                cout << "\n\t\tStatus of requirements: Complete"<< endl;
            }
            else {
                cout << "\n\t\tStatus of requirements: Incomplete"<< endl;
            }
        cout << "\n\t\t......................................................................."<< endl;
    }
    }
    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

//Function to login and access admin menu
void adminMenu() {
    string adminUsername = "admin";
    string adminPassword = "scholarship";
    string inUser, inPass;
    int choice, sNum;

    system("cls");

    do{
        cout << "\n\n\n\t\t******************** WELCOME TO ADMIN LOG IN PAGE *********************" << endl;
        cout << "\n\t\t......................................................................."<< endl;
        cout << "\n\t\t                    Email: ";
        cin >> inUser;
        cout << "\t\t                    Password: ";
        cin >> inPass;
        cout << "\n\t\t......................................................................."<< endl;

        if (inUser == adminUsername && inPass == adminPassword) {
            cout << "\t\t                            Login Successful!                            "<< endl;
            cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
            cin.ignore();
            cin.get();
            system("cls");

            while (choice != 5) {
                displayAdminMenu();
                cin >> choice;

                switch (choice) {
                    case 1:
                        addUser();
                        break;
                    case 2:
                        modifyUser();
                        break;
                    case 3:
                        deleteUser();
                        break;
                    case 4:
                        viewUsers();
                        break;
                    case 5:
                        cout << "\t\tExiting...";
                        break;
                    default:
                        cout << "Invalid choice! Try again.\n";
                }

                cout << endl;
            }
        }
        else {
            cout << "\n\t\t        Login Failed! Check your email and password. Try Again!        "<< endl;
        }

    }while (inUser != adminUsername || inPass != adminPassword);

    cin.ignore();
    cin.get();
}

//function for the information of the system
void info() {
    system("cls");
    cout << "\n\n\n\t\t********************************   Welcome!   *******************************************"<< endl;
    cout << "\t\t      Batangas State University Scholarship Office : Requirements Checklist System       "<< endl;
    cout << "\t\t*****************************************************************************************"<< endl << endl;
    cout << "\t\t            Welcome to Batangas State University's Scholarship Office!                   " << endl;
    cout << "\t\t  Our Requirements Checklist System is a user-friendly software solution designed to     " << endl;
    cout << "\t\t   streamline and simplify the process of submitting required documents for external     " << endl;
    cout << "\t\t   scholarships. We understand the importance of ensuring that the documentation for     " << endl;
    cout << "\t\t  scholarships is accurate and complete. Our system provides a comprehensive checklist   " << endl;
    cout << "\t\t     that helps applicants ensure they submit all the necessary documents.               \n\n\n\n\n\n" << endl;
    cout << "\t\t                                                                                 MADE BY:"<< endl;
    cout << "\t\t                                                                   Ciruelas, Keith Andrei"<< endl;
    cout << "\t\t                                                                 Mendoza, Christine Grace"<< endl;
    cout << "\t\t                                                                   Serrano, Rafael Miguel"<< endl;
    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";

}

//function to login user account
void userMenu()
{
    int numScholar = 10;
    string studentUsername [numScholar] = {"001", "002", "003", "004", "005", "006", "007", "008", "009", "010"};
    string studentPassword [numScholar] = {"pass1", "pass2", "pass3", "pass4", "pass5", "pass6", "pass7", "pass8", "pass9", "pass10"};
    string inUser, inPass;

    system("cls");
    cout << "\n\n\n\t\t******************* WELCOME TO STUDENT LOG IN PAGE ********************" << endl;
    cout << "\n\t\t......................................................................."<< endl;
    cout << "\n\t\t                    Email: ";
    cin >> inUser;
    cout << "\t\t                    Password: ";
    cin >> inPass;
    cout << "\n\t\t......................................................................."<< endl;

    bool isLoginSuccessful = false;
            for (int i =0; i < numScholar; i++) {
                if (studentUsername[i] == inUser && studentPassword[i] == inPass) {
                    isLoginSuccessful = true;
                    break;
                }
            }

            if (isLoginSuccessful) {
                cout << "\n\t\t\t\tLogin successful!" << endl;
                cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
                cin.ignore();
                cin.get();

                // code for student menu
                displayUserMenu();
            }
            else {
                cout << "\n\t\tLogin failed. Please try again." << endl;
                cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
                cin.ignore();
                cin.get();
            }

}
