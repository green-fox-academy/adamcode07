#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDo {
    private:
        string task;
        string command;
    public:
        NewTask(){}

        void get_input(){
            cin >> task;
            getline(cin, command);
            if (task == "-a"){
                    cout << "Please add a new task";
            }
        };
};

void welcome_scr();

int main()
{

welcome_scr();

ToDo td = ToDo();
td.get_input();


return 0;
}

void welcome_scr(){
    cout <<
"======================================\n\n"
"        ****** ToDo App ******\n\n"
"======================================\n\n"
"Commands:\n\n"
" -a   Adds a new task\n"
" -wr  Write current todos to file\n"
" -rd  Read todos from a file\n"
" -l   Lists all the tasks\n"
" -e   Empty the list\n"
" -rm  Removes a task\n"
" -c   Completes a task\n"
" -p   Add priority to a task\n"
" -lp  Lists all the tasks by priority\n" << endl;

}
