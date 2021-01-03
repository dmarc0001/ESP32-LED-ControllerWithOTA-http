#pragma once
#include <Arduino.h>

namespace APISrv
{
  const uint32_t INDEX_PAGE_SIZE = 1732;
  const uint8_t INDEX_PAGE_CONTENT[] PROGMEM = {
      // ANFANG
      31,  139, 8,   8,   171, 169, 240, 95,  2,   255, 116, 101, 109, 112, 95,  105, 110, 100, 101, 120, 46,  104, 116, 109, 108, 0,
      237, 89,  81,  111, 219, 54,  16,  126, 47,  208, 255, 192, 186, 88,  229, 164, 182, 164, 56,  73,  155, 40,  78,  49,  172, 237,
      208, 13,  221, 58,  44,  125, 232, 91,  65,  73,  180, 205, 153, 22,  53,  146, 138, 227, 22,  249, 239, 59,  146, 146, 40,  217,
      114, 226, 164, 201, 219, 144, 192, 145, 201, 227, 119, 223, 29,  143, 119, 71,  101, 252, 44,  229, 137, 90,  229, 4,   205, 212,
      130, 189, 121, 250, 100, 92,  255, 37,  56,  37,  2,   158, 16,  26,  43,  170, 24,  121, 243, 241, 253, 59,  244, 150, 103, 74,
      112, 198, 136, 24,  7,   118, 212, 8,   72,  181, 42,  31,  17,  138, 121, 186, 66,  223, 237, 51,  124, 195, 201, 124, 42,  120,
      145, 165, 195, 132, 51,  46,  34,  244, 124, 18,  234, 159, 179, 74,  162, 28,  22,  211, 184, 31,  14,  16,  252, 30,  28,  156,
      238, 149, 179, 215, 79,  159, 216, 7,   154, 229, 133, 242, 19,  70,  147, 121, 92,  40,  197, 51,  167, 97,  73,  83,  53,  139,
      208, 171, 144, 44,  106, 204, 25,  161, 211, 153, 138, 208, 97,  99,  44,  216, 87,  60,  31,  8,   61,  49,  136, 57,  96,  44,
      6,   140, 76,  212, 126, 80,  9,   44,  176, 152, 210, 44,  66,  39,  249, 85,  189, 40,  199, 105, 74,  179, 105, 132, 14,  142,
      243, 171, 1,   26,  133, 250, 211, 61,  215, 114, 49,  23,  224, 173, 8,   193, 24,  202, 120, 70,  206, 182, 219, 63,  21,  120,
      85,  79,  79,  192, 159, 195, 101, 201, 54,  230, 44,  109, 207, 72,  250, 141, 68,  136, 1,   49,  34,  26,  134, 148, 72,  41,
      22,  243, 152, 21,  228, 204, 217, 96,  121, 12,  5,   78,  105, 33,  35,  228, 31,  215, 14,  216, 238, 202, 104, 198, 47,  137,
      184, 105, 203, 102, 96,  209, 42,  37,  203, 117, 168, 148, 94,  250, 75,  46,  230, 88,  16,  236, 214, 43,  114, 165, 134, 152,
      209, 41,  248, 50,  33,  153, 170, 169, 215, 235, 130, 125, 36,  151, 84,  37,  51,  130, 42,  234, 190, 29,  112, 40,  57,  151,
      84,  81,  96,  135, 4,   97,  88,  209, 75,  231, 211, 148, 202, 156, 225, 85,  4,   166, 48,  154, 145, 97,  204, 120, 50,  111,
      184, 167, 142, 8,   216, 32,  231, 154, 114, 116, 52,  250, 169, 22,  93,  208, 108, 88,  14,  31,  220, 18,  61,  54,  56,  134,
      54,  112, 218, 226, 229, 148, 14,  38,  152, 248, 105, 125, 92,  88,  176, 122, 162, 246, 66,  105, 178, 63,  41,  24,  251, 6,
      27,  189, 17,  210, 167, 39,  219, 214, 216, 77,  116, 11,  120, 142, 19,  170, 192, 35,  238, 88,  149, 24,  225, 134, 85,  225,
      38,  38,  163, 105, 51,  0,   156, 235, 113, 44,  57,  43,  148, 115, 125, 82,  8,   169, 35,  34,  231, 180, 177, 177, 176, 231,
      60,  111, 234, 178, 190, 112, 223, 69,  91,  181, 142, 83,  235, 199, 240, 134, 131, 242, 60,  73,  146, 122, 26,  14,  73,  60,
      167, 106, 168, 4,   206, 42,  118, 254, 145, 116, 4,   58,  199, 215, 109, 140, 98,  50,  225, 130, 236, 102, 42,  28,  64,  136,
      222, 8,   245, 122, 27,  62,  28,  249, 205, 216, 168, 34,  235, 85,  35,  33,  88,  15,  28,  181, 82,  132, 53,  185, 53,  182,
      97,  244, 114, 70,  27,  28,  126, 212, 106, 0,   21,  36,  221, 176, 122, 83,  45,  72,  117, 45,  158, 10,  66,  178, 29,  150,
      27,  185, 46,  0,   157, 158, 118, 88,  111, 178, 88,  199, 114, 227, 141, 29,  214, 55,  189, 214, 2,   200, 11,  145, 179, 93,
      16,  172, 96,  103, 174, 140, 32,  79,  37,  115, 146, 190, 220, 56,  40,  155, 48,  146, 178, 203, 205, 124, 87,  166, 92,  187,
      25,  119, 64,  99,  58,  218, 18,  46,  48,  219, 138, 104, 119, 232, 174, 152, 157, 251, 85,  99,  154, 77,  187, 43,  100, 215,
      22,  214, 136, 118, 31,  239, 0,   217, 185, 161, 53,  92,  185, 171, 119, 192, 211, 221, 197, 232, 240, 181, 174, 221, 135, 80,
      186, 143, 78,  186, 59,  140, 104, 194, 147, 66,  118, 0,   242, 171, 161, 156, 225, 148, 47,  33,  101, 193, 207, 1,   148, 249,
      231, 163, 131, 211, 87,  191, 30,  238, 20,  50,  27,  1,   216, 58,  216, 48,  5,   121, 193, 60,  66,  165, 35,  95,  250, 58,
      147, 236, 185, 36,  176, 144, 59,  201, 221, 46,  211, 40,  192, 115, 70,  160, 116, 162, 119, 182, 148, 202, 170, 76,  254, 188,
      32,  41,  197, 8,   51,  134, 112, 150, 162, 254, 2,   95,  85,  21,  242, 53,  244, 18,  123, 206, 130, 27,  58,  50,  87,  192,
      66,  87,  13,  93,  242, 60,  110, 164, 206, 86,  215, 5,   27,  163, 63,  170, 167, 134, 80,  221, 134, 29,  215, 82,  199, 155,
      82,  235, 205, 207, 73,  75,  81,  163, 161, 58,  34,  139, 106, 188, 118, 73,  71,  11,  210, 81,  136, 111, 232, 26,  156, 129,
      167, 29,  6,   118, 118, 14,  219, 123, 135, 173, 221, 67,  23,  227, 142, 14,  162, 166, 126, 18,  110, 89,  217, 29,  151, 206,
      136, 19,  255, 168, 193, 212, 44,  221, 222, 197, 145, 44,  37,  54,  132, 198, 129, 187, 11,  140, 101, 34,  104, 174, 202, 123,
      193, 164, 200, 18,  93,  169, 32,  114, 168, 250, 154, 227, 41,  233, 55,  194, 233, 18,  11,  68,  24,  89,  160, 115, 4,   55,
      146, 98,  1,   149, 215, 159, 18,  245, 30,  134, 224, 241, 151, 213, 111, 105, 223, 99,  36,  253, 42,  21,  196, 101, 188, 250,
      106, 14,  24,  28,  75,  207, 197, 63,  157, 160, 190, 134, 216, 107, 154, 163, 7,   124, 158, 153, 56,  5,   236, 154, 132, 214,
      141, 36,  81,  23,  22,  175, 255, 76,  205, 168, 244, 203, 99,  187, 135, 174, 155, 150, 59,  164, 219, 216, 65,  126, 127, 32,
      102, 198, 177, 95,  77,  246, 234, 247, 0,   182, 55,  64,  45,  134, 103, 247, 165, 104, 82,  255, 99,  144, 52,  192, 15,  70,
      83,  151, 147, 199, 96,  169, 113, 31,  140, 164, 169, 82,  143, 193, 210, 0,   239, 64,  243, 122, 237, 104, 53,  2,   154, 74,
      56,  43,  241, 218, 9,   187, 154, 9,   208, 156, 145, 37,  250, 242, 199, 199, 15,  74,  229, 127, 147, 127, 11,  34,  85,  223,
      81,  215, 98,  133, 96,  32,  230, 5,   2,   166, 2,   48,  212, 107, 205, 2,   172, 158, 85,  162, 32,  94,  203, 98,  171, 18,
      157, 131, 109, 152, 73,  210, 50,  190, 92,  100, 38,  188, 77,  111, 3,   49,  159, 231, 36,  235, 123, 127, 125, 186, 248, 236,
      13,  52,  5,   48,  31,  84,  56,  102, 90,  6,   12,  44,  41,  127, 48,  239, 39,  250, 222, 91,  219, 166, 15,  63,  175, 114,
      2,   235, 60,  156, 231, 224, 96,  172, 221, 17,  252, 35,  121, 230, 181, 1,   120, 6,   119, 213, 116, 5,   105, 68,  145, 100,
      134, 179, 41,  89,  223, 10,  199, 89,  219, 164, 215, 152, 21,  23,  122, 5,   216, 118, 142, 142, 208, 139, 23,  150, 12,  12,
      21,  210, 140, 141, 194, 176, 181, 212, 122, 74,  235, 7,   248, 223, 47,  62,  253, 233, 231, 88,  72,  82,  194, 201, 156, 103,
      146, 124, 134, 123, 242, 222, 89,  115, 13,  92,  57,  224, 18,  66,  124, 198, 167, 125, 175, 204, 116, 145, 135, 94,  26,  32,
      191, 28,  128, 175, 96,  39,  17,  2,   250, 154, 122, 206, 124, 109, 130, 213, 158, 189, 110, 237, 93,  138, 21,  174, 24,  73,
      37,  160, 166, 210, 201, 170, 255, 29,  121, 224, 216, 42,  183, 122, 145, 217, 173, 235, 189, 230, 85,  200, 240, 74,  73,  92,
      76,  251, 26,  99,  125, 87,  178, 180, 53,  92,  215, 8,   23,  153, 205, 248, 54,  159, 3,   32,  4,   135, 177, 225, 182, 182,
      154, 94,  217, 186, 245, 192, 70,  243, 8,   127, 123, 112, 209, 52,  3,   118, 105, 203, 180, 156, 8,   253, 182, 1,   172, 11,
      91,  81,  185, 174, 5,   53,  36,  15,  194, 112, 51,  22,  131, 224, 65,  143, 204, 255, 161, 253, 248, 161, 173, 205, 177, 49,
      2,   132, 61,  40,  151, 94,  139, 242, 173, 145, 15,  215, 131, 37,  132, 253, 119, 100, 74,  109, 84,  71,  200, 117, 243, 20,
      52,  74,  131, 36,  107, 42,  77,  241, 187, 183, 82,  91,  58,  111, 83,  219, 214, 168, 11,  217, 189, 21,  154, 42,  120, 55,
      125, 166, 36,  221, 91,  161, 45,  104, 183, 105, 12,  246, 119, 200, 85,  78,  127, 75,  71,  51,  216, 202, 93,  12,  7,   173,
      193, 202, 203, 112, 232, 219, 19,  165, 55,  78,  214, 134, 43,  206, 163, 176, 43,  246, 28,  125, 247, 138, 241, 126, 121, 178,
      108, 155, 171, 94,  121, 28,  212, 175, 222, 225, 139, 121, 155, 206, 51,  198, 113, 122, 222, 107, 116, 206, 61,  219, 97,  167,
      244, 178, 108, 175, 199, 179, 81,  245, 134, 126, 66,  167, 0,   50,  178, 18,  65,  37,  162, 101, 81,  194, 176, 148, 231, 189,
      234, 165, 109, 175, 90,  204, 112, 76,  88,  53,  91,  222, 131, 170, 91,  69,  37,  4,   98,  246, 181, 99,  41,  86,  95,  196,
      33,  43,  67,  134, 130, 129, 178, 17,  234, 33,  10,  100, 187, 186, 245, 30,  42,  155, 25,  7,   41,  115, 156, 213, 138, 237,
      181, 219, 1,   191, 1,   191, 192, 124, 197, 50,  48,  52,  127, 208, 174, 27,  204, 209, 97,  179, 213, 150, 102, 111, 191, 179,
      29,  26,  113, 187, 17,  119, 38,  104, 67,  120, 43,  197, 118, 111, 191, 51,  73,  139, 250, 128, 52,  205, 129, 218, 202, 178,
      213, 218, 239, 76,  210, 96,  62,  32,  71,  123, 186, 183, 146, 108, 183, 246, 59,  179, 180, 168, 183, 135, 237, 56,  208, 7,
      219, 30,  241, 192, 252, 203, 237, 63,  224, 129, 46,  58,  138, 27,  0,   0
      // ENDE
  };
}  // namespace APISrv