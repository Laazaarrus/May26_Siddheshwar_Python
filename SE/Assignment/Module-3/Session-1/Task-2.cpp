#include <stdio.h>
#include <string.h>

char tasks[5][100];
int taskDone[5] = {0};
int taskCount = 0;

void markTaskDone(int index)
{
    if (index >= 0 && index < taskCount)
    {
        taskDone[index] = 1;
    }
    else
    {
        printf("Invalid task index!\n");
    }
}

int main()
{
    int i;

    printf("Enter 5 tasks:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], 100, stdin);

        tasks[i][strcspn(tasks[i], "\n")] = '\0';

        taskCount++;
    }

    markTaskDone(1);

    printf("\nUpdated Task List:\n");

    for (i = 0; i < taskCount; i++)
    {
        if (taskDone[i] == 1)
        {
            printf("%d. %s - DONE\n", i + 1, tasks[i]);
        }
        else
        {
            printf("%d. %s - NOT DONE\n", i + 1, tasks[i]);
        }
    }

    return 0;
}
