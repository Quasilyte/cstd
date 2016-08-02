#include <cstd/string/memchr.h>
#include <cstd/string/memcmp.h>
#include <cstd/string/memcpy.h>
#include <cstd/string/memmove.h>
#include <cstd/string/memset.h>
#include <cstd/string/strchr.h>
#include <cstd/string/strcmp.h>
#include <cstd/string/strcpy.h>
#include <cstd/string/strlen.h>
#include <cstd/string/strncmp.h>
#include <cstd/string/strncpy.h>
#include <cstd/string/strspn.h>
#include <cstd/string/strstr.h>

#include <string.h>

void* c_memchr(const void* mem, int chr, __SIZE_TYPE__ byte_size) {
  return memchr(mem, chr, byte_size);
}

int c_memcmp(const void* a, const void* b, __SIZE_TYPE__ byte_size) {
  return memcmp(a, b, byte_size);
}

void* c_memcpy(void* __restrict dst, const void* __restrict src, __SIZE_TYPE__ byte_size) {
  return memcpy(dst, src, byte_size);
}

void* c_memmove(void* dst, const void* src, __SIZE_TYPE__ byte_size) {
  return memmove(dst, src, byte_size);
}

void* c_memset(void* mem, int val, __SIZE_TYPE__ byte_size) {
  return memset(mem, val, byte_size);
}

char* c_strchr(const char* cstr, int chr) {
  return strchr(cstr, chr);
}

int c_strcmp(const char* a, const char* b) {
  return strcmp(a, b);
}

char* c_strcpy(char* dst_cstr, const char* src_cstr) {
  return strcpy(dst_cstr, src_cstr);
}

__SIZE_TYPE__ c_strlen(const char* cstr) {
  return strlen(cstr);
}

int c_strncmp(const char* a, const char* b, __SIZE_TYPE__ n) {
  return strncmp(a, b, n);
}

char* c_strncpy(char* dst, const char* src, __SIZE_TYPE__ n) {
  return strncpy(dst, src, n);
}

__SIZE_TYPE__ c_strspn(const char* cstr, const char* whitelist) {
  return strspn(cstr, whitelist);
}

char* c_strstr(char* haystack_cstr, const char* needle_cstr) {
  return strstr(haystack_cstr, needle_cstr);
}
