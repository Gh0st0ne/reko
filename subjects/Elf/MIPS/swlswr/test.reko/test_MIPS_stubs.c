// test_MIPS_stubs.c
// Generated by decompiling test
// using Reko decompiler version 0.9.0.0.

#include "test_MIPS_stubs.h"

// 000009D0: void __libc_start_main(Register ptr32 r28, Register word32 ra)
void __libc_start_main(ptr32 r28, word32 ra)
{
	(*(r28 - 0x7FF0))();
}

// 000009E0: void memset(Register ptr32 r28, Register word32 ra)
void memset(ptr32 r28, word32 ra)
{
	(*(r28 - 0x7FF0))();
}

// 000009F0: void calloc(Register ptr32 r28, Register word32 ra)
void calloc(ptr32 r28, word32 ra)
{
	(*(r28 - 0x7FF0))();
	_fini();
}

