// coding:utf-8
// Author : Yoshiyuki Kurose
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define WORLD_WIDTH 10
#define WORLD_HEIGHT 10
// 高さと幅の最大値は255 -1-

static bool world[WORLD_HEIGHT][WORLD_WIDTH];

uint8_t *init()
{
    // 8bit int がたの数値の最大値は255 ,2**8==256 これにより-1-に書いてあることが定まる
    uint8_t world_size[2] = {WORLD_WIDTH, WORLD_HEIGHT};
    return world_size;
}

bool *allDeath(bool *world)
{
    // static bool world[WORLD_HEIGHT][WORLD_WIDTH];
    for (uint8_t y = 0; y < WORLD_HEIGHT; y++)
    {
        for (uint8_t x = 0; x < WORLD_WIDTH; x++)
        {
            world[y][x] = false;
        }
    }
    return world;
}
