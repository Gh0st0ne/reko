// varargs_test_text.c
// Generated by decompiling varargs_test.exe
// using Reko decompiler version 0.9.1.0.

#include "varargs_test_text.h"

// 0000000140001000: Register word64 fn0000000140001000()
// Called from:
//      Win32CrtStartup
word64 fn0000000140001000()
{
	ui64 rax_n = g_qw40003000 ^ fp - 200;
	fn0000000140001140(0x140002210, 0x03, 0x140002250, 0x140002240);
	fn00000001400010D0(0x140002228, fp - 0x7C, fp - 0x70, fp - 0x50);
	return fn00000001400011B0(rax_n ^ fp - 200, qwLocD0);
}

// 00000001400010C0: Register ptr64 fn00000001400010C0()
// Called from:
//      fn00000001400010D0
//      fn000000014000193C
ptr64 fn00000001400010C0()
{
	return 0x140003628;
}

// 00000001400010D0: void fn00000001400010D0(Register ptr64 rcx, Register ptr64 rdx, Register ptr64 r8, Register ptr64 r9)
// Called from:
//      fn0000000140001000
void fn00000001400010D0(ptr64 rcx, ptr64 rdx, ptr64 r8, ptr64 r9)
{
	word64 rax_n;
	_acrt_iob_func();
	_stdio_common_vfscanf();
}

// 0000000140001130: Register ptr64 fn0000000140001130()
// Called from:
//      fn0000000140001140
//      fn000000014000193C
ptr64 fn0000000140001130()
{
	return 0x140003620;
}

// 0000000140001140: void fn0000000140001140(Register ptr64 rcx, Register uint64 rdx, Register ptr64 r8, Register ptr64 r9)
// Called from:
//      fn0000000140001000
void fn0000000140001140(ptr64 rcx, uint64 rdx, ptr64 r8, ptr64 r9)
{
	word64 rax_n;
	_acrt_iob_func();
	_stdio_common_vfprintf();
}

// 00000001400011B0: Register word64 fn00000001400011B0(Register ui64 rcx, Stack word64 qwArg00)
// Called from:
//      fn0000000140001000
//      fn0000000140001E9C
word64 fn00000001400011B0(ui64 rcx, word64 qwArg00)
{
	if (rcx != g_qw40003000)
		return fn000000014000147C(rcx, qwArg00);
	ui64 rcx_n = __rol(rcx, 0x10);
	if (((word16) rcx_n & ~0x00) == 0x00)
		return rax;
	rcx = __ror(rcx_n, 0x10);
	return fn000000014000147C(rcx, qwArg00);
}

// 00000001400011D4: void fn00000001400011D4(Register word64 rbx, Register ui64 r8, Stack word64 qwArg08)
void fn00000001400011D4(word64 rbx, ui64 r8, word64 qwArg08)
{
	set_app_type();
	_set_fmode((uint64) (word32) (uint64) fn0000000140001920());
	*__p__commode() = (word32) (uint64) fn0000000140001ABC();
	word64 r8_n;
	if ((byte) (uint64) fn000000014000164C(0x01, r8, out r8_n) != 0x00)
	{
		fn0000000140001B5C();
		fn0000000140001854(0x140001BA8);
		word32 eax_n = (word32) (uint64) fn0000000140001918();
		word64 rax_n;
		word64 r8_n;
		configure_narrow_argv();
		if ((word32) rax_n == 0x00)
		{
			fn0000000140001928();
			if ((word32) (uint64) fn0000000140001958() != 0x00)
				__setusermatherr(&g_t40001ABC);
			fn0000000140001DD0();
			fn0000000140001DD0();
			word32 eax_n = (word32) (uint64) fn0000000140001ABC();
			word64 r8_n;
			configthreadlocale();
			if (fn0000000140001938() != 0x00)
				initialize_narrow_environment();
			fn0000000140001ABC();
			return;
		}
	}
	else
	{
		word64 rcx_n;
		fn0000000140001974(0x07, rbx, qwArg08, out rcx_n);
		int3();
	}
	word64 rcx_n;
	fn0000000140001974(0x07, rbx, qwArg08, out rcx_n);
	int3();
	int3();
	fn0000000140001290();
}

// 0000000140001290: void fn0000000140001290()
// Called from:
//      fn00000001400011D4
void fn0000000140001290()
{
	fn000000014000193C();
}

// 00000001400012A0: void fn00000001400012A0()
void fn00000001400012A0()
{
	fn0000000140001B14();
	word32 eax_n = (word32) (uint64) fn0000000140001ABC();
	set_new_mode();
}

// 00000001400012BC: Register word32 fn00000001400012BC(Register (ptr64 (ptr64 code)) rax)
// Called from:
//      Win32CrtStartup
word32 fn00000001400012BC(<anonymous> ** rax)
{
	word56 rsi_56_8_n = SLICE(rsi, word56, 8);
	byte al = (byte) rax;
	fn0000000140001600(ecx, edx);
	<anonymous> ** rax_n = rax;
	if (al == 0x00)
	{
		word64 rcx_n;
		rax_n = fn0000000140001974(0x07, qwLoc40, qwLoc30, out rcx_n);
		int3();
	}
	fn00000001400015C4(gs);
	word32 ecx_n = (word32) (uint64) g_dw400035B0;
	<anonymous> ** rax_n = rax_n;
	if (ecx_n == 0x01)
	{
		word64 rcx_n;
		rax_n = fn0000000140001974(0x07, qwLoc40, qwLoc30, out rcx_n);
		ecx_n = (word32) rcx_n;
	}
	uint64 rax_n;
	word32 rax_32_32_n = SLICE(rax_n, word32, 32);
	word64 rsi_n = SEQ(rsi_56_8_n, 0x00);
	if (ecx_n == 0x00)
	{
		g_dw400035B0 = 0x01;
		int32 eax_n = _initterm_e(&g_t400021B8, &g_t400021D0);
		rax_n = SEQ(rax_32_32_n, eax_n);
		if (eax_n != 0x00)
		{
			rax_n = 0xFF;
			return (word32) rax_n;
		}
		_initterm(&g_t400021A0, &g_t400021B0);
		g_dw400035B0 = 0x02;
	}
	else
		rsi_n = SEQ(rsi_56_8_n, 0x01);
	fn00000001400017B4(cl);
	fn0000000140001964();
	byte sil_n = (byte) rsi_n;
	if (*rax_n != null)
	{
		word64 r8_n;
		rax_n = fn0000000140001718(rax_n, out r8_n);
		byte al_n = (byte) rax_n;
		word56 rax_56_8_n = SLICE(rax_n, word56, 8);
		if (al_n != 0x00)
		{
			<anonymous> * rbx_n = *rax_n;
			fn0000000140001BF4();
			word64 r9_n;
			rbx_n();
		}
	}
	fn000000014000196C();
	byte al_n = (byte) rax_n;
	word56 rax_56_8_n = SLICE(rax_n, word56, 8);
	if (*rax_n != null)
	{
		word64 r8_n;
		<anonymous> ** rax_n = fn0000000140001718(rax_n, out r8_n);
		al_n = (byte) rax_n;
		rax_56_8_n = SLICE(rax_n, word56, 8);
		if (al_n != 0x00)
		{
			word64 rax_n;
			word64 r8_n;
			word64 r9_n;
			register_thread_local_exe_atexit_callback();
			al_n = (byte) rax_n;
			rax_56_8_n = SLICE(rax_n, word56, 8);
		}
	}
	word64 rax_n;
	_p___argv();
	word64 rax_n;
	_p___argc();
	get_initial_narrow_environment();
	word64 rax_n = fn0000000140001000();
	fn0000000140001AC0();
	uint64 rbx_n = (uint64) (word32) rax_n;
	byte al_n = (byte) rax_n;
	word56 rax_56_8_n = SLICE(rax_n, word56, 8);
	word32 ebx_n = (word32) rbx_n;
	ebx_n = (word32) rbx_n;
	word32 ebx_n = (word32) rbx_n;
	if (al_n != 0x00)
	{
		if (sil_n == 0x00)
		{
			word64 r8_n;
			word64 r9_n;
			cexit();
		}
		fn00000001400017D8(dl);
		rax_n = (uint64) ebx_n;
		return (word32) rax_n;
	}
	else
		exit((uint64) ebx_n);
}

// 0000000140001434: Register Eq_n Win32CrtStartup()
Eq_n Win32CrtStartup()
{
	<anonymous> ** rax_n = fn000000014000186C(qwLoc20, qwLoc18);
	return (DWORD) (uint64) fn00000001400012BC(rax_n);
}

// 0000000140001448: void fn0000000140001448(Register (ptr64 Eq_n) rcx)
// Called from:
//      fn00000001400011B0
void fn0000000140001448(struct _EXCEPTION_POINTERS * rcx)
{
	word32 rax_32_32_n = SLICE(SetUnhandledExceptionFilter(null), word32, 32);
	UnhandledExceptionFilter(rcx);
	TerminateProcess(SEQ(rax_32_32_n, GetCurrentProcess()), 0xC0000409);
}

// 000000014000147C: Register word64 fn000000014000147C(Register ui64 rcx, Stack word64 qwArg00)
// Called from:
//      fn00000001400011B0
word64 fn000000014000147C(ui64 rcx, word64 qwArg00)
{
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		fn0000000140001550(&g_t400030E0, qwLoc38);
		g_qw400031D8 = qwArg00;
		g_ptr40003178 = fp + 0x08;
		g_qw40003050 = g_qw400031D8;
		g_qw40003160 = rcx;
		g_dw40003040 = 0xC0000409;
		g_dw40003044 = 0x01;
		g_dw40003058 = 0x01;
		g_qw40003060 = 0x02;
		fn0000000140001448(&g_t40002200);
		return rax_n;
	}
	else
		__fastfail(0x02);
}

// 0000000140001550: void fn0000000140001550(Register Eq_n rcx, Stack word64 qwArg08)
// Called from:
//      fn00000001400011B0
void fn0000000140001550(Eq_n rcx, word64 qwArg08)
{
	RtlCaptureContext(rcx);
	Eq_n rsi_n = rcx->t00F8;
	uint64 rdi_n = 0x00;
	do
	{
		word32 edi_n = (word32) rdi_n;
		Eq_n rax_n = RtlLookupFunctionEntry(rsi_n, fp + 0x08, null);
		if (rax_n == null)
			return;
		ui64 v16_n = qwLoc20 & 0x00;
		KERNEL32.dll!RtlVirtualUnwind();
		rdi_n = (uint64) (edi_n + 0x01);
		qwLoc20 = v16_n;
	} while ((word32) rdi_n < 0x02);
}

// 00000001400015C4: void fn00000001400015C4(Register (ptr32 Eq_n) gs)
// Called from:
//      Win32CrtStartup
void fn00000001400015C4(struct Eq_n * gs)
{
	if ((word32) (uint64) fn0000000140001DC4() != 0x00)
	{
		word64 rcx_n = gs->ptr0030->qw0008;
		do
		{
			__lock();
			word64 rax_n;
			if (!__cmpxchg(g_qw400035B8, rcx_n, 0x00, out rax_n))
				goto l00000001400015F2;
		} while (rcx_n != rax_n);
	}
	else
	{
l00000001400015F2:
	}
}

// 0000000140001600: void fn0000000140001600(Register word32 ecx, Register word32 edx)
// Called from:
//      Win32CrtStartup
void fn0000000140001600(word32 ecx, word32 edx)
{
	byte al_n = (byte) (uint64) (word32) g_b400035F0;
	if (ecx == 0x00)
		al_n = 0x01;
	g_b400035F0 = al_n;
	fn0000000140001BFC(edx, 0x01);
	if (fn0000000140001938() == 0x00)
		return;
	if (fn0000000140001938() != 0x00)
		return;
	fn0000000140001938();
}

// 000000014000164C: Register byte fn000000014000164C(Register up32 ecx, Register ui64 r8, Register out Eq_n r8Out)
// Called from:
//      fn00000001400011D4
byte fn000000014000164C(up32 ecx, ui64 r8, union Eq_n & r8Out)
{
	word32 ebx_n = (word32) (uint64) ecx;
	if (ecx > 0x01)
	{
		<anonymous> ** rcx_n;
		fn0000000140001974(0x05, qwLoc50, qwLoc40, out rcx_n);
		int3();
		int3();
		int3();
		int3();
		Eq_n r8_n;
		<anonymous> ** rax_n = fn0000000140001718(rcx_n, out r8_n);
		r8Out = r8_n;
		return (byte) rax_n;
	}
	else
	{
		word64 rax_n;
		Eq_n r8_n;
		if ((word32) (uint64) fn0000000140001DC4() != 0x00 && ebx_n == 0x00)
		{
			word64 rax_n;
			word64 r9_n;
			initialize_onexit_table();
			word56 rax_56_8_n = SLICE(rax_n, word56, 8);
			if ((word32) rax_n != 0x00)
				rax_n = SEQ(rax_56_8_n, 0x00);
			else
			{
				word64 rax_n;
				word64 r9_n;
				initialize_onexit_table();
				rax_n = SEQ(SLICE(rax_n, word56, 8), (int8) ((word32) rax_n == 0x00));
			}
		}
		else
		{
			ui64 rdx_n = g_qw40003000;
			uint64 rax_n = (uint64) ((word32) (uint64) (word32) rdx_n & 0x3F);
			r8_n = __ror(r8 | ~0x00, (byte) (uint64) (0x40 - (word32) rax_n)) ^ rdx_n;
			g_t400035C0 = SEQ(r8_n, r8_n);
			g_r400035D0 = (real64) (uint128) r8_n;
			g_ow400035D8 = SEQ(r8_n, r8_n);
			g_r400035E8 = (real64) (uint128) r8_n;
			rax_n = SEQ(SLICE(rax_n, word56, 8), 0x01);
		}
		r8Out = r8_n;
		return (byte) rax_n;
	}
}

// 0000000140001718: Register word64 fn0000000140001718(Register (ptr64 (ptr64 code)) rcx, Register out (ptr64 (ptr64 code)) r8Out)
// Called from:
//      Win32CrtStartup
//      fn000000014000164C
word64 fn0000000140001718(<anonymous> ** rcx, <anonymous> & r8Out)
{
	word64 rax_n;
	<anonymous> ** r8_n = rcx;
	word56 rax_56_8_n = 0x5A;
	if (g_w40000000 == 23117)
	{
		int64 rax_n = (int64) g_dw4000003C;
		rax_56_8_n = SLICE(rax_n, word56, 8);
		struct Eq_n * rcx_n = rax_n + 0x140000000;
		if (rcx_n->dw0000 == 0x4550)
		{
			rax_56_8_n = 0x02;
			if (rcx_n->w0018 == 0x020B)
			{
				uint64 rax_n = (uint64) (word32) rcx_n->w0006;
				struct Eq_n * rdx_n = &rcx_n->w0018 + (uint64) ((word32) rcx_n->w0014);
				r8_n = rcx - 0x140000000;
				word56 rax_56_8_n = SLICE(rax_n, word56, 8);
				struct Eq_n * r9_n = rdx_n + rax_n;
				for (; rdx_n != r9_n; rdx_n += 0x28)
				{
					<anonymous> ** rcx_n = (uint64) rdx_n->dw000C;
					word32 ecx_n = (word32) rcx_n;
					if (r8_n >= rcx_n)
					{
						<anonymous> ** rax_n = (uint64) ((word32) (uint64) rdx_n->dw0008 + ecx_n);
						rax_56_8_n = SLICE(rax_n, word56, 8);
						if (r8_n < rax_n)
							goto l000000014000178F;
					}
				}
				rdx_n = null;
l000000014000178F:
				if (rdx_n == null)
					rax_n = SEQ(rax_56_8_n, 0x00);
				else if (rdx_n->dw0024 < 0x00)
					rax_n = SEQ(rax_56_8_n, 0x00);
				else
					rax_n = SEQ(rax_56_8_n, 0x01);
l00000001400017AC:
				r8Out = r8_n;
				return rax_n;
			}
		}
	}
	rax_n = SEQ(rax_56_8_n, 0x00);
	goto l00000001400017AC;
}

// 00000001400017B4: void fn00000001400017B4(Register byte cl)
// Called from:
//      Win32CrtStartup
void fn00000001400017B4(byte cl)
{
	if ((word32) (uint64) fn0000000140001DC4() != 0x00 && cl == 0x00)
		g_qw400035B8 = 0x00;
}

// 00000001400017D8: void fn00000001400017D8(Register byte dl)
// Called from:
//      Win32CrtStartup
void fn00000001400017D8(byte dl)
{
	if (g_b400035F0 == 0x00 || dl == 0x00)
	{
		fn0000000140001938();
		fn0000000140001938();
	}
}

// 0000000140001804: Register Eq_n fn0000000140001804(Register Eq_n rcx)
// Called from:
//      fn0000000140001854
Eq_n fn0000000140001804(Eq_n rcx)
{
	word32 eax_n;
	ui64 rdx_n = g_qw40003000;
	if (__ror(rdx_n ^ g_t400035C0, (byte) (uint64) ((word32) (uint64) (word32) rdx_n & 0x3F)) == ~0x00)
	{
		word64 rax_n;
		crt_atexit();
		eax_n = (word32) rax_n;
	}
	else
	{
		word64 rax_n;
		register_onexit_function();
		eax_n = (word32) rax_n;
	}
	Eq_n rcx_n = 0x00;
	if (eax_n == 0x00)
		rcx_n = rcx;
	return rcx_n;
}

// 0000000140001854: void fn0000000140001854(Register Eq_n rcx)
// Called from:
//      fn00000001400011D4
void fn0000000140001854(Eq_n rcx)
{
	fn0000000140001804(rcx);
}

// 000000014000186C: Register word64 fn000000014000186C(Stack ui64 qwArg10, Stack word64 qwArg18)
// Called from:
//      Win32CrtStartup
word64 fn000000014000186C(ui64 qwArg10, word64 qwArg18)
{
	word32 dwArg18 = (word32) qwArg18;
	ui64 rax_n = g_qw40003000;
	if (rax_n == 769630770)
	{
		GetSystemTimeAsFileTime(fp + 0x10);
		ui64 v14_n = qwArg10 & 0x00 ^ (uint64) GetCurrentThreadId() ^ (uint64) GetCurrentProcessId();
		QueryPerformanceCounter(fp + 0x18);
		ui64 rax_n = (uint64) dwArg18 << 0x20 ^ qwArg18 ^ v14_n ^ fp + 0x08;
		rax_n = rax_n & 0xFFFFFFFF;
		if ((rax_n & 0xFFFFFFFF) == 769630770)
			rax_n = 769630771;
		g_qw40003000 = rax_n;
	}
	word64 rax_n = ~rax_n;
	g_qw40003008 = rax_n;
	return rax_n;
}

// 0000000140001918: Register word32 fn0000000140001918()
// Called from:
//      fn00000001400011D4
word32 fn0000000140001918()
{
	return 0x01;
}

// 0000000140001920: Register word32 fn0000000140001920()
// Called from:
//      fn00000001400011D4
word32 fn0000000140001920()
{
	return 0x4000;
}

// 0000000140001928: void fn0000000140001928()
// Called from:
//      fn00000001400011D4
void fn0000000140001928()
{
	InitializeSListHead(&g_u40003600);
}

// 0000000140001938: Register byte fn0000000140001938()
// Called from:
//      fn00000001400011D4
//      fn0000000140001600
//      fn00000001400017D8
byte fn0000000140001938()
{
	return 0x01;
}

// 000000014000193C: void fn000000014000193C()
// Called from:
//      fn0000000140001290
void fn000000014000193C()
{
	ui64 * rax_n = fn0000000140001130();
	*rax_n |= 0x04;
	ui64 * rax_n = fn00000001400010C0();
	*rax_n |= 0x02;
}

// 0000000140001958: Register word32 fn0000000140001958()
// Called from:
//      fn00000001400011D4
word32 fn0000000140001958()
{
	return (word32) (uint64) (int8) (g_dw40003014 == 0x00);
}

// 0000000140001964: void fn0000000140001964()
// Called from:
//      Win32CrtStartup
void fn0000000140001964()
{
}

// 000000014000196C: void fn000000014000196C()
// Called from:
//      Win32CrtStartup
void fn000000014000196C()
{
}

// 0000000140001974: Register uint64 fn0000000140001974(Register word32 ecx, Stack word64 qwArg00, Stack word64 qwArg10, Register out ptr64 rcxOut)
// Called from:
//      fn00000001400011D4
//      Win32CrtStartup
//      fn000000014000164C
uint64 fn0000000140001974(word32 ecx, word64 qwArg00, word64 qwArg10, ptr64 & rcxOut)
{
	word32 ebx_n = (word32) (uint64) ecx;
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		g_dw40003610 &= 0x00;
		memset(fp - 0x04D8, 0x00, 0x04D0);
		RtlCaptureContext(fp - 0x04D8);
		Eq_n rax_n = RtlLookupFunctionEntry(qwLoc03E0, fp + 0x10, null);
		if (rax_n != null)
			KERNEL32.dll!RtlVirtualUnwind();
		memset(fp - 1400, 0x00, 0x98);
		int8 bl_n = (int8) (IsDebuggerPresent() == 0x01);
		word32 rax_32_32_n = SLICE(SetUnhandledExceptionFilter(null), word32, 32);
		Eq_n eax_n = UnhandledExceptionFilter(fp - 0x0588);
		uint64 rax_n = SEQ(rax_32_32_n, eax_n);
		if (eax_n == 0x00)
		{
			rax_n = (uint64) (0x00 - (bl_n == 0x00));
			g_dw40003610 &= (word32) rax_n;
		}
		rcxOut = fp - 0x0588;
		return rax_n;
	}
	else
		__fastfail((word32) (uint64) ebx_n);
}

// 0000000140001ABC: Register word32 fn0000000140001ABC()
// Called from:
//      fn00000001400011D4
//      fn00000001400012A0
word32 fn0000000140001ABC()
{
	return 0x00;
}

// 0000000140001AC0: void fn0000000140001AC0()
// Called from:
//      Win32CrtStartup
void fn0000000140001AC0()
{
	Eq_n rax_n = GetModuleHandleW(null);
	if (rax_n == null || rax_n->unused != 23117)
		return;
	struct Eq_n * rax_n = rax_n + (int64) rax_n->dw003C / 64;
	if (rax_n->dw0000 != 0x4550 || (rax_n->w0018 != 0x020B || rax_n->dw0084 <= 0x0E))
		;
}

// 0000000140001B14: void fn0000000140001B14()
// Called from:
//      fn00000001400012A0
void fn0000000140001B14()
{
	SetUnhandledExceptionFilter(&g_t40001B24);
}

// 0000000140001B24: void fn0000000140001B24(Register (ptr64 (ptr64 Eq_n)) rcx)
void fn0000000140001B24(struct Eq_n ** rcx)
{
	struct Eq_n * rax_n = *rcx;
	if (rax_n->dw0000 != ~0x1F928C9C || rax_n->dw0018 != 0x04)
		return;
	uint64 rcx_n = (uint64) rax_n->dw0020;
	word32 ecx_n = (word32) rcx_n;
	if ((word32) (rcx_n + ~0x1993051F) > 0x02 && ecx_n != 0x01994000)
		return;
	api-ms-win-crt-runtime-l1-1-0.dll!terminate();
	int3();
	fn0000000140001B5C();
}

// 0000000140001B5C: void fn0000000140001B5C()
// Called from:
//      fn00000001400011D4
//      fn0000000140001B24
void fn0000000140001B5C()
{
	word64 * rbx_n;
	for (rbx_n = &g_qw40002680; rbx_n < &g_qw40002680; ++rbx_n)
	{
		<anonymous> * rdi_n = *rbx_n;
		if (rdi_n != null)
		{
			fn0000000140001BF4();
			word64 rcx_n;
			rdi_n();
		}
	}
}

// 0000000140001BA8: void fn0000000140001BA8()
void fn0000000140001BA8()
{
	word64 * rbx_n;
	for (rbx_n = &g_qw40002690; rbx_n < &g_qw40002690; ++rbx_n)
	{
		<anonymous> * rdi_n = *rbx_n;
		if (rdi_n != null)
		{
			fn0000000140001BF4();
			word64 rcx_n;
			rdi_n();
		}
	}
}

// 0000000140001BF4: void fn0000000140001BF4()
// Called from:
//      Win32CrtStartup
//      fn0000000140001B5C
//      fn0000000140001BA8
void fn0000000140001BF4()
{
	g_ptr40002190();
}

// 0000000140001BFC: void fn0000000140001BFC(Register word32 edx, Register Eq_n ebx)
// Called from:
//      fn0000000140001600
void fn0000000140001BFC(word32 edx, Eq_n ebx)
{
	word32 ebx_n = (word32) rbx;
	g_dw4000301C = 0x02;
	__cpuid(0x00, 0x00, &0x00, &ebx_n, &0x00, &edx);
	g_dw40003018 = 0x01;
	uint64 rdx_n = (uint64) ((word32) (uint64) ebx_n ^ 1970169159);
	uint64 r8_n = (uint64) g_dw40003614;
	ui32 edx_n = (word32) rdx_n;
	__cpuid(0x01, 0x00, &0x01, &ebx_n, &0x00, &edx_n);
	byte bLoc20_n = (byte) (dwLoc20 & 0x00);
	ui32 r8d_n = (word32) r8_n;
	word32 r11d_n = (word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ebx_n ^ 1752462657) | (word32) ((uint64) ((word32) ((uint64) edx) ^ 0x69746E65))) | 0x444D4163);
	ui32 rdx_32_32_n = SLICE(rdx_n, word32, 32);
	if ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) edx ^ 0x49656E69) | 1818588270) | edx_n) == 0x00)
	{
		g_qw40003020 |= ~0x00;
		r8_n = (uint64) (r8d_n | 0x04);
		ui32 r8d_n = (word32) r8_n;
		g_dw40003614 = r8d_n;
		if (~0x000106BF == 0x00 || (~0x0002065F == 0x00 || ~0x0002066F == 0x00))
		{
l0000000140001CDE:
			r8_n = (uint64) (r8d_n | 0x01);
			g_dw40003614 = (word32) r8_n;
			goto l0000000140001CE9;
		}
		if (true)
		{
			ebx_n = 0x00010001;
			if (!__bt(0x00010001, 0xFFFCF9B0))
				goto l0000000140001CDE;
		}
	}
l0000000140001CE9:
	ui32 r8d_n = (word32) r8_n;
	uint64 r8_n = r8_n;
	if (r11d_n == 0x00)
	{
		r8_n = r8_n;
		if (true)
		{
			r8_n = (uint64) (r8d_n | 0x04);
			g_dw40003614 = (word32) r8_n;
		}
	}
	ui32 r8d_n = (word32) r8_n;
	if (false)
	{
		__cpuid(0x07, 0x00, &0x07, &ebx_n, &0x00, &edx_n);
		bLoc20_n = (byte) ebx_n;
		if (!__bt(ebx_n, 0x09))
			g_dw40003614 = (word32) (uint64) (r8d_n | 0x02);
	}
	if (!__bt(0x00, 0x14))
	{
		g_dw40003018 = 0x02;
		g_dw4000301C = 0x06;
		if (!__bt(0x00, 0x1B) && !__bt(0x00, 0x1C))
		{
			word64 edx_eax_n = __xgetbv(0x00);
			if (((byte) (SEQ(rdx_32_32_n, SLICE(edx_eax_n, word32, 32)) << 0x20 | (uint64) ((word32) edx_eax_n)) & 0x06) == 0x06)
			{
				ui32 eax_n = (word32) (uint64) ((word32) (uint64) g_dw4000301C | 0x08);
				g_dw40003018 = 0x03;
				g_dw4000301C = eax_n;
				if ((bLoc20_n & 0x20) != 0x00)
				{
					g_dw40003018 = 0x05;
					g_dw4000301C = (word32) (uint64) (eax_n | 0x20);
				}
			}
		}
	}
}

// 0000000140001DC4: Register word32 fn0000000140001DC4()
// Called from:
//      fn00000001400015C4
//      fn000000014000164C
//      fn00000001400017B4
word32 fn0000000140001DC4()
{
	return (word32) (uint64) (int8) (g_dw40003030 != 0x00);
}

// 0000000140001DD0: void fn0000000140001DD0()
// Called from:
//      fn00000001400011D4
void fn0000000140001DD0()
{
}

// 0000000140001E7C: void fn0000000140001E7C(Register Eq_n rdx, Register (ptr64 Eq_n) r9)
void fn0000000140001E7C(Eq_n rdx, struct Eq_n * r9)
{
	fn0000000140001E9C(rdx, r9, r9->ptr0038, qwLoc30);
}

// 0000000140001E9C: void fn0000000140001E9C(Register Eq_n rcx, Register (ptr64 Eq_n) rdx, Register (ptr64 Eq_n) r8, Stack word64 qwArg00)
// Called from:
//      fn0000000140001E7C
void fn0000000140001E9C(Eq_n rcx, struct Eq_n * rdx, struct Eq_n * r8, word64 qwArg00)
{
	word32 r11d_n = (word32) (uint64) ((word32) (uint64) r8->dw0000 & ~0x07);
	Eq_n r9_n = rcx;
	Eq_n r10_n = rcx;
	if ((r8->dw0000 & 0x04) != 0x00)
		r10_n = (word64) rcx + (int64) r8->dw0004 & (int64) ((word32) ((uint64) (-((word32) ((uint64) r8->dw0008)))));
	word64 rdx_n = *((word64) r10_n + (int64) r11d_n);
	struct Eq_n * rcx_n = (uint64) rdx->ptr0010->dw0008 + rdx->qw0008;
	if ((rcx_n->b0003 & 0x0F) != 0x00)
		r9_n = (word64) rcx + (uint64) ((word32) ((uint64) ((word32) rcx_n->b0003)) & ~0x0F);
	ui64 r9_n = r9_n ^ rdx_n;
	fn00000001400011B0(r9_n, qwArg00);
}

// 0000000140001F10: void fn0000000140001F10(Register (ptr64 code) rax)
void fn0000000140001F10(<anonymous> * rax)
{
	rax();
}

// 0000000140001F12: void fn0000000140001F12(Register (ptr64 word64) rcx)
void fn0000000140001F12(word64 * rcx)
{
	word64 rax_n = *rcx;
	seh_filter_exe();
}

// 0000000140001F30: void fn0000000140001F30()
void fn0000000140001F30()
{
}

