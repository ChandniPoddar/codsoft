#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Todo {
public:
    string task;
    bool completed;

    Todo(string t) {
        task = t;
        completed = false;
    }
};

void showMenu() {
    cout << "\n--- TO-DO LIST MENU ---\n";
    cout << "1. Add a task\n";
    cout << "2. View tasks\n";
    cout << "3. Mark task as completed\n";
    cout << "4. Delete a task\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

void viewTasks(const vector<Todo>& todos) {
    if (todos.empty()) {
        cout << "Your to-do list is empty!\n";
        return;
    }

    cout << "\n--- Your Tasks ---\n";
    for (int i = 0; i < todos.size(); ++i) {
        cout << i + 1 << ". " << todos[i].task << " [";
        if (todos[i].completed) {
            cout << "Completed";
        } else {
            cout << "Not Completed";
        }
        cout << "]\n";
    }
}

void addTask(vector<Todo>& todos) {
    cout << "Enter a new task: ";
    string task;
    cin.ignore();
    getline(cin, task);
    todos.push_back(Todo(task));
    cout << "Task added successfully!\n";
}

void markCompleted(vector<Todo>& todos) {
    int index;
    cout << "Enter task number to mark as completed: ";
    cin >> index;

    if (index > 0 && index <= todos.size()) {
        todos[index - 1].completed = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

void deleteTask(vector<Todo>& todos) {
    int index;
    cout << "Enter task number to delete: ";
    cin >> index;

    if (index > 0 && index <= todos.size()) {
        todos.erase(todos.begin() + (index - 1));
        cout << "Task deleted successfully!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

int main() {
    vector<Todo> todos;
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(todos);
                break;
            case 2:
                viewTasks(todos);
                break;
            case 3:
                markCompleted(todos);
                break;
            case 4:
                deleteTask(todos);
                break;
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
