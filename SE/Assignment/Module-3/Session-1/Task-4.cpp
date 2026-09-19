#include <iostream>
#include <string>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task()
    {
        title = "";
        isDone = false;
    }

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title;

        if (isDone == true)
        {
            cout << " - DONE";
        }
        else
        {
            cout << " - NOT DONE";
        }

        cout << endl;
    }
};

class TaskList
{
private:
    Task tasks[10];
    int taskCount;

public:
    TaskList()
    {
        taskCount = 0;
    }

    void addTask(string title)
    {
        if (taskCount < 10)
        {
            tasks[taskCount] = Task(title);
            taskCount++;
        }
        else
        {
            cout << "Task list is full!" << endl;
        }
    }

    void markTaskDone(int index)
    {
        if (index >= 0 && index < taskCount)
        {
            tasks[index].markDone();
        }
        else
        {
            cout << "Invalid task index!" << endl;
        }
    }

    void showTasks()
    {
        for (int i = 0; i < taskCount; i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList list;

    list.addTask("Study Biology");
    list.addTask("Complete Assignment");
    list.addTask("Go to Gym");

    list.markTaskDone(1);

    cout << "Task List:" << endl;
    list.showTasks();

    return 0;
}
