// coding:utf-8
// Author : Yoshiyuki Kurose
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>
#include "lifeGame.h"

#define WORLD_HEIGHT 10
#define WORLD_WIDTH 10
#define DELAY 2 // second

int main(int argc, char const *argv[])
{
    bool world[WORLD_HEIGHT][WORLD_WIDTH];
    bool tmp_world[WORLD_HEIGHT][WORLD_WIDTH];
    uint8_t world_size[] = {WORLD_WIDTH, WORLD_HEIGHT};
    uint8_t grider_dest[2] = {1, 1};

    usleep((DELAY)*1000000);

    // 世界を死で初期化
    allDeath(world_size, world);
    // griderを作成する
    createGrider(world_size, world, grider_dest);
    for (int i = 0; i < 2; i++)
    {
        update(world_size, world);
        printWorld(world_size, world);
        usleep((DELAY)*1000000);
        printf("\n");
    }

    return 0;
}
