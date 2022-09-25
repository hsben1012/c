#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define SNAKE 1
#define FOOD 2
#define WALL 3

char map[17][17] = {};
unsigned char snake[50] = {77};
unsigned char food = 68;
char len = 1;

unsigned char generate_food()
{
    unsigned char food_position, fx, fy;
    bool in_snake = false;

    srand((unsigned int)time(NULL));
    do
    {
        food_position = (unsigned char)rand() % 255;
        fx = food_position >> 4;
        fy = food_position & 15;
        for(int i = 0; i < len; i++)
        {
            if(food_position == snake[i])
            {
                in_snake = true;
            }
        }
    }
    while(fx == 0 || fy == 0 || fx == 16 || fy == 16 || in_snake);

    return food_position;
}

void print_game()
{
    for(int i = 0; i < 17; i++)
    {
        for(int j = 0; j < 17; j++)
        {
            if(map[i][j] == 0)
            {
                putchar(' ');
            }
            else if(map[i][j] == SNAKE)
            {
                putchar('O');
            }
            else if(map[i][j] == FOOD)
            {
                putchar('@');
            }
            else if(map[i][j] == WALL)
            {
                putchar('#');
            }
        }
        putchar('\n');
    }
    Sleep(100);
    system("cls");
}

int get_dir(int old_dir) // capture keyboard signal
{
    int new_dir = old_dir;
    if(_kbhit())
    {
        getch();
        new_dir = getch();
    }
    if(len > 1)
    {
        /* due to difference between UP & DOWN, LEFT & RIGHT is the same
        if(old_dir == UP && new_dir == DOWN)
        {
            return old_dir;
        }
        if(old_dir == DOWN && new_dir == UP)
        {
            return old_dir;
        }
        if(old_dir == RIGHT && new_dir == LEFT)
        {
            return old_dir;
        }
        if(old_dir == LEFT && new_dir == RIGHT)
        {
            return old_dir;
        }
        */
        if(abs(new_dir - old_dir) == 8 || abs(new_dir - old_dir) == 2)
        {
            return old_dir;
        }
    }
    return new_dir;
}

void move_snake(int dir) // move snake
{
    int last = snake[0], current;
    bool grow = false;
    unsigned char fx, fy, x, y;
    fx = food >> 4; // right shift 4 bits
    fy = food & 15; // 0100 0100 --> 0000 0100
    
    x = snake[0] >> 4; // right shift 4 bits
    y = snake[0] & 15; // 0100 0100 --> 0000 0100
    switch(dir)
    {
        case UP:
            y--;
        break;

        case DOWN:
            y++;
        break;

        case LEFT:
            x--;
        break;

        case RIGHT:
            x++;
        break;
    }
    snake[0] = (x << 4) | y;
    
    if(snake[0] == food)
    {
        grow = true; 
        food = generate_food();
    }
    for(int i = 0; i < len; i++)
    {
        if(i == 0)
        {
            continue;
        }
        current = snake[i];
        snake[i] = last;
        last = current;
    }
    if(grow == true)
    {
        snake[len] = last;
        len ++;
    }
    
    for(int i = 0; i < 17; i++)
    {
        for(int j = 0; j < 17; j++)
        {
            if(i == 0 || i == 16 || j == 0 || j == 16)
            {
                map[i][j] = WALL;
            }
            else if(i == fy && j == fx)
            {
                map[i][j] = FOOD;
            }
            else
            {
                map[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < len; i++)
    {
        x = snake[i] >> 4;
        y = snake[i] & 15;
        if(snake[i] > 0)
        {
            map[y][x] = SNAKE;
        }
    }
}

bool is_Alive()
{
    bool self_eat = false;
    unsigned char x, y;
    
    x = snake[0] >> 4;
    y = snake[0] & 15;
    
    for(int i = 1; i < len; i++)
    {
        if(snake[0] == snake[i])
        {
            self_eat = true;
        }
    }

    return (x == 0 || y == 0 || x == 16 || y == 16 || self_eat) ?  false : true;
}

int main()
{
    for(int i = 0; i < 17; i++)
    {
        for(int j = 0; j < 17; j++)
        {
            map[i][j] = 0;
        }
    }

    for(int i = 1; i < 50;i++)
    {
        snake[i] = 0;
    }

    int dir = UP;
    while(1)
    {
        print_game();
        dir = get_dir(dir);
        move_snake(dir);
        if(!is_Alive())
        {
            break;
        }

    }
    printf("Game Over!\n");
}