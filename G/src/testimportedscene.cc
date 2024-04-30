//
// Imported scene from test.blend
// Edit at your own risk!
//

// Nodes
const nodeDescription nodeDescriptions[] = {
  // Node 0 [<BlenderRoot>]:
  {
    { 0.000000f, 0.000000f, -0.000000f }, // float position[3]
    { 0, 0, 0, 127 }, // char quaternion[4]
    2, // unsigned char numberOfChildren
    0, // unsigned char numberOfRenderables
  },
  // Node 1 [monkey]:
  {
    { 1.628026f, 4.014552f, -1.362098f }, // float position[3]
    { 74, 0, 0, 103 }, // char quaternion[4]
    0, // unsigned char numberOfChildren
    1, // unsigned char numberOfRenderables
  },
  // Node 2 [desk]:
  {
    { 1.129685f, 1.079093f, -1.085024f }, // float position[3]
    { 0, 0, 0, 127 }, // char quaternion[4]
    0, // unsigned char numberOfChildren
    1, // unsigned char numberOfRenderables
  },
};
const unsigned int numberOfNodes = sizeof(nodeDescriptions) / sizeof(nodeDescription);

// Nodes children
const unsigned char nodeChildren[] = {
  // Node 0 [<BlenderRoot>]
  1, 2,
};

// Nodes renderables
const unsigned short renderableIds[] = {
  // Node 1 [monkey]
  0,
  // Node 2 [desk]
  1,
};

// Meshes
const meshDescription meshDescriptions[] = {
  // Mesh 0 [monkey:parallax:none]:
  {
    { 0.013753f, 0.005242f, 0.006590f }, // float scale[3]
    271,	// unsigned short numberOfVertices
    1452,	// unsigned short numberOfIndices (484 x 3)
    X_SYMMETRY,	// unsigned char symmetry
    VBO::monkey,	// VBO::id vboId
    Shader::parallax,	// Shader::id shaderId
    Texture::none,	// Texture::id textureId
  },
  // Mesh 1 [desk:parallax:none]:
  {
    { 0.020436f, 0.025819f, 0.019119f }, // float scale[3]
    56,	// unsigned short numberOfVertices
    264,	// unsigned short numberOfIndices (88 x 3)
    NO_SYMMETRY,	// unsigned char symmetry
    VBO::desk,	// VBO::id vboId
    Shader::parallax,	// Shader::id shaderId
    Texture::none,	// Texture::id textureId
  },
};
const unsigned int numberOfMeshes = sizeof(meshDescriptions) / sizeof(meshDescription);

// Mesh vertices
const char vertices[] = {
  // Mesh 0 [monkey:parallax:none]:
  44, 81, -55,
  41, 86, -45,
  46, 80, -32,
  52, 71, -52,
  51, 69, -22,
  58, 58, -47,
  33, 87, -24,
  33, 77, -12,
  33, 89, -41,
  25, 90, -46,
  19, 87, -34,
  15, 77, -25,
  13, 80, -55,
  7, 69, -51,
  22, 86, -57,
  25, 82, -69,
  19, 73, -75,
  15, 59, -78,
  33, 67, -83,
  33, 52, -88,
  33, 79, -73,
  41, 78, -68,
  46, 66, -73,
  51, 51, -75,
  41, 80, -69,
  44, 83, -56,
  33, 81, -76,
  25, 84, -71,
  21, 89, -58,
  25, 93, -46,
  33, 93, -40,
  41, 88, -44,
  33, 90, -58,
  17, 114, 122,
  15, 122, 113,
  0, 123, 115,
  0, 118, 123,
  30, 109, 120,
  22, 121, 111,
  34, 108, 112,
  25, 120, 97,
  33, 103, 83,
  23, 118, 79,
  29, 91, 47,
  20, 108, 42,
  19, 78, 13,
  41, 72, 8,
  37, 85, -11,
  12, 104, -10,
  59, 68, -7,
  57, 74, -24,
  77, 48, -29,
  67, 64, -43,
  80, 53, -75,
  69, 63, -70,
  66, 54, -84,
  64, 70, -78,
  46, 56, -102,
  41, 72, -99,
  30, 54, -126,
  29, 72, -114,
  15, 59, -122,
  19, 75, -112,
  6, 69, -90,
  9, 83, -85,
  0, 71, -81,
  0, 84, -73,
  15, 75, -80,
  23, 71, -87,
  30, 68, -87,
  40, 67, -81,
  56, 64, -70,
  60, 66, -58,
  58, 71, -43,
  46, 80, -27,
  35, 86, -22,
  19, 87, -34,
  15, 85, -41,
  0, 87, -27,
  12, 79, -64,
  0, 84, -51,
  12, 83, -51,
  6, 127, 104,
  0, 126, 105,
  11, 127, 97,
  10, 124, 80,
  7, 113, 41,
  11, 122, 75,
  8, 105, 19,
  0, 106, 25,
  0, 113, 41,
  0, 122, 74,
  0, 126, 86,
  12, 103, 10,
  12, 108, 8,
  9, 109, 15,
  9, 98, 0,
  10, 102, -4,
  0, 98, -1,
  4, 102, -5,
  0, 101, 6,
  0, 106, 3,
  0, 111, 22,
  7, 110, 11,
  0, 112, 17,
  0, 111, 4,
  4, 106, -3,
  9, 107, -2,
  10, 112, 7,
  15, 99, 14,
  17, 102, 24,
  24, 83, 31,
  22, 80, 22,
  0, 125, 88,
  9, 124, 83,
  9, 126, 95,
  4, 125, 102,
  0, 126, 103,
  4, 118, 102,
  0, 118, 103,
  9, 117, 97,
  9, 117, 87,
  0, 118, 92,
  17, 87, -44,
  16, 85, -53,
  17, 82, -64,
  20, 78, -75,
  21, 90, -38,
  35, 88, -30,
  44, 83, -34,
  54, 74, -46,
  54, 71, -59,
  52, 69, -68,
  39, 76, -78,
  31, 73, -82,
  25, 75, -81,
  22, 76, -72,
  26, 75, -77,
  31, 73, -78,
  38, 73, -76,
  49, 68, -65,
  52, 69, -57,
  51, 73, -47,
  43, 81, -36,
  35, 85, -32,
  22, 87, -39,
  19, 84, -45,
  18, 79, -63,
  18, 81, -53,
  10, 53, -80,
  0, 55, -72,
  18, 45, -108,
  31, 41, -110,
  45, 42, -90,
  63, 40, -74,
  74, 38, -66,
  72, 39, -28,
  56, 52, -7,
  41, 63, 4,
  0, 67, 76,
  0, 58, 66,
  17, 52, 57,
  12, 70, 70,
  0, 81, 108,
  13, 82, 100,
  0, 103, 127,
  15, 99, 124,
  30, 93, 121,
  27, 81, 93,
  23, 72, 64,
  22, 67, 42,
  20, 67, 31,
  20, 69, 22,
  19, 70, 13,
  0, -101, 36,
  31, -81, 31,
  32, -56, 54,
  0, -70, 66,
  28, -15, 65,
  0, -22, 79,
  20, 40, 58,
  0, 46, 67,
  68, 12, 14,
  79, -3, -25,
  0, -127, -32,
  43, -103, -21,
  0, -6, -127,
  42, -10, -118,
  42, -51, -116,
  0, -54, -123,
  42, -85, -94,
  0, -106, -92,
  67, 23, -60,
  59, 14, -65,
  74, -10, -73,
  60, -25, -90,
  74, -41, -71,
  60, -57, -86,
  74, -67, -49,
  60, -84, -65,
  72, -63, -8,
  57, -84, -11,
  43, 29, -81,
  0, 43, -93,
  80, -19, -32,
  76, -38, -27,
  40, -14, 47,
  38, 28, 28,
  55, -12, 35,
  60, -49, 30,
  45, -65, 30,
  95, -58, -43,
  83, -46, -36,
  86, -41, -30,
  94, -52, -35,
  110, -66, -34,
  115, -73, -42,
  118, -61, -13,
  126, -64, -16,
  112, -51, 17,
  119, -52, 21,
  96, -33, 29,
  97, -33, 38,
  77, -11, 26,
  72, -7, 35,
  97, -42, 26,
  82, -22, 23,
  110, -56, 16,
  115, -63, -6,
  109, -68, -21,
  95, -58, -22,
  88, -47, -20,
  67, -18, 21,
  67, -7, 13,
  78, -37, -21,
  75, -30, 24,
  78, -32, 20,
  67, -23, 13,
  70, -35, 9,
  76, -35, 10,
  78, -39, -2,
  74, -33, -9,
  83, -42, -12,
  83, -48, -9,
  89, -53, -15,
  78, -45, 0,
  71, -41, 11,
  77, -40, 13,
  79, -37, 22,
  75, -36, 26,
  82, -29, 24,
  97, -63, -18,
  110, -73, -17,
  117, -69, -3,
  112, -60, 19,
  97, -49, 28,
  87, -41, 16,
  83, -43, 9,
  93, -48, 9,
  89, -49, 1,
  98, -53, 0,
  94, -54, -6,
  103, -55, -2,
  101, -58, -11,
  73, -32, 42,
  97, -53, 43,
  122, -65, 25,
  127, -72, -10,
  116, -86, -32,
  95, -77, -30,
  80, -62, -27,

  // Mesh 1 [desk:parallax:none]:
  -33, -45, -59,
  -33, -45, -54,
  -39, -45, -54,
  -39, -45, -59,
  -33, 60, -59,
  -39, 60, -59,
  -39, 60, -54,
  -33, 60, -54,
  -33, -45, -125,
  -33, -45, -119,
  -39, -45, -119,
  -39, -45, -125,
  -33, 60, -125,
  -39, 60, -125,
  -39, 60, -119,
  -33, 60, -119,
  119, -43, -122,
  119, -43, -117,
  113, -43, -117,
  113, -43, -122,
  119, 61, -122,
  113, 61, -122,
  113, 61, -117,
  119, 61, -117,
  121, -44, -59,
  121, -44, -54,
  115, -44, -54,
  115, -44, -59,
  121, 60, -59,
  115, 60, -59,
  115, 60, -54,
  121, 60, -54,
  49, -52, -39,
  49, -52, 39,
  -49, -52, 39,
  -49, -52, -39,
  49, 52, -39,
  49, 52, 39,
  -49, 52, 39,
  -49, 52, -39,
  127, 61, -127,
  127, 59, -127,
  -46, 59, -127,
  -46, 61, -127,
  -46, 59, -50,
  -46, 61, -50,
  127, 59, -50,
  127, 61, -50,
  -20, 60, 18,
  -6, 73, -19,
  21, 60, 18,
  21, 60, -19,
  36, 127, -19,
  36, 127, 18,
  -5, 127, -19,
  -5, 127, 18,
};

// Mesh indices
const unsigned short indices[] = {
  // Mesh 0 [monkey:parallax:none]:
  0, 1, 2,
  0, 2, 3,
  21, 0, 3,
  0, 21, 24,
  0, 24, 25,
  1, 0, 25,
  3, 2, 4,
  3, 4, 5,
  22, 3, 5,
  21, 3, 22,
  20, 21, 22,
  21, 20, 26,
  21, 26, 24,
  32, 24, 26,
  32, 25, 24,
  1, 25, 31,
  32, 31, 25,
  30, 31, 32,
  32, 29, 30,
  32, 28, 29,
  32, 27, 28,
  32, 26, 27,
  20, 27, 26,
  20, 15, 27,
  15, 28, 27,
  15, 14, 28,
  14, 29, 28,
  14, 9, 29,
  9, 30, 29,
  9, 8, 30,
  8, 31, 30,
  8, 1, 31,
  1, 8, 6,
  8, 9, 10,
  8, 10, 6,
  9, 14, 12,
  9, 12, 10,
  14, 15, 16,
  14, 16, 12,
  10, 12, 13,
  12, 16, 17,
  12, 17, 13,
  6, 10, 11,
  10, 13, 11,
  6, 11, 7,
  2, 6, 7,
  1, 6, 2,
  2, 7, 4,
  16, 19, 17,
  16, 18, 19,
  15, 18, 16,
  18, 23, 19,
  15, 20, 18,
  20, 22, 18,
  18, 22, 23,
  22, 5, 23,
  33, 34, 35,
  33, 35, 36,
  37, 34, 33,
  33, 36, 165,
  33, 165, 166,
  37, 33, 166,
  82, 83, 35,
  82, 35, 34,
  84, 82, 34,
  82, 84, 115,
  82, 115, 116,
  83, 82, 116,
  83, 116, 117,
  117, 116, 118,
  116, 115, 120,
  116, 120, 118,
  84, 114, 115,
  115, 114, 121,
  115, 121, 120,
  121, 118, 120,
  117, 118, 119,
  122, 119, 118,
  122, 118, 121,
  114, 122, 121,
  85, 113, 114,
  84, 85, 114,
  114, 113, 122,
  85, 92, 113,
  92, 85, 87,
  92, 87, 91,
  44, 86, 87,
  44, 87, 42,
  85, 42, 87,
  87, 86, 90,
  87, 90, 91,
  43, 44, 42,
  88, 86, 44,
  88, 44, 110,
  43, 110, 44,
  88, 90, 86,
  88, 89, 90,
  93, 95, 88,
  89, 88, 95,
  93, 88, 110,
  93, 110, 109,
  43, 111, 110,
  111, 109, 110,
  93, 94, 95,
  96, 94, 93,
  96, 93, 109,
  89, 95, 102,
  102, 95, 103,
  94, 103, 95,
  96, 97, 94,
  97, 108, 94,
  94, 108, 103,
  98, 97, 96,
  98, 96, 48,
  96, 109, 48,
  98, 99, 97,
  99, 107, 97,
  97, 107, 108,
  105, 108, 107,
  105, 103, 108,
  102, 103, 104,
  105, 104, 103,
  101, 105, 106,
  105, 107, 106,
  99, 106, 107,
  100, 101, 99,
  100, 99, 98,
  101, 106, 99,
  98, 48, 78,
  76, 77, 78,
  76, 78, 48,
  78, 77, 81,
  78, 81, 80,
  81, 77, 123,
  77, 76, 127,
  77, 127, 123,
  79, 80, 81,
  81, 123, 124,
  79, 81, 124,
  79, 66, 80,
  67, 66, 79,
  79, 124, 125,
  67, 79, 125,
  125, 124, 148,
  124, 123, 146,
  124, 146, 148,
  67, 125, 126,
  126, 125, 147,
  125, 148, 147,
  68, 67, 126,
  68, 126, 135,
  135, 126, 136,
  126, 147, 136,
  67, 68, 62,
  68, 69, 60,
  68, 60, 62,
  69, 68, 135,
  69, 135, 134,
  135, 136, 137,
  134, 135, 137,
  70, 60, 69,
  70, 69, 134,
  57, 59, 60,
  57, 60, 58,
  59, 62, 60,
  70, 58, 60,
  71, 58, 70,
  71, 70, 133,
  70, 134, 133,
  134, 137, 138,
  133, 134, 138,
  71, 133, 132,
  133, 138, 139,
  132, 133, 139,
  71, 56, 58,
  72, 56, 71,
  72, 71, 132,
  55, 57, 58,
  55, 58, 56,
  53, 55, 56,
  53, 56, 54,
  72, 54, 56,
  73, 54, 72,
  73, 72, 131,
  72, 132, 131,
  51, 53, 54,
  51, 54, 52,
  73, 52, 54,
  55, 53, 155,
  53, 51, 156,
  53, 156, 155,
  49, 51, 52,
  51, 49, 157,
  51, 157, 156,
  49, 52, 50,
  74, 50, 52,
  74, 52, 73,
  46, 49, 50,
  49, 46, 158,
  49, 158, 157,
  156, 157, 182,
  157, 158, 207,
  157, 207, 182,
  180, 206, 207,
  182, 207, 206,
  158, 171, 207,
  171, 180, 207,
  180, 178, 206,
  182, 206, 208,
  208, 206, 210,
  178, 210, 206,
  177, 176, 178,
  177, 178, 179,
  179, 178, 180,
  178, 176, 210,
  174, 176, 177,
  174, 175, 176,
  175, 210, 176,
  184, 175, 174,
  184, 185, 175,
  185, 210, 175,
  191, 185, 184,
  191, 190, 185,
  185, 190, 199,
  185, 199, 201,
  185, 201, 210,
  189, 190, 191,
  189, 188, 190,
  190, 188, 197,
  190, 197, 199,
  197, 198, 199,
  200, 201, 199,
  200, 199, 198,
  200, 210, 201,
  200, 209, 210,
  208, 210, 209,
  200, 264, 209,
  208, 209, 264,
  182, 208, 232,
  208, 224, 223,
  208, 223, 232,
  208, 264, 224,
  156, 182, 183,
  182, 232, 233,
  183, 182, 233,
  155, 156, 183,
  155, 183, 192,
  183, 204, 194,
  183, 194, 192,
  183, 233, 204,
  204, 233, 237,
  233, 232, 237,
  236, 237, 232,
  238, 237, 236,
  240, 241, 237,
  240, 237, 238,
  204, 237, 241,
  238, 236, 239,
  240, 238, 246,
  238, 239, 247,
  238, 247, 246,
  239, 236, 248,
  239, 248, 247,
  247, 248, 256,
  247, 256, 257,
  247, 257, 245,
  247, 245, 246,
  240, 246, 245,
  242, 240, 245,
  242, 245, 243,
  243, 245, 257,
  257, 256, 258,
  257, 258, 259,
  243, 257, 259,
  231, 242, 243,
  231, 243, 244,
  243, 259, 261,
  243, 261, 244,
  259, 258, 260,
  259, 260, 261,
  255, 258, 256,
  254, 260, 258,
  254, 258, 255,
  261, 260, 262,
  253, 262, 260,
  253, 260, 254,
  261, 262, 263,
  251, 244, 261,
  251, 261, 263,
  252, 263, 262,
  252, 262, 253,
  228, 252, 253,
  227, 228, 253,
  227, 253, 254,
  225, 227, 254,
  225, 254, 255,
  219, 227, 225,
  217, 228, 227,
  217, 227, 219,
  215, 229, 228,
  215, 228, 217,
  228, 229, 252,
  229, 251, 252,
  251, 263, 252,
  214, 230, 229,
  214, 229, 215,
  229, 230, 251,
  211, 214, 215,
  211, 215, 216,
  216, 215, 217,
  216, 217, 218,
  218, 217, 219,
  216, 218, 267,
  216, 267, 268,
  211, 216, 268,
  218, 219, 220,
  218, 220, 266,
  218, 266, 267,
  268, 267, 266,
  211, 268, 269,
  269, 268, 266,
  220, 265, 266,
  269, 266, 265,
  220, 219, 221,
  220, 221, 222,
  220, 222, 265,
  222, 264, 265,
  269, 265, 264,
  212, 211, 269,
  212, 269, 270,
  269, 264, 270,
  222, 224, 264,
  200, 270, 264,
  222, 221, 223,
  222, 223, 224,
  221, 226, 223,
  223, 226, 235,
  223, 235, 232,
  221, 225, 226,
  235, 226, 250,
  226, 225, 255,
  226, 255, 250,
  236, 232, 235,
  236, 235, 249,
  235, 250, 249,
  249, 250, 256,
  255, 256, 250,
  236, 249, 248,
  249, 256, 248,
  219, 225, 221,
  200, 212, 270,
  200, 198, 196,
  200, 196, 205,
  200, 205, 212,
  211, 212, 213,
  205, 213, 212,
  204, 205, 196,
  205, 234, 213,
  204, 234, 205,
  211, 213, 214,
  214, 213, 231,
  213, 234, 242,
  213, 242, 231,
  234, 241, 240,
  234, 240, 242,
  204, 241, 234,
  204, 196, 194,
  193, 192, 194,
  193, 194, 195,
  195, 194, 196,
  154, 155, 192,
  154, 192, 193,
  57, 55, 154,
  57, 154, 153,
  55, 155, 154,
  153, 154, 193,
  59, 57, 153,
  59, 153, 152,
  153, 193, 202,
  149, 152, 153,
  149, 153, 202,
  59, 61, 62,
  61, 59, 152,
  61, 152, 151,
  149, 151, 152,
  61, 63, 64,
  61, 64, 62,
  63, 61, 151,
  67, 62, 64,
  63, 66, 64,
  67, 64, 66,
  63, 65, 66,
  65, 63, 149,
  63, 151, 149,
  65, 149, 150,
  150, 149, 203,
  203, 202, 187,
  203, 187, 186,
  149, 202, 203,
  186, 187, 188,
  188, 187, 195,
  187, 202, 193,
  187, 193, 195,
  186, 188, 189,
  188, 195, 197,
  195, 196, 197,
  197, 196, 198,
  214, 231, 230,
  230, 231, 244,
  230, 244, 251,
  179, 180, 181,
  181, 180, 161,
  170, 161, 180,
  170, 180, 171,
  181, 161, 160,
  159, 160, 161,
  159, 161, 162,
  170, 162, 161,
  170, 169, 162,
  43, 169, 170,
  43, 170, 171,
  111, 171, 172,
  43, 171, 111,
  158, 172, 171,
  43, 42, 41,
  43, 41, 169,
  41, 168, 169,
  168, 162, 169,
  41, 42, 40,
  41, 40, 39,
  41, 39, 168,
  85, 40, 42,
  39, 40, 38,
  85, 38, 40,
  39, 38, 37,
  39, 37, 167,
  39, 167, 168,
  37, 38, 34,
  84, 34, 38,
  85, 84, 38,
  37, 166, 167,
  168, 167, 166,
  165, 164, 166,
  168, 166, 164,
  165, 163, 164,
  163, 162, 164,
  168, 164, 162,
  163, 159, 162,
  111, 172, 112,
  45, 112, 172,
  45, 172, 173,
  158, 173, 172,
  111, 112, 109,
  45, 109, 112,
  45, 48, 109,
  45, 47, 48,
  76, 48, 47,
  45, 46, 47,
  46, 50, 47,
  75, 47, 50,
  76, 47, 75,
  76, 75, 128,
  76, 128, 127,
  75, 50, 74,
  75, 74, 129,
  75, 129, 128,
  128, 129, 143,
  128, 143, 144,
  127, 128, 144,
  127, 144, 145,
  123, 127, 145,
  123, 145, 146,
  129, 142, 143,
  74, 130, 129,
  129, 130, 142,
  74, 73, 130,
  73, 131, 130,
  130, 131, 141,
  130, 141, 142,
  131, 132, 140,
  131, 140, 141,
  132, 139, 140,
  45, 158, 46,
  45, 173, 158,

  // Mesh 1 [desk:parallax:none]:
  0, 1, 2,
  0, 2, 3,
  0, 4, 7,
  0, 7, 1,
  4, 0, 3,
  1, 7, 6,
  1, 6, 2,
  2, 6, 5,
  2, 5, 3,
  4, 3, 5,
  4, 5, 6,
  4, 6, 7,
  8, 9, 10,
  8, 10, 11,
  8, 12, 15,
  8, 15, 9,
  12, 8, 11,
  9, 15, 14,
  9, 14, 10,
  10, 14, 13,
  10, 13, 11,
  12, 11, 13,
  12, 13, 14,
  12, 14, 15,
  16, 17, 18,
  16, 18, 19,
  16, 20, 23,
  16, 23, 17,
  20, 16, 19,
  17, 23, 22,
  17, 22, 18,
  18, 22, 21,
  18, 21, 19,
  20, 19, 21,
  20, 21, 22,
  20, 22, 23,
  24, 25, 26,
  24, 26, 27,
  24, 28, 31,
  24, 31, 25,
  28, 24, 27,
  25, 31, 30,
  25, 30, 26,
  26, 30, 29,
  26, 29, 27,
  28, 27, 29,
  28, 29, 30,
  28, 30, 31,
  32, 33, 34,
  32, 34, 35,
  32, 36, 37,
  32, 37, 33,
  36, 32, 35,
  33, 37, 38,
  33, 38, 34,
  34, 38, 39,
  34, 39, 35,
  36, 35, 39,
  36, 39, 49,
  36, 49, 51,
  37, 36, 51,
  38, 37, 50,
  37, 51, 50,
  39, 38, 48,
  38, 50, 48,
  39, 48, 49,
  51, 49, 54,
  49, 48, 55,
  49, 55, 54,
  50, 51, 52,
  51, 54, 52,
  50, 52, 53,
  48, 50, 53,
  48, 53, 55,
  52, 54, 55,
  52, 55, 53,
  40, 41, 42,
  40, 42, 43,
  41, 40, 47,
  40, 43, 45,
  40, 45, 47,
  41, 47, 46,
  41, 46, 44,
  41, 44, 42,
  44, 43, 42,
  44, 45, 43,
  46, 47, 45,
  46, 45, 44,
};

