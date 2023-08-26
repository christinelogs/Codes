#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Structure to represent a task
struct Task {
    string description;
    string date;
    string time;
    bool completed;
};

// Structure to represent a user
struct User {
    string username;
    string password;
    vector<Task> tasks;
};

bool isUsernameTaken(const vector<User>& users, const string& username); //Function to know if the username is already taken
bool createUserAccount(vector<User>& users, const string& username, const string& password); //Function to create account
bool authenticateUser(const vector<User>& users, const string& username, const string& password); //Function to login
void addTask(vector<Task>& tasks); //Function to add a new task for a user
void displayTasks(const vector<Task>& tasks); //Function to display all tasks for a user
void markTaskComplete(vector<Task>& tasks); //Function to mark a task as completed for a user
void modifyTask(vector<Task>& tasks); //Function to modify a task for a user
void listUsers(const vector<User>& users); //Function to list all users
void deleteUser(vector<User>& users); //Function to delete a user
void userMenu(User& user); //Function to display user menu
void adminMenu(vector<User>& users); //Function to display admin menu
void loginPage(vector<User>& users);//Function to display login page
void info(); //Function to display the info of the system

int main() {
    vector<User> users;
    int userChoice;

    info();
    do {
        system("cls");
        cout << "\n\n";
        cout << "\t\t=======================================================================" << endl;
        cout << "\t\t                        Task Scheduling System                         " << endl;
        cout << "\t\t=======================================================================" << endl;
        cout << "\n";
        cout << "\t\t                       Are you a user or an admin?                     " << endl;
        cout << "\t\t                               [1] Admin                               " << endl;
        cout << "\t\t                               [2] User                                " << endl;
        cout << "\t\t                               [3] Exit                                " << endl;
        cout << "\n\t\t                     Enter choice: ";
        cin >> userChoice;
        cout << "\n";

        if (userChoice == 1) {//admin login
            adminMenu(users);
        } else if (userChoice == 2) {//user login
            loginPage(users);
        } else if (userChoice == 3) {//exit
            break;
        } else {
            cout << "Invalid Choice!" << endl;
        }
    } while (userChoice != 3);

    cout << "\t\t***********************************************************************" << endl;
    cout << "\t\t                     Thank you for using our program!                  " << endl;
    return 0;
}

bool isUsernameTaken(const vector<User>& users, const string& username) {
    for (const auto& user : users) {
        if (user.username == username) {
            return true;
        }
    }
    return false;
}

bool createUserAccount(vector<User>& users, const string& username, const string& password) {
    if (isUsernameTaken(users, username)) {
        cout << "\n\t\t     Username is already taken. Please choose a different username.\n";
        return false;
    }

    users.push_back({username, password});
    cout << "\n\t\t                  Account created successfully!\n";
    return true;
}

bool authenticateUser(const vector<User>& users, const string& username, const string& password) {
    for (const auto& user : users) {
        if (user.username == username && user.password == password) {
            return true;
        }
    }
    return false;
}

void addTask(vector<Task>& tasks) {
    Task newTask;
    system("cls");
    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
    cout << "\t\t                                 ADD TASK                                " << endl;
    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
    cout << "\t\tEnter task description: ";
    cin.ignore();
    getline(cin, newTask.description);
    cout << "\t\tEnter task date (YYYY-MM-DD): ";
    cin >> newTask.date;
    cout << "\t\tEnter task time (HH:MM): ";
    cin >> newTask.time;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "\n\t\t                     Task added successfully!\n";
    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

void displayTasks(const vector<Task>& tasks) {
    int i = 0;
    for (const auto& task : tasks) {
        cout << "\t\t\t\t[" << i<< "] " << task.description << " [" << task.date << " " << task.time << "]";
        i++;
        if (task.completed) {
            cout << " (Completed)";
        }
        cout << endl;
    }
}

void markTaskComplete(vector<Task>& tasks) {
    int index;
    system("cls");
    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
    cout << "\t\t                              COMPLETE TASK                              " << endl;
    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
    displayTasks(tasks);
    cout << "\n\t\tEnter the index of the task to mark as completed: ";
    cin >> index;
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        cout << "\n\n\t\t                       Task marked as completed!\n";
    } else {
        cout << "\n\n\t\t                           Invalid index!\n";
    }
    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

void modifyTask(vector<Task>& tasks) {
    cout << "\n\t\t*******************************Tasks***********************************"<< endl;
    displayTasks(tasks);
    int index;
    cout << "\n\t\tEnter the index of the task to modify: ";
    cin >> index;
    if (index >= 0 && index < tasks.size()) {
        Task& task = tasks[index];
        cout << "\t\tEnter new task description: ";
        cin.ignore();
        getline(cin, task.description);
        cout << "\t\tEnter new task date (YYYY-MM-DD): ";
        cin >> task.date;
        cout << "\t\tEnter new task time (HH:MM): ";
        cin >> task.time;
        cout << "\n\t\t              Task modified successfully!\n";
    } else {
        cout << "\t\tInvalid index!\n";
    }

    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

void listUsers(const vector<User>& users) {
    int i = 0;
    for (const auto& user : users) {
        cout << "\t\t                           "<< i<<". " << user.username << endl;
        i++;
    }
}

void deleteUser(vector<User>& users) {
    system("cls");
    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
    cout << "\t\t                               DELETE USER                               " << endl;
    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
    string username;
    cout << "\t\tEnter the username of the user to delete: ";
    cin >> username;
    for (auto it = users.begin(); it != users.end(); ++it) {
        if (it->username == username) {
            users.erase(it);
            cout << "\n\t\t            User deleted successfully!\n";
            cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
            cin.ignore();
            cin.get();
            return;
        }
    }
    cout << "\n\t\t                        User not found!\n";
    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

void userMenu(User& user) {
    int choice;
    do {
        system("cls");
        cout << "\n\t\t-----------------------------------------------------------------------" << endl;
        cout << "\t\t                              Task Scheduler                             " << endl;
        cout << "\n\t\t-----------------------------------------------------------------------" << endl;
        cout << "\t\t                               [1] Add Task                               \n";
        cout << "\t\t                            [2] Display Tasks                             \n";
        cout << "\t\t                       [3] Mark Task as Completed                         \n";
        cout << "\t\t                                [4] Logout                                \n";
        cout << "\n\t\t                      Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(user.tasks);
                break;
            case 2:
                system("cls");
                cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                cout << "\t\t                                  TASKS                                  " << endl;
                cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                displayTasks(user.tasks);
                cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
                cin.ignore();
                cin.get();
                break;
            case 3:
                markTaskComplete(user.tasks);
                break;
            case 4:
                break;
            default:
                cout << "\t\tInvalid choice! Please try again.\n";
                break;
        }

        cout << "\n";
    } while (choice != 4);
    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

void adminMenu(vector<User>& users) {
    int choice;
    string adminPass;
    system("cls");
    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
    cout << "\t\t                           ADMIN AUTHENTICATION                          " << endl;
    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
    cout << "\n\t\t                    Admin Password: ";
    cin >> adminPass;

    if (adminPass == "admin"){
        do {
            system("cls");
            cout << "\n\t\t-----------------------------------------------------------------------" << endl;
            cout << "\t\t                                ADMIN MENU                               " << endl;
            cout << "\n\t\t-----------------------------------------------------------------------" << endl;
            cout << "\t\t                             [1] Modify Task                             \n";
            cout << "\t\t                              [2] List Users                             \n";
            cout << "\t\t                             [3] Delete User                             \n";
            cout << "\t\t                                [4] Exit                                 \n";
            cout << "\n\t\t                      Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    system("cls");
                    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                    cout << "\t\t                               MODIFY TASK                               " << endl;
                    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                    cout << "\n\t\t*******************************Users***********************************"<< endl;
                    listUsers(users);
                    int userIndex;
                    cout << "\n\t\tEnter the index of the user to modify tasks: ";
                    cin >> userIndex;
                    if (userIndex >= 0 && userIndex < users.size()) {
                        User& user = users[userIndex];
                        modifyTask(user.tasks);
                    } else {
                        cout << "\t\tInvalid user index!\n";
                    }
                    break;
                case 2:
                    system("cls");
                    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                    cout << "\t\t                              LIST OF USERS                              " << endl;
                    cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                    listUsers(users);
                    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
                    cin.ignore();
                    cin.get();
                    break;
                case 3:
                    deleteUser(users);
                    break;
                case 4:
                    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
                    cin.ignore();
                    cin.get();
                    break;
                default:
                    cout << "\t\tInvalid choice! Please try again.\n";
                    break;
            }

            cout << "\n";
        } while (choice != 4);
    }
    else {
        cout << "Incorrect Password!";
    }
}

void loginPage(vector<User>& users) {
    int choice;
    string username, password;

    do {
        system("cls");
        cout << "\n\t\t-----------------------------------------------------------------------" << endl;
        cout << "\t\t                                USER MENU                                " << endl;
        cout << "\n\t\t-----------------------------------------------------------------------" << endl;
        cout << "\t\t                                [1] Login                                \n";
        cout << "\t\t                               [2] Sign Up                               \n";
        cout << "\t\t                                [3] Exit                                 \n";
        cout << "\n\t\t                       Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system("cls");
                cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                cout << "\t\t                                   LOGIN                                 " << endl;
                cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                cout << "\t\t\t\tEnter your username: ";
                cin >> username;
                cout << "\t\t\t\tEnter your password: ";
                cin >> password;
                for (auto& user : users) {
                    if (user.username == username && user.password == password) {
                        cout << "\n\t\t                         Login successful!\n";
                        userMenu(user);
                        break;
                    }
                }
                cout << "\n\t\tInvalid username or password. Login failed.\n";
                break;
            case 2:
                system("cls");
                cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                cout << "\t\t                                 SIGN UP                                 " << endl;
                cout << "\n\t\t-----------------------------------------------------------------------" << endl;
                cout << "\t\t\tEnter your desired username: ";
                cin >> username;
                cout << "\t\t\tEnter your desired password: ";
                cin >> password;
                createUserAccount(users, username, password);
                cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
                cin.ignore();
                cin.get();
                break;
            case 3:
                break;
            default:
                cout << "\t\tInvalid choice! Please try again.\n";
                break;
        }

        cout << "\n";
    } while (choice != 3);
    cout << "\n\n\n\n\t\tPress ENTER key to continue...............";
    cin.ignore();
    cin.get();
}

void info() {
    system("cls");
    cout << "\n\n\n\t\t********************************   Welcome!   *******************************************"<< endl;
    cout << "\t\t                                Task Scheduling System                                   "<< endl;
    cout << "\t\t*****************************************************************************************"<< endl << endl;
    cout << "\t\t  Welcome to the Task Scheduling System! Our system is a powerful tool designed to help  " << endl;
    cout << "\t\t   individuals and organizations effectively manage their tasks and streamline their     " << endl;
    cout << "\t\t  workflow. With a user-friendly interface and a range of features, our Task Scheduling  " << endl;
    cout << "\t\t       System is built to enhance productivity and ensure that important tasks are       " << endl;
    cout << "\t\t                                  completed on time.                                     \n\n\n\n\n\n"<< endl;
    cout << "\t\t                                                                                 CODE BY:"<< endl;
    cout << "\t\t                                                                 Mendoza, Christine Grace"<< endl;
    cout << "\t\t                                                                 Mercado, Angela Julienne"<< endl;
    cout << "\t\t                                                                   Serrano, Rafael Miguel"<< endl;
    cout << "\n\n\n\n\t\tDouble press ENTER key to continue...............";
    cin.ignore();
    cin.get();

}
