// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: FragShader.fsh ********

// File data
static const char _FragShader_fsh[] = 
	"uniform sampler2D  sBaseTex;\r\n"
	"uniform sampler2D  sReflectTex;\r\n"
	"\r\n"
	"varying mediump vec2   ReflectCoord;\r\n"
	"varying mediump vec2   TexCoord;\r\n"
	"varying lowp    float  ReflectRatio;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\tlowp vec3 baseColor = vec3(texture2D(sBaseTex, TexCoord));\r\n"
	"\tlowp vec3 reflection = vec3(texture2D(sReflectTex, ReflectCoord));\r\n"
	"\tlowp vec3 color = mix(baseColor, reflection, ReflectRatio);\r\n"
	"\tgl_FragColor = vec4(color, 1.0);\r\n"
	"}\r\n";

// Register FragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsh("FragShader.fsh", _FragShader_fsh, 423);

// ******** End: FragShader.fsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: FragShader.fsc ********

// File data
A32BIT _FragShader_fsc[] = {
0x10fab438,0xd69607bb,0x30050100,0x2101,0xa9142cc2,0x0,0x0,0xf1030000,0x1000000,0x4000000,0x0,0x38000000,0x20202,0x0,0x2020000,0x1,0x0,0x8e010000,0x55535020,0x17,0x182,0x1,0x0,0x848,0x0,0x2,0x79,0x0,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x3,0x0,0x3,0x0,0x0,0x0,0x0,0xfffc0000,0x10003,0x10004,0x0,0x20000,0xffffffff,0x0,0x40000,0x30000,0x30001,0x0,0x1,0x0,0x20001,0x0,0x4,0x20002,0x10000,0x80010002,0x80018001,0x8001,0x0,0x40000,
0x100,0xfd100000,0x5,0x20001,0x80018001,0x80018001,0x0,0x0,0x0,0x70007,0x3060a,0x30003,0x10003,0x10001,0x40001,0x40004,0x4,0x20001,0x10003,0x10000,0x50002,0x10000,0x80010002,0x80018001,0x8001,0x0,0x0,0x70001,0x60a0007,0x30003,0x30003,0x20002,0x20002,0x40004,0x40004,0x10000,0x30002,0x1,0x20002,0x2,0x20003,0x80018001,0x80018001,0x0,0x0,0x120000,0x80000010,0x1ffea002,0x824080,0x3526a030,0x1c008980,0x8026020,0x69183,0x0,0x50209601,0x175553,0x18a0000,0x10000,0x0,0x9480000,0x0,0x20000,0x790000,0x0,
0x80000,0x0,0xffff0000,0xffff,0x90000,0xffff0077,0x30000,0x1,0x30000,0x0,0x0,0x0,0x0,0x0,0x1fffc,0x40000,0x1,0x0,0xffff0002,0x1ffff,0x1,0x4,0x10003,0x3,0x10000,0x0,0x10000,0x2,0x1c000000,0x78026120,0x49183,0x20000,0x2,0x20001,0x80018001,0x80018001,0x0,0x0,0x1000004,0x0,0x5fd10,0x10000,0x80010002,0x80018001,0x8001,0x0,0x0,0x70000,0x60a0007,0x30003,0x30003,0x10001,0x10001,0x40004,0x40004,0x10000,0x30002,0x10001,0x20001,0x5,0x20001,0x80018001,0x80018001,0x0,
0x0,0x10000,0x70007,0x3060a,0x30003,0x20003,0x20002,0x40002,0x40004,0x4,0x20001,0x10003,0x20001,0x20002,0x30000,0x80010002,0x80018001,0x8001,0x0,0x0,0x100012,0xa0028000,0x40801ffc,0xa0100082,0x89803520,0xe0030480,0x40811020,0x6,0x400,0x0,0x0,0x803f0000,0x5000000,0x73614273,0x78655465,0x18000000,0x1000003,0x20000,0x1000100,0x65540000,0x6f6f4378,0x6472,0x50300,0x100,0x2000001,0x300,0x66655273,0x7463656c,0x786554,0x3180000,0x10000,0x1000200,0x10001,0x66655200,0x7463656c,0x726f6f43,0x64,0x503,0x1000001,0x20400,0x52000003,0x656c6665,0x61527463,0x6f6974,
0x5020000,0x10000,0x8000100,0x10001,0x0,
};

// Register FragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsc("FragShader.fsc", _FragShader_fsc, 1041);

// ******** End: FragShader.fsc ********
