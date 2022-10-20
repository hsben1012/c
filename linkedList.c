#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island
{
	char *name;
	int opens;
	struct island *next;
}island;

island *create(char *name, int opens)
{
	island *i = (island *)malloc(sizeof(island));
	i ->name = name;
	i ->opens = opens;
	i ->next = NULL;
	return i;
}

void Remove(island **start, char *targetName)
{
	island *current = *start;
	island *pre = NULL;
	while(current != NULL)
	{
		if(strcmp(current ->name, targetName) == 0)
		{
			break;
		}
		pre = current;
		current = current ->next;
	}
	if(current == NULL)
	{
		puts("Not found.");
		return;
	}
	if(current == *start)
	{
		*start = current ->next;
		free(current);
		current = NULL;
		return;
	}
	pre ->next = current ->next;
	free(current);
	current = NULL;
}

void pushFront(island **start, char *name, int opens)
{
	island *newIsland = create(name, opens);
	newIsland ->next = *start;
	*start = newIsland;
}

void pushBack(island **start, char *name, int opens)
{
	island *newIsland = create(name, opens);
	island *current = *start;
	if(current == NULL)
	{
		*start = newIsland;
		return;
	}
	while(current ->next != NULL)
	{
		current = current ->next;
	}
	current ->next = newIsland;
}

void display(island *start)
{
	island *i = start;
	while(i != NULL)
	{
		printf("%s %d\n", i ->name, i ->opens);
		i = i ->next;
	}
}

int main()
{
	/*
	island i1 = {"i1", 900, NULL};
	island i2 = {"i2", 1400, NULL};
	island i3 = {"i3", 720, NULL};
	i1.next = &i2;
	i2.next = &i3;
	*/

	/*
	island *i1 = create("i1", 900);
	island *i2 = create("i2", 1400);
	island *i3 = create("i3", 720);
	island *i4 = create("i4", 820);

	i1 ->next = i2;
	i2 ->next = i3;
	i3 ->next = i4;

	Remove(&i1, "i2");
	*/
	island *i1 = NULL;
	pushFront(&i1, "i0", 1246);
	/*
	island *i1 = NULL;
	pushBack(&i1, "i5", 2900);
	*/
	display(i1);
}
