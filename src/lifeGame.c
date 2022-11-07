// coding:utf-8
// Author : Yoshiyuki Kurose
// world_size : (width,height)
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define WORLD_WIDTH 10
#define WORLD_HEIGHT 10
// 高さと幅の最大値は255 -1-

static bool world[WORLD_HEIGHT][WORLD_WIDTH];

void copyWorld(bool *world, bool *tmp_world, uint8_t *world_size);

uint8_t *init()
{
    // 8bit int がたの数値の最大値は255 ,2**8==256 これにより-1-に書いてあることが定まる
    uint8_t world_size[2] = {WORLD_WIDTH, WORLD_HEIGHT};
    return world_size;
}

// この関数は完成済み
bool *allDeath(bool *world, uint8_t *world_size)
{
    // world_size : [width,height]
    for (uint8_t y = 0; y < world_size[1]; y++)
    {
        for (uint8_t x = 0; x < world_size[0]; x++)
        {
            world[y][x] = false;
        }
    }
    return world;
}

bool *update(bool *world, uint8_t *world_size)
{
    // world_size : [width,height]

    bool tmp_world[world_size[1]][world_size[0]];
    copyWorld(world, tmp_world, world_size);
}

// この関数は完成済み
void copyWorld(bool *world, bool *tmp_world, uint8_t *world_size)
{
    // - worldとtmp_worldは２次元配列のメモリアドレスを格納している
    // - world_sizeはworldとtmp_worldの各次元の配列の長さを格納している長さ2の配列で、
    //   引数として受け取るのはそのメモリアドレス,
    //   この場合,worldの大きさとtmp_worldの大きさは同じでないといけない
    // world_size : [width,height]

    for (uint8_t y = 0; y < world_size[1]; y++)
    {
        for (uint8_t x = 0; x < world_size[0]; x++)
        {
            tmp_world[y][x] = world[y][x];
        }
    }
}

// この関数は完成済み
uint8_t countCells(bool *world, int8_t *world_size, int8_t x, int8_t y)
{
    // world_size : [width,height]
    uint8_t count = 0;
    if (world[(y - 1) % world_size[1]][(x - 1) % world_size[0]] == true)
    {
        count += 1;
    }
    if (world[(y - 1) % world_size[1]][(x) % world_size[0]] == true)
    {
        count += 1;
    }
    if (world[(y - 1) % world_size[1]][(x + 1) % world_size[0]] == true)
    {
        count += 1;
    }
    if (world[(y) % world_size[1]][(x - 1) % world_size[0]] == true)
    {
        count += 1;
    }
    if (world[(y) % world_size[1]][(x + 1) % world_size[0]] == true)
    {
        count += 1;
    }
    if (world[(y + 1) % world_size[1]][(x - 1) % world_size[0]] == true)
    {
        count += 1;
    }
    if (world[(y + 1) % world_size[1]][(x) % world_size[0]] == true)
    {
        count += 1;
    }
    if (world[(y + 1) % world_size[1]][(x + 1) % world_size[0]] == true)
    {
        count += 1;
    }

    return count;
}