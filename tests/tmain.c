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
    uint8_t grider_dest[2] = {1,1};

    allDeath(world_size,world);
    printWorld(world_size,world);
    createGrider(world_size,world,grider_dest);
    printWorld(world_size,world);

    return 0;
}
