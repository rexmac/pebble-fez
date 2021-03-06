// 3-----2
// | 7-6 |
// | | | |
// | 4-5 |
// 0-----1

Vec3 vertexs_0[] = {
  { 0, 0, 0 },
  { 30, 0, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },
  { 10, 10, 0 },
  { 20, 10, 0 },
  { 20, 30, 0 },
  { 10, 30, 0 },

  { 0, 0, 10 },
  { 30, 0, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 },
  { 10, 10, 10 },
  { 20, 10, 10 },
  { 20, 30, 10 },
  { 10, 30, 10 }
};
int idxs_0[] = {
  0, 1, 2, 3, 0, 0,
  4, 5, 6, 7, 4, 4,

  8, 9, 10, 11, 8, 8,
  12, 13, 14, 15, 12, 12,

  0, 8, 8,
  1, 9, 9,
  2, 10, 10,
  3, 11, 11,
  4, 12, 12,
  5, 13, 13,
  6, 14, 14,
  7, 15
};

//   3-2
//   | |
//   | |
//   | |
//   0-1

Vec3 vertexs_1[] = {
  { 10, 0, 0 },
  { 20, 0, 0 },
  { 20, 40, 0 },
  { 10, 40, 0 },

  { 10, 0, 10 },
  { 20, 0, 10 },
  { 20, 40, 10 },
  { 10, 40, 10 }
};
int idxs_1[] = {
  0, 1, 2, 3, 0,

  4, 5, 6, 7, 4, 4,

  1, 5, 5,
  2, 6, 6,
  3, 7
};

// 7-----6
// 8---9 |
// 10--4-5
// |   3-2
// 0-----1

Vec3 vertexs_2[] = {
  { 0, 0, 0 },
  { 30, 0, 0 },
  { 30, 10, 0 },
  { 20, 10, 0 },
  { 20, 20, 0 },
  { 30, 20, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },
  { 0, 30, 0 },
  { 20, 30, 0 },
  { 0, 20, 0 },

  { 0, 0, 10 },
  { 30, 0, 10 },
  { 30, 10, 10 },
  { 20, 10, 10 },
  { 20, 20, 10 },
  { 30, 20, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 },
  { 0, 30, 10 },
  { 20, 30, 10 },
  { 0, 20, 10 }
};

int idxs_2[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 10, 0,

  11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 15, 21, 11, 11,

  1, 12, 12,
  2, 13, 13,
  3, 14, 14,
  4, 15, 15,
  5, 16, 16,
  6, 17, 17,
  7, 18, 18,
  8, 19, 19,
  9, 20, 20,
  10, 21
};

// 3-----2
// 4-5   |
//   6-7 |
// 9---8 |
// 0-----1

Vec3 vertexs_3[] = {
  { 0, 0, 0 },
  { 30, 0, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },
  { 0, 30, 0 },
  { 10, 30, 0 },
  { 10, 20, 0 },
  { 20, 20, 0 },
  { 20, 10, 0 },
  { 0, 10, 0 },

  { 0, 0, 10 },
  { 30, 0, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 },
  { 0, 30, 10 },
  { 10, 30, 10 },
  { 10, 20, 10 },
  { 20, 20, 10 },
  { 20, 10, 10 },
  { 0, 10, 10 }
};

int idxs_3[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0,

  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 10, 10,

  1, 11, 11,
  2, 12, 12,
  3, 13, 13,
  4, 14, 14,
  5, 15, 15,
  6, 16, 16,
  7, 17, 17,
  8, 18, 18,
  9, 19
};

// 7-6 3-2
// | 5-4 |
// 8---9 |
//     | |
//     0-1

Vec3 vertexs_4[] = {
  { 20, 0, 0 },
  { 30, 0, 0 },
  { 30, 40, 0 },
  { 20, 40, 0 },
  { 20, 30, 0 },
  { 10, 30, 0 },
  { 10, 40, 0 },
  { 0, 40, 0 },
  { 0, 20, 0 },
  { 20, 20, 0 },

  { 20, 0, 10 },
  { 30, 0, 10 },
  { 30, 40, 10 },
  { 20, 40, 10 },
  { 20, 30, 10 },
  { 10, 30, 10 },
  { 10, 40, 10 },
  { 0, 40, 10 },
  { 0, 20, 10 },
  { 20, 20, 10 }
};

int idxs_4[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0,

  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 10, 10,

  1, 11, 11,
  2, 12, 12,
  3, 13, 13,
  4, 14, 14,
  5, 15, 15,
  6, 16, 16,
  7, 17, 17,
  8, 18, 18,
  9, 19
};

// 7-----6
// |   4-5
// 8---3-2
// 10--9 |
// 0-----1

Vec3 vertexs_5[] = {
  { 0, 0, 0 },
  { 30, 0, 0 },
  { 30, 20, 0 },
  { 20, 20, 0 },
  { 20, 30, 0 },
  { 30, 30, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },
  { 0, 20, 0 },
  { 20, 10, 0 },
  { 0, 10, 0 },

  { 0, 0, 10 },
  { 30, 0, 10 },
  { 30, 20, 10 },
  { 20, 20, 10 },
  { 20, 30, 10 },
  { 30, 30, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 },
  { 0, 20, 10 },
  { 20, 10, 10 },
  { 0, 10, 10 }
};

int idxs_5[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 3, 9, 10, 0,

  11, 12, 13, 14, 15, 16, 17, 18, 19, 14, 20, 21, 11, 11,

  1, 12, 12,
  2, 13, 13,
  3, 14, 14,
  4, 15, 15,
  5, 16, 16,
  6, 17, 17,
  7, 18, 18,
  8, 19, 19,
  9, 20, 20,
  10, 21
};

// 5-4
// | |
// | 3---2
// |     |
// 0-----1

Vec3 vertexs_6[] = {
  { 0, 0, 0 },
  { 30, 0, 0 },
  { 30, 20, 0 },
  { 10, 20, 0 },
  { 10, 40, 0 },
  { 0, 40, 0 },

  { 0, 0, 10 },
  { 30, 0, 10 },
  { 30, 20, 10 },
  { 10, 20, 10 },
  { 10, 40, 10 },
  { 0, 40, 10 }
};
int idxs_6[] = {
  0, 1, 2, 3, 4, 5, 0,

  6, 7, 8, 9, 10, 11, 6, 6,

  1, 7, 7,
  2, 8, 8,
  3, 9, 9,
  4, 10, 10,
  5, 11
};

// 5-----4
// 6---7 |
//   8-2-3
//   | |
//   0-1

Vec3 vertexs_7[] = {
  { 10, 0, 0 },
  { 20, 0, 0 },
  { 20, 20, 0 },
  { 30, 20, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },
  { 0, 30, 0 },
  { 20, 30, 0 },
  { 10, 20, 0 },

  { 10, 0, 10 },
  { 20, 0, 10 },
  { 20, 20, 10 },
  { 30, 20, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 },
  { 0, 30, 10 },
  { 20, 30, 10 },
  { 10, 20, 10 }
};
int idxs_7[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 2, 8, 0,

  9, 10, 11, 12, 13, 14, 15, 16, 11, 17, 9, 9,

  1, 10, 10,
  2, 11, 11,
  3, 12, 12,
  4, 13, 13,
  5, 14, 14,
  6, 15, 15,
  7, 16, 16,
  8, 17
};

// 3-----2
// |     |
// | 7-6 |
// | 4-5 |
// 0-----1

Vec3 vertexs_8[] = {
  { 0, 0, 0 },
  { 30, 0, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },
  { 10, 10, 0 },
  { 20, 10, 0 },
  { 20, 20, 0 },
  { 10, 20, 0 },

  { 0, 0, 10 },
  { 30, 0, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 },
  { 10, 10, 10 },
  { 20, 10, 10 },
  { 20, 20, 10 },
  { 10, 20, 10 }
};
int idxs_8[] = {
  0, 1, 2, 3, 0, 0,
  4, 5, 6, 7, 4, 4,

  8, 9, 10, 11, 8, 8,
  12, 13, 14, 15, 12, 12,

  0, 8, 8,
  1, 9, 9,
  2, 10, 10,
  3, 11, 11,
  4, 12, 12,
  5, 13, 13,
  6, 14, 14,
  7, 15
};

// 3-----2
// |     |
// 4---5 |
//     | |
//     0-1

Vec3 vertexs_9[] = {
  { 20, 0, 0 },
  { 30, 0, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },
  { 0, 20, 0 },
  { 20, 20, 0 },

  { 20, 0, 10 },
  { 30, 0, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 },
  { 0, 20, 10 },
  { 20, 20, 10 }
};
int idxs_9[] = {
  0, 1, 2, 3, 4, 5, 0,

  6, 7, 8, 9, 10, 11, 6, 6,

  1, 7, 7,
  2, 8, 8,
  3, 9, 9,
  4, 10, 10,
  5, 11
};

// 7-----6
// |   4-5
// | 2-3
// | |
// 0-1

Vec3 vertexs_F[] = {
  { 0, 0, 0 },
  { 10, 0, 0 },
  { 10, 20, 0 },
  { 20, 20, 0 },
  { 20, 30, 0 },
  { 30, 30, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },

  { 0, 0, 10 },
  { 10, 0, 10 },
  { 10, 20, 10 },
  { 20, 20, 10 },
  { 20, 30, 10 },
  { 30, 30, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 }
};
int idxs_F[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 0,

  8, 9, 10, 11, 12, 13, 14, 15, 8, 8,

  1, 9, 9,
  2, 10, 10,
  3, 11, 11,
  4, 12, 12,
  5, 13, 13,
  6, 14, 14,
  7, 15
};

// 9-----8
// |   6-7
// | 4-5
// | 3---2
// 0-----1

Vec3 vertexs_E[] = {
  { 0, 0, 0 },
  { 30, 0, 0 },
  { 30, 10, 0 },
  { 10, 10, 0 },
  { 10, 20, 0 },
  { 20, 20, 0 },
  { 20, 30, 0 },
  { 30, 30, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },

  { 0, 0, 10 },
  { 30, 0, 10 },
  { 30, 10, 10 },
  { 10, 10, 10 },
  { 10, 20, 10 },
  { 20, 20, 10 },
  { 20, 30, 10 },
  { 30, 30, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 }
};
int idxs_E[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0,

  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 10, 10,

  1, 11, 11,
  2, 12, 12,
  3, 13, 13,
  4, 14, 14,
  5, 15, 15,
  6, 16, 16,
  7, 17, 17,
  8, 18, 18,
  9, 19
};

// 7-----6
// 8---9 |
// 10--4-5
// |   3-2
// 0-----1

Vec3 vertexs_Z[] = {
  { 0, 0, 0 },
  { 30, 0, 0 },
  { 30, 10, 0 },
  { 20, 10, 0 },
  { 20, 20, 0 },
  { 30, 20, 0 },
  { 30, 40, 0 },
  { 0, 40, 0 },
  { 0, 30, 0 },
  { 30, 30, 0 },
  { 0, 20, 0 },

  { 0, 0, 10 },
  { 30, 0, 10 },
  { 30, 10, 10 },
  { 20, 10, 10 },
  { 20, 20, 10 },
  { 30, 20, 10 },
  { 30, 40, 10 },
  { 0, 40, 10 },
  { 0, 30, 10 },
  { 30, 30, 10 },
  { 0, 20, 10 }
};

int idxs_Z[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 10, 0,

  11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 15, 21, 11, 11,

  1, 12, 12,
  2, 13, 13,
  3, 14, 14,
  4, 15, 15,
  5, 16, 16,
  6, 17, 17,
  7, 18, 18,
  8, 19, 19,
  9, 20, 20,
  10, 21
};
