#include <stdio.h>

int graph[10][10], visited[10], total;

int stack[10], top = -1;

void push(int v)
{
    top++;
    stack[top] = v;
}

int pop()
{
    int data = stack[top];
    top--;
    return data;
}

int isEmpty()
{
    return top == -1;
}

void dfs_stack(int start)
{
    push(start);

    while (!isEmpty())
    {
        int vertex = pop();

        if (!visited[vertex])
        {
            printf("%d", vertex) = 1;
        }

        for (int j = total - 1; j >= 0; j--)
        {
            if (graph[vertex][j] == i && !visited[j])
            {
                push(j);
            }
        }
    }
}
