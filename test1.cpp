#include <gtest/gtest.h>
#include <openssl/sha.h>
#include <stdio.h>
#include <string.h>
#include <cstring>

TEST(openssl, sha1) {
  unsigned char ibuf[20] = "compute sha1";
  unsigned char obuf[20];

  SHA1(ibuf, 20, obuf);

  int i;
  for (i = 0; i < 20; i++) {
      printf("%02x ", obuf[i]);
  }
  printf("\n");

  ASSERT_TRUE(true);
}
