// coding:utf-8
// Author : Yoshiyuki Kurose
// world_size : (width,height) ; 高さと幅の最大値は255 (-1-) ;
// 8bit int がたの数値の最大値は255 ,2**8==256 これにより(-1-)に書いてあることが定まる

#include <stdint.h>
#include <stdbool.h>

// この関数は完成済み
void copyWorld(uint8_t world_size[2] ,bool world[world_size[1]][world_size[0]], bool tmp_world[world_size[1]][world_size[0]])
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
// bool *allDeath(bool *world, uint8_t *world_size)     # これだとバグが残る下の書き方だと
// なぜかコンパイルできた
void allDeath(uint8_t world_size[2],bool world[world_size[1]][world_size[0]])
{
    // world_size : [width,height]
    for (uint8_t y = 0; y < world_size[1]; y++)
    {
        for (uint8_t x = 0; x < world_size[0]; x++)
        {
            world[y][x] = false;
        }
    }
}


