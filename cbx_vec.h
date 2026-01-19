#pragma once
#include <stdbool.h>

typedef struct cbx_vec
{
   size_t count;
   size_t capacity;
   size_t unit_size;
   void* data;
} cbx_vec;

cbx_vec* cbx_vec_create(size_t capacity, size_t unit_size, void* default_data);

