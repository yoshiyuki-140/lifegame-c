// coding:utf-8
// Author : Yoshiyuki Kurose
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include "test.h"

#define WORLD_HEIGHT 10
#define WORLD_WIDTH 10

int main(int argc, char const *argv[])
{
    bool world[WORLD_HEIGHT][WORLD_WIDTH];
    bool tmp_world[WORLD_HEIGHT][WORLD_WIDTH];
    uint8_t world_size[] = {WORLD_WIDTH, WORLD_HEIGHT};

    allDeath(world, world_size);
    for (uint8_t y = 0; y < world_size[1]; y++)
    {
        for (uint8_t x = 0; x < world_size[0]; x++)
        {
            if (world[y][x] == true)
            {
                printf("x");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
