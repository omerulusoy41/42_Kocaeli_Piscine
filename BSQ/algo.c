#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct pointed_map
{
	int	x_point;
	int	y_point;
	int	square_len;
	char **map;
};

int	min_of_three(int a, int b, int c)
{
	return ((a<b) ? (a<c?a:c) : (b<c?b:c));
}

al_map	create_almap(des_map map)
{
	pointed_map al_map;
	int	x_index = 0;
	int y_index = 0;

	while (x_index < map.x_index)
	{
		y_index = 0;
		while (y_index < map.y_index)
		{
			if(map.map[y_index][x_index] == map.free_char)
			{
				al_map[y_index][x_index] += min_of_three(al_map.map[y_index - 1][x_index], al_map.map[y_index][x_index - 1], al_map.map[y_index - 1][x_index - 1]);
			}
			y_index++;
		}
		x_index++;
	}
}
