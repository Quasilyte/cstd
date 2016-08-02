#include <cstd/stdlib/abort.h>
#include <cstd/stdlib/abs.h>
#include <cstd/stdlib/atexit.h>
#include <cstd/stdlib/atof.h>
#include <cstd/stdlib/atoi.h>
#include <cstd/stdlib/atol.h>
#include <cstd/stdlib/calloc.h>
#include <cstd/stdlib/exit.h>
#include <cstd/stdlib/free.h>
#include <cstd/stdlib/getenv.h>
#include <cstd/stdlib/malloc.h>
#include <cstd/stdlib/rand.h>
#include <cstd/stdlib/realloc.h>
#include <cstd/stdlib/srand.h>
#include <cstd/stdlib/system.h>

#include <stdlib.h>

void c_abort() {
  abort();
}

int c_abs(int x) {
  return x;
}

int c_atexit(void(*callback)(void)) {
  return atexit(callback);
}

double c_atof(const char* num_ptr) {
  return atof(num_ptr);
}

int c_atoi(const char* num_ptr) {
  return atoi(num_ptr);
}

long int c_atol(const char* num_ptr) {
  return atol(num_ptr);
}

void* c_calloc(__SIZE_TYPE__ member_count, __SIZE_TYPE__ member_byte_size) {
  return calloc(member_count, member_byte_size);
}

void c_free(void* ptr) {
  free(ptr);
}

char* c_getenv(const char* env_var_name) {
  return getenv(env_var_name);
}

void* c_malloc(__SIZE_TYPE__ byte_size) {
  return malloc(byte_size);
}

void c_exit(int status) {
  exit(status);
}

int c_rand(void) {
  return rand();
}

void* c_realloc(void* ptr, __SIZE_TYPE__ byte_size) {
  return realloc(ptr, byte_size);
}

void c_srand(unsigned seed) {
  srand(seed);
}

int c_system(const char* command) {
  return system(command);
}
