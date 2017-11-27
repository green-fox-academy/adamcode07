#include <stdio.h>
#include <stdlib.h>

void welcome_scr();
int task_counter = 0; //a tomb melyik elemeebe rakjuk a teendot

typedef struct {

    char duty [20];
    int prio;
    int checked;

} todo_t;

void add_new_task(todo_t task_name, char *name);

int main()
{
    char command[255];
    todo_t todos[100];
    welcome_scr();
    while(1)
    {
        gets(command);
        char *tok1 = strtok(command, " ");
        char *tok2 = strtok(NULL, " ");
        if(strcmp(tok1, "-a") == 0){
            printf("add");
        }
        else if(strcmp(tok1, "-wr") == 0){
            printf("write");
        }
        else if(strcmp(tok1, "-rd") == 0){
            printf("read");
        }
        else if(strcmp(tok1, "-l") == 0){
            printf("read");
        }
    }

    return 0;
}

void welcome_scr(){

    printf(
"Todo application\n"
"====================\n"
"Commands:\n"
" -a   Adds a new task\n"
" -wr  Write current todos to file\n"
" -rd  Read todos from a file\n"
" -l   Lists all the tasks\n"
" -e   Empty the list\n"
" -rm   Removes a task\n"
" -c   Completes a task\n"
" -p   Add priority to a task\n"
" -lp  Lists all the tasks by priority\n");
    return 0;
}

void add_new_task(todo_t task_name, char *name)
{
//    strcpy(task_name[task_counter].name, name);

}
