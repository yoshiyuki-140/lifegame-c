#define WORLD_WIDTH 10
#define WORLD_HEIGHT 10

// this is declearation of each functions in source file.
bool *allDeath(bool *world, uint8_t *world_size);
void copyWorld(bool *world, bool *tmp_world, uint8_t *world_size);
uint8_t countCells(bool *world, int8_t *world_size, int8_t x, int8_t y);
bool *update(bool *world, uint8_t *world_size);