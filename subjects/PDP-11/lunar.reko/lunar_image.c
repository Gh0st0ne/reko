// lunar_image.c
// Generated by decompiling lunar.lda
// using Reko decompiler version 0.9.3.0.

#include "lunar_image.h"

// 0128: void fn0128()
// Called from:
//      fn0B06
//      fn13AA
void fn0128()
{
	__wait();
	Eq_n r0_n = g_t006C;
	if (r0_n != 0x00)
	{
		g_t006C.u0 = 0x00;
		g_t006E = r0_n;
		fn053A();
	}
}

// 0242: void fn0242(Register word16 r0, Register (ptr16 word16) r1)
// Called from:
//      fn03CE
//      fn053A
//      fn0856
//      fn103C
void fn0242(word16 r0, word16 * r1)
{
	g_w0080 = 0x00;
	g_ptr0082 = null;
	g_ptr0086 = (word16 *) 0x7FFF;
	word16 r4_n = r0;
	word16 * r5_n = r1;
	while (true)
	{
		cui16 wLoc02_n = 0x00;
		word16 * r3_n;
		word16 r2_n = fn02C8(r4_n + 0x02, out r3_n, out r4_n);
		ci16 r2_n = r2_n - g_w0080;
		if (r2_n <= 0x00)
		{
			r2_n = -r2_n;
			wLoc02_n = 0x2000;
		}
		cu16 r2_n = __swab(r2_n & ~~0x3F);
		cu16 r2_n = __ror(r2_n, r2_n);
		g_w0080 = r2_n;
		ci16 r3_n = r3_n - g_ptr0082;
		if (r3_n <= 0x00)
		{
			r3_n = -r3_n;
			wLoc02_n |= 0x40;
		}
		g_ptr0082 = r3_n;
		cui16 r3_n = r3_n & ~~0x3F;
		if (g_ptr0086 - r3_n < 0x00)
			g_ptr0086 = r3_n;
		*r5_n = r3_n | r2_n | wLoc02_n;
		++r5_n;
	}
}

// 02C8: Register word16 fn02C8(Register (ptr16 Eq_n) r4, Register out Eq_n r3Out, Register out ptr16 r4Out)
// Called from:
//      fn0242
word16 fn02C8(struct Eq_n * r4, union Eq_n & r3Out, ptr16 & r4Out)
{
	word16 r2_n;
	fn125E((int16) r4->b0000, g_t004A, out r2_n);
	word16 r2_n;
	fn125E((int16) r4->b0001, g_t004C, out r2_n);
	word16 r2_n;
	fn125E((int16) r4->b0000, g_t004C, out r2_n);
	word16 r2_n;
	fn125E((int16) r4->b0001, g_t004A, out r2_n);
	r3Out = r2_n - r2_n;
	r4Out = &r4->b0001 + 1;
	return r2_n + r2_n;
}

// 0300: void fn0300(Register Eq_n r4)
// Called from:
//      fn053A
void fn0300(Eq_n r4)
{
	if (g_w0068 == 0x00)
	{
		g_w25C0 = 0xF700;
		g_t0066.u0 = 0x00;
		g_w006A = 14300;
		g_w006A += g_w0068;
		g_t004E.u0 = 0x00;
		g_t0050.u0 = 0x00;
		g_t0052.u0 = 62866;
	}
	else
	{
		wchar_t r3_n;
		Eq_n r2_n;
		wchar_t r3_n;
		fn114A(g_t0064, 10500, out r2_n, out r3_n);
		Eq_n r3_n;
		fn126C(100, r2_n, r3_n, out r3_n);
		g_t0066 = r3_n;
		Eq_n r2_n;
		wchar_t r3_n;
		fn114A(g_t006E, r3_n, out r2_n, out r3_n);
		word16 r3_n;
		fn126C(1500, r2_n, r3_n, out r3_n);
		ci16 r3_n = r3_n - g_w0068;
		if (r3_n >= 0x00)
		{
			g_w25C0 = 0xF700;
			r3_n = 0x00;
		}
		else
		{
			r3_n = -r3_n;
			if (g_w25C0 != 0x00 && r3_n > 2000)
			{
				g_w25C0 = 0x00;
				*(word16 *) 62466 = *(word16 *) 62466;
			}
		}
		g_w0068 = r3_n;
		word16 r3_n;
		fn126C(0x0A, 0x00, r3_n, out r3_n);
		g_w006A = r3_n + 14300;
		Eq_n r2_n;
		wchar_t r3_n;
		fn114A(g_t0066, 0x3ED7, out r2_n, out r3_n);
		Eq_n r3_n;
		fn126C(r4, r2_n, r3_n, out r3_n);
		g_t004E = r3_n;
		Eq_n r2_n;
		fn125E(r3_n, g_t004A, out r2_n);
		g_t0050 = r2_n;
		word16 r2_n;
		fn125E(g_t004E, g_t004C, out r2_n);
		g_t0052 = r2_n - 0x0A6E;
	}
}

// 03CE: void fn03CE(Register (ptr16 word16) r0)
// Called from:
//      fn053A
void fn03CE(word16 * r0)
{
	int16 r2_n = (int16) (g_t0064 >> 3)->b2766;
	++g_w008A;
	int16 r2_n = r2_n + (int16) (g_w008A & ~~0x1F)->b2773;
	g_w008C += r2_n;
	ci16 r4_n;
	struct Eq_n * r5_n = g_a27B0;
	byte * r3_n = (g_w008C & ~~0x03) + 10131;
	for (r4_n = 0x0C; r4_n > 0x00; --r4_n)
	{
		r5_n->b0000 = *r3_n;
		int16 * r5_n = &r5_n->b0000 + 1;
		*r5_n = r2_n;
		++r3_n;
		r5_n = (struct Eq_n *) (r5_n + 4);
	}
	++g_w0090;
	g_w0090 &= ~~0x03;
	g_w008E += 0x0180;
	g_w008E &= ~~0x0380;
	g_w27A8 = 0x8C54;
	g_w27A8 |= g_w0090;
	g_w27A8 |= g_w008E;
	fn0242(0x27A2, r0);
}

// 0444: void fn0444()
// Called from:
//      fn053A
//      fn0856
//      fn0E98
//      fn103C
void fn0444()
{
	ci16 r0_n = g_w0046;
	if (r0_n <= 0x00)
	{
		while (r0_n >= 65356)
		{
			r0_n += 0x0168;
			if (r0_n > 0x00)
				break;
		}
	}
	else
	{
		while (r0_n < 0xB4)
		{
			r0_n -= 0x0168;
			if (r0_n >= 0x00)
				break;
		}
	}
	g_w0046 = r0_n;
	if (r0_n <= 0x00)
		r0_n += 0x0168;
	struct Eq_n * r0_n = r0_n << 1;
	g_t004A = r0_n->t31DC;
	if (r0_n <= &g_t021C)
		r0_n -= 0x02D0;
	g_t004C = r0_n->t3290;
}

// 0488: void fn0488()
// Called from:
//      fn053A
void fn0488()
{
	Eq_n r1_n = g_t0050;
	if (r1_n <= 0x00)
		r1_n = -r1_n;
	Eq_n r2_n;
	wchar_t r3_n;
	fn114A(g_t006E, r1_n, out r2_n, out r3_n);
	ci16 r3_n;
	fn126C(3000, r2_n, r3_n, out r3_n);
	if (g_t0050 <= 0x00)
		r3_n = -r3_n;
	Eq_n r3_n = (r3_n >> 1) + g_w0054;
	g_w0054 += r3_n;
	Eq_n r1_n = r3_n;
	if (r3_n <= 0x00)
		r1_n = -r3_n;
	word16 r2_n;
	word16 r3_n;
	fn114A(g_t006E, r1_n, out r2_n, out r3_n);
	wchar_t r3_n = r3_n + g_w0056;
	word16 r3_n;
	wchar_t r2_n = fn126C(600, (bool) (r3_n < 0x00) + r2_n, r3_n, out r3_n);
	if (r3_n <= 0x00)
		r3_n = -r3_n;
	g_w005C += r3_n;
	g_w0056 = r2_n;
	Eq_n r1_n = g_t0052;
	if (r1_n <= 0x00)
		r1_n = -r1_n;
	Eq_n r2_n;
	wchar_t r3_n;
	fn114A(g_t006E, r1_n, out r2_n, out r3_n);
	ci16 r3_n;
	fn126C(3000, r2_n, r3_n, out r3_n);
	if (g_t0052 <= 0x00)
		r3_n = -r3_n;
	Eq_n r3_n = (word16) g_t0058 + (r3_n >> 1);
	g_t0058 = (word16) g_t0058 + r3_n;
	Eq_n r1_n = r3_n;
	if (r3_n <= 0x00)
		r1_n = -r3_n;
	word16 r2_n;
	word16 r3_n;
	fn114A(g_t006E, r1_n, out r2_n, out r3_n);
	wchar_t r3_n = r3_n + g_w005A;
	word16 r3_n;
	wchar_t r2_n = fn126C(600, (bool) (r3_n < 0x00) + r2_n, r3_n, out r3_n);
	if (r3_n <= 0x00)
		r3_n = -r3_n;
	g_w005E += r3_n;
	g_w005A = r2_n;
}

// 053A: void fn053A()
// Called from:
//      fn0128
void fn053A()
{
	g_w0084 = ~0x3F;
	Eq_n r5_n = g_t0044;
	g_t0044.u0 = 0x00;
	Eq_n r0_n = g_t006E;
	Eq_n r1_n = r5_n;
	if (r5_n <= 0x00)
		r1_n = -r5_n;
	word16 r2_n;
	word16 r3_n;
	fn114A(r0_n, r1_n, out r2_n, out r3_n);
	wchar_t r3_n = r3_n + g_w0048;
	word16 r3_n;
	wchar_t r2_n = fn126C(0x3C, (bool) (r3_n < 0x00) + r2_n, r3_n, out r3_n);
	if (r5_n <= 0x00)
		r3_n = -r3_n;
	g_w0046 += r3_n;
	g_w0048 = r2_n;
	fn0444();
	g_ptr0092 = (struct Eq_n *) ((char *) g_ptr0092 + 2);
	fn0242(9944, (g_ptr0092 & ~~0x02)->ptr34AC);
}

// 0790: void fn0790()
// Called from:
//      fn053A
//      fn0856
void fn0790()
{
}

// 0856: void fn0856(Register Eq_n r4, Stack word16 wArg00)
// Called from:
//      fn053A
void fn0856(Eq_n r4, word16 wArg00)
{
l0856:
	fn1578();
	ptr16 sp_n = fp;
	ci16 r5_n = g_w007E;
	if (r5_n >= 0x00)
	{
		if (r5_n < 0x03)
		{
			r4 = g_t0058;
			if (r4 <= 64936)
			{
				if (r4 <= 65236)
				{
					if (r4 <= ~0x95)
					{
						if (g_w34CA == 8458)
							g_w34CA = 0x00;
					}
					else
						g_w34CA = 8458;
				}
				else
					g_w34CA = 8408;
			}
			else
				g_w34CA = 0x20AC;
l0888:
			int16 r0_n = g_w0078;
			fn0CCA(r0_n);
			switch (wArg00)
			{
			case 0x00:
				fn0790();
				return;
			case 0x01:
				if (r5_n < 0x1A)
				{
					fn0790();
					return;
				}
				ci16 v66_n = 64936 - r4;
				if (v66_n <= 0x00)
				{
					if (v66_n <= 0x00)
						goto l0904;
					g_w34CA = 0x23FE;
					fn0E32();
					goto l0856;
				}
				else
				{
					g_w34CA = 0x237E;
					Eq_n wLoc02_n = 0x03;
					if (g_w0054 >= 0x00)
						wLoc02_n.u1 = 0x04;
					fn0C90(r0_n, wLoc02_n);
					g_w34B6 -= 0x10;
					fn0F04(r0_n);
				}
			}
		}
	}
	else if (r5_n >= ~0x09)
		goto l0904;
	g_w0060 = 0x00;
	g_w25AA = 0x01C2;
	g_w34C2 = 0x00;
	g_w34D2 = 0x00;
	if (r5_n != 0x00 && r5_n > 0x00)
		goto l0888;
	Eq_n r4_n = g_t0058;
	if (r4_n < 64936)
	{
		word16 r0_n;
		if (r4_n < 65236)
		{
			if (r4_n < ~0x95)
			{
				if (r4_n < ~0x4F)
					r0_n = 0x214E;
				else
					r0_n = 8566;
			}
			else
				r0_n = 0x21A4;
		}
		else
			r0_n = 0x21CE;
		ci16 r0_n;
		word16 r1_n;
		g_w34C2 = 0x00;
		g_w34CA = r0_n;
		if (g_w0054 < 100 || g_w0054 > ~0x63)
		{
l0964:
			r0_n = g_w0054;
			r1_n = 0x22C6;
			goto l097C;
		}
		else
		{
			if (g_w0046 <= ~0x0E && g_w0046 >= 0x0F)
			{
				int16 r1_n = g_w0078;
				r0_n = g_a28F2[r1_n * 0x02] - (&g_w28F0)[r1_n * 0x02];
				ci16 r2_n = r0_n;
				if (r0_n <= 0x00)
					r2_n = -r0_n;
				if (r2_n > 0x30)
				{
					fn0B06(r3, r4_n, r5);
					sp_n = fp + 0x02;
					goto l0964;
				}
				r1_n = 8980;
			}
			else
			{
				r0_n = g_w0046;
				r1_n = 0x2258;
			}
l097C:
			g_w34C2 = r1_n;
			int16 r1_n = g_w0078;
			struct Eq_n * sp_n = sp_n - 0x02;
			sp_n->t0000.u1 = 0x03;
			if (r0_n >= 0x00)
				sp_n->t0000.u1 = (word16) sp_n->t0000 + 1;
			sp_n->wFFFFFFFE = r1_n;
			fn0C90(sp_n->wFFFFFFFE, sp_n->t0000);
			ui16 r2_n = g_a28F2[r1_n * 0x02] - (&g_w28F0)[r1_n * 0x02];
			ci16 r2_n = r2_n - (r2_n * 0x03 >> 2);
			struct Eq_n * sp_n = (struct Eq_n *) <invalid>;
			ci16 r2_n = r2_n + (r2_n >> 1);
			if (r2_n <= 0x00)
			{
				if (r2_n > ~0x2C)
					r2_n = ~0x2C;
			}
			else if (r2_n < 0x2D)
				r2_n = 0x2D;
			ci16 r3_n = 0x5A;
			if (r0_n <= 0x00)
				r3_n = -0x5A;
			g_w0046 = r2_n + r3_n;
			struct Eq_n * r1_n = (char *) g_ptr0092 + 2 & ~~0x02;
			g_ptr0092 = r1_n;
			word16 * r1_n = r1_n->ptr34AC;
			sp_n->ptrFFFFFFFE = r1_n;
			fn0444();
			fn0242(9944, r1_n);
		}
	}
l0904:
	g_w34CA = 0x2212;
	fn0F04(fn0E06(0x20));
}

// 0A0A: void fn0A0A()
// Called from:
//      fn053A
void fn0A0A()
{
	if (g_w007E <= 0x96)
		g_w34D2 = 0x00;
	else
	{
		Eq_n r4_n = g_t0064;
		if (r4_n < 0x3F)
			r4_n.u0 = 0x3F;
		Eq_n r4_n = __rol(r4_n, r4_n);
		Eq_n r4_n = __rol(r4_n, r4_n);
		Eq_n r4_n = __rol(r4_n, r4_n);
		g_w35CA = __rol(r4_n, r4_n) & ~~0x0380 | 0x9C50;
		if (g_w0046 < 0x2D)
			g_w34D2 = 0x00;
		else if (g_w0046 > ~0x2C)
			g_w34D2 = 0x00;
		else
		{
			Eq_n r1_n = g_t004A;
			if (r1_n <= 0x00)
				r1_n = -r1_n;
			Eq_n r0_n = g_w34B6 - g_w007A;
			Eq_n r2_n;
			wchar_t r3_n;
			fn114A(r0_n, r1_n, out r2_n, out r3_n);
			word16 r3_n;
			fn126C(g_t004C, r2_n, r3_n, out r3_n);
			ci16 r4_n = (word16) r0_n + r3_n;
			if (g_t004A >= 0x00)
				r3_n = -r3_n;
			g_w35CC = r3_n + g_w34B4;
			g_w35CE = g_w007A;
			g_w35D0 = 0xB000;
			if (r4_n > 0x96)
				g_w34D2 = 0x00;
			else
			{
				Eq_n r4_n = 0x96 - r4_n;
				ci16 r3_n;
				word16 r2_n;
				fn114A(r4_n, g_t0064, out r2_n, out r3_n);
				fn0A94(r3_n >> 3, r4_n, &g_w35D2);
			}
		}
	}
}

// 0A94: void fn0A94(Register int16 r3, Register Eq_n r4, Register (ptr16 word16) r5)
// Called from:
//      fn0A0A
//      fn0B06
void fn0A94(int16 r3, Eq_n r4, word16 * r5)
{
	if (r3 >> 1 == 0x00)
		g_w34D2 = 0x00;
	else
	{
		int16 wLoc02_n = r3 >> 1;
		if (r3 >> 1 < 600)
			wLoc02_n = 600;
		struct Eq_n * r2_n = g_ptr00B0;
		do
		{
			struct Eq_n * r2_n = (char *) (r2_n + g_w0070 / 0x00002767) + 1 & ~~0x3F;
			r2_n = r2_n + Mem29[0x0052<p16>:word16] & ~~0x3F;
			cu16 r0_n = __swab((int16) r2_n->b2766 & ~~0x3F);
			cui16 r4_n = ~r4 & ~~0x2000;
			cui16 r0_n = __ror(r0_n, r0_n) | (r4_n | 0x4000) | (int16) r2_n->b2766 & ~~0x3F;
			*r5 = r0_n;
			struct Eq_n * r5_n = r5 + 1;
			r5_n->w0000 = r0_n + 0x2040 & ~0xC000;
			int16 v24_n = wLoc02_n - 0x01;
			r4 = r4_n | 0x4000;
			r5 = &r5_n->w0002;
			wLoc02_n = v24_n;
		} while (v24_n > 0x00);
		r5_n->w0002 = 0xF700;
		r5_n->w0004 = 0x00;
		g_ptr00B0 = r2_n;
		fn0AF6();
	}
}

// 0AF6: void fn0AF6()
// Called from:
//      fn0A94
//      fn0B06
void fn0AF6()
{
	g_w34D2 = 13770;
}

// 0B06: void fn0B06(Register int16 r3, Register Eq_n r4, Register (ptr16 word16) r5)
// Called from:
//      fn0856
void fn0B06(int16 r3, Eq_n r4, word16 * r5)
{
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	struct Eq_n * stackArg0 = (struct Eq_n *) <invalid>;
	fn13AA(stackArg0);
	2828 = 0x0B0D;
	if (2828 != 0x00)
	{
		fn0A94(r3, r4, r5);
		return;
	}
	g_w267A = g_w34B4;
	g_w267C = g_w34B6;
	g_w34D2 = 9848;
	ptr16 sp_n = fp;
	do
	{
		cu16 v11_n = g_w0070 & 0x7F;
		g_w0070 = v11_n;
	} while (v11_n != 0x00);
	if (g_w07BA != 0x00)
	{
		word16 * r3_n = g_w2610 - g_w34B4;
		word16 r2_n = g_w2612 - g_w267C;
		if (r2_n == 0x03)
			fn0C36(0x00, g_w2610 - g_w267A + 0x19);
		else
			fn0C36(r2_n + 0x03, r3_n);
	}
l0BD0:
	struct Eq_n * sp_n = sp_n - 0x02;
	sp_n->t0000.u1 = 0x01;
	sp_n->wFFFFFFFE = g_w0078;
	fn0C90(sp_n->wFFFFFFFE, sp_n->t0000);
	cu16 r5_n = g_w0070;
	struct Eq_n * sp_n = (struct Eq_n *) <invalid>;
	word16 * r3_n = &g_w0030;
	if (__ror(r5_n, r5_n) < 0x00)
		r3_n = -0x30;
	sp_n->ptrFFFFFFFE = r3_n;
	fn0C36(~0x17, r3_n);
}

// 0C36: void fn0C36(Register ci16 r2, Register (ptr16 word16) r3)
// Called from:
//      fn0B06
void fn0C36(ci16 r2, word16 * r3)
{
	word16 r5_n = 0x0A80;
	if (r3 <= null)
		r5_n = 0x0AC0;
	g_w0C72 = r5_n;
	fn0C72();
}

// 0C72: void fn0C72()
// Called from:
//      fn0B06
//      fn0C36
void fn0C72()
{
	__halt();
}

// 0C76: void fn0C76()
// Called from:
//      fn0C36
void fn0C76()
{
	do
	{
		cu16 v3_n = g_w0070 & 0x07;
		g_w0070 = v3_n;
	} while (v3_n == 0x00);
	fn1578();
	do
	{
		cu16 v9_n = g_w0070 & 0x07;
		g_w0070 = v9_n;
	} while (v9_n != 0x00);
	fn1578();
}

// 0C90: void fn0C90(Stack int16 wArg02, Stack Eq_n bArg04)
// Called from:
//      fn0856
//      fn0B06
//      fn0E06
void fn0C90(int16 wArg02, Eq_n bArg04)
{
	byte bArg04_n = (byte) wArg04;
	if (wArg02 >> 1 < 0x00)
	{
		(wArg02 >> 1)->b3013 = (wArg02 >> 1)->b3013 & ~0xF0;
		bArg04_n = (byte) (wArg04 << 4);
	}
	else
		(wArg02 >> 1)->b3013 = (wArg02 >> 1)->b3013 & ~0x0F;
	(wArg02 >> 1)->b3013 = (wArg02 >> 1)->b3013 | bArg04_n;
}

// 0CCA: void fn0CCA(Stack int16 wArg02)
// Called from:
//      fn0856
void fn0CCA(int16 wArg02)
{
}

// 0CEC: void fn0CEC(Register int16 r0)
// Called from:
//      fn053A
void fn0CEC(int16 r0)
{
	struct Eq_n * r5_n = fn0D3C(r0, ptrLoc02);
	word16 * r4_n = (g_w28F0 >> 5) + 0x17;
	r5_n->ptr0000 = r4_n;
	g_ptr0082 = r4_n;
	r5_n->w0002 = 0x8C50;
	cui16 * r5_n = &r5_n->w0002 + 1;
	struct Eq_n * r0_n = &g_w28F0;
	while (true)
	{
		++r0_n;
		r5_n = fn0D78((r0_n->w0000 >> 5) + 0x17, r5_n);
	}
}

// 0D3C: Register word16 fn0D3C(Register int16 r0, Stack (ptr16 code) ptrArg00)
// Called from:
//      fn0CEC
//      fn0F04
word16 fn0D3C(int16 r0, <anonymous> * ptrArg00)
{
	g_w00A0 = 225;
	g_w34DA = 0x00;
	g_w07BA = 0x00;
	g_a182A[0] = 38996;
	g_w182C = 0xF0A0;
	g_w182E = 0x00;
	ptrArg00();
	return 0x1830;
}

// 0D66: void fn0D66()
void fn0D66()
{
}

// 0D78: Register (ptr16 cui16) fn0D78(Register (ptr16 word16) r4, Register (ptr16 cui16) r5)
// Called from:
//      fn0CEC
//      fn0F04
cui16 * fn0D78(word16 * r4, cui16 * r5)
{
	cui16 wLoc02_n = 0x0200;
	if (r4 <= (char *) (&g_t021C) + 484)
	{
		r4 = (word16 *) ((char *) &g_t021C + 483);
		if (g_ptr0082 == (char *) (&g_t021C) + 483)
			goto l0D9C;
	}
	if (r4 <= null)
	{
		r4 = null;
		if (g_ptr0082 == null)
		{
l0D9C:
			ci16 v18_n = g_w00A2 - 0x01;
			g_w00A2 = v18_n;
			if (v18_n <= 0x00)
			{
				++g_w00A4;
				g_w00A4 &= ~~0x03;
				++g_w00A4;
				g_w00A2 = g_w00A4;
				g_w00A6 += 0x0280;
				g_w00A6 &= ~~0x0380;
				++g_w00A8;
				g_w00A8 &= ~~0x03;
				*r5 = g_w00A6;
				*r5 |= g_w00A8;
				*r5 |= 0x8C04;
				++r5;
			}
			cui16 r4_n;
			wchar_t r4_n = r4 - g_ptr0082;
			if (r4_n <= 0x00)
			{
				cui16 r4_n = -r4_n & ~~0x3F;
				g_ptr0082 -= r4_n;
				r4_n = r4_n | 0x40;
			}
			else
			{
				r4_n = r4_n & ~~0x3F;
				g_ptr0082 += r4_n;
			}
			*r5 = r4_n | wLoc02_n;
			ci16 v43_n = g_w00A0 - 0x01;
			g_w00A0 = v43_n;
			cui16 * r5_n = r5 + 1;
			return r5_n;
		}
	}
	wLoc02_n = 0x4200;
	goto l0D9C;
}

// 0E06: Register int16 fn0E06(Register int16 r0)
// Called from:
//      fn053A
//      fn0856
int16 fn0E06(int16 r0)
{
	int16 r1_n = g_w0072;
	struct Eq_n * r1_n = (r1_n << 1) + 0x28F0;
	Eq_n wLoc02_n = 0x03;
	word16 * r1_n = &r1_n->w0002;
	word16 * r3_n = &r1_n->w0002;
	if (r1_n->w0000 - r1_n->w0002 >= 0x00)
		wLoc02_n.u1 = 0x04;
	fn0C90(r1_n, wLoc02_n);
	do
	{
		*r1_n -= r0;
		r3_n -= 0x02;
		*r3_n -= r0;
		++r1_n;
		r0 = -(r0 >> 1);
	} while (r0 != 0x00);
	return r0;
}

// 0E32: Register word16 fn0E32()
// Called from:
//      fn053A
//      fn0856
word16 fn0E32()
{
	g_w00AE = 0x00;
	g_w34C2 = 0x00;
	g_w34D2 = 0x00;
	*(word16 *) 62466 = *(word16 *) 62466;
	do
	{
		cu16 r4_n = __swab(g_w00AC + 0x01);
		g_w35CA = __ror(r4_n, r4_n) + g_w35CA & ~~0x0380 | 0x9C50;
		struct Eq_n * r5_n;
		fn0E98(&g_w35CC, out r5_n);
		*(word16 *) 62466 = *(word16 *) 62466;
		g_w00AE -= 0x0A;
		struct Eq_n * r5_n;
		fn0E98(r5_n, out r5_n);
		r5_n->w0000 = 0xF700;
		r5_n->w0002 = 0x00;
		g_w34C2 = 13770;
		*(word16 *) 62466 = *(word16 *) 62466;
		g_w00AE += 33;
	} while (g_w00AE >= 0xC0);
	// Failed to bind call argument.
	// Please report this issue at https://github.com/uxmal/reko
	struct Eq_n * stackArg0 = (struct Eq_n *) <invalid>;
	fn13AA(stackArg0);
	__reset();
	word16 r5_n;
	return fn0E98(&r5_n->w0002, out r5_n);
}

// 0E98: Register (ptr16 Eq_n) fn0E98(Register (ptr16 Eq_n) r5, Register out (ptr16 Eq_n) r5Out)
// Called from:
//      fn0E32
struct Eq_n * fn0E98(struct Eq_n * r5, struct Eq_n & r5Out)
{
	g_w0046 = 65506;
	ci16 wLoc02_n = 0xF1;
	do
	{
		fn0444();
		int16 r0_n = (wLoc08 >> 1) + 0x01 + g_w0070 + g_w00AC;
		g_w00AC = r0_n;
		struct Eq_n * r0_n = r0_n & ~~0x1F;
		Eq_n r4_n = (int16) r0_n->b2773 + g_w00AE;
		if (r4_n >= 0x00)
		{
			word16 r2_n;
			r0_n = fn125E(r4_n, g_t004C, out r2_n);
			ci16 r2_n = r2_n + g_w34B4;
			if (r2_n < 0x00)
				goto l0EFE;
			r5->w0000 = r2_n | 0x4000;
			word16 r2_n;
			r0_n = fn125E(r4_n, g_t004A, out r2_n);
			struct Eq_n * r5_n = &r5->w0002;
			ci16 r2_n = r2_n + g_w34B6;
			if (r2_n >= 0x00)
			{
				r5_n->w0000 = r2_n;
				goto l0EF0;
			}
			r5_n->wFFFFFFFE = 0x00;
		}
l0EFE:
		r5->w0000 = 0x00;
		r5->w0002 = 0x00;
l0EF0:
		++g_w0046;
		ci16 v29_n = wLoc02_n - 0x01;
		++r5;
		wLoc02_n = v29_n;
	} while (v29_n > 0x00);
	r5Out = r5;
	return r0_n;
}

// 0F04: void fn0F04(Register int16 r0)
// Called from:
//      fn053A
//      fn0856
void fn0F04(int16 r0)
{
	struct Eq_n * r5_n = fn0D3C(r0, ptrLoc02);
	g_w00AA = 0x00;
	word16 * r0_n = (g_w0074 << 1) + 0x28F0;
	struct Eq_n * sp_n = (struct Eq_n *) <invalid>;
	word16 * r4_n = fn100C(*r0_n);
	if (r4_n <= null)
		r4_n = null;
	else if (r4_n <= (char *) (&g_t021C) + 484)
		r4_n = (word16 *) ((char *) &g_t021C + 483);
	r5_n->ptr0000 = r4_n;
	g_ptr0082 = r4_n;
	r5_n->w0002 = 0x8C50;
	cui16 * r5_n = &r5_n->w0002 + 1;
	while (true)
	{
		wchar_t r3_n;
		sp_n->ptrFFFFFFFE = r4_n;
		word16 * r4_n = fn100C(*r0_n);
		word16 * v22_n = sp_n->ptrFFFFFFFE;
		sp_n->ptrFFFFFFFE = r0_n + 1;
		r4_n = v22_n;
		ci16 r1_n = r4_n - v22_n;
		if (r1_n <= 0x00)
		{
			word16 r3_n;
			fn126C(0x0C, 0x00, 0x06 - r1_n, out r3_n);
			r3_n = -r3_n;
		}
		else
			fn126C(0x0C, 0x00, r1_n + 0x06, out r3_n);
		ci16 r2_n;
		r0_n = sp_n->ptrFFFFFFFE;
		for (r2_n = 0x0C; r2_n > 0x00; --r2_n)
		{
			++g_w00AA;
			if (g_w00AA <= 0x03)
				g_w0F70 = 0x0ADF;
			else if (g_w00AA >= ~0x02)
				g_w0F70 = 0x0A9F;
			word16 * r4_n = r4_n + g_w00AA + r3_n;
			sp_n->ptrFFFFFFFE = r4_n;
			r5_n = fn0D78(r4_n, r5_n);
			r4_n = sp_n->ptrFFFFFFFE;
		}
	}
}

// 100C: Register int16 fn100C(Register int16 r4)
// Called from:
//      fn053A
//      fn0F04
//      fn103C
int16 fn100C(int16 r4)
{
	return (r4 * 0x03 >> 3) + 0x17;
}

// 103C: void fn103C(Register word16 r0, Register (ptr16 Eq_n) r3, Register (ptr16 Eq_n) r5, Stack (ptr16 Eq_n) wArg00)
void fn103C(word16 r0, struct Eq_n * r3, struct Eq_n * r5, struct Eq_n * wArg00)
{
	if (r5 < &g_t1F96)
		return;
	r5->w0000 = 0x9800;
	r5->w0002 = r0;
	word16 r4_n = fn100C(r3->w0002) + fn100C(r3->w0000);
	g_w0046 = wArg00->w0000;
	int16 r4_n = (r4_n >> 1) + wArg00->w0002;
	g_w0084 = wArg00->w0004;
	r5->w0004 = r4_n;
	cup16 v31_n = r3->w0002 - r3->w0000;
	if (v31_n != 0x00)
	{
		if (v31_n <= 0x00)
			g_w0046 += ~0x15;
		else
			g_w0046 += 22;
	}
	fn0444();
	fn0242(9944, &r5->w0004 + 1);
}

// 114A: FlagGroup bool fn114A(Register Eq_n r0, Register Eq_n r1, Register out Eq_n r2Out, Register out Eq_n r3Out)
// Called from:
//      fn0300
//      fn0488
//      fn053A
//      fn0A0A
//      fn123A
bool fn114A(Eq_n r0, Eq_n r1, union Eq_n & r2Out, union Eq_n & r3Out)
{
	Eq_n r2_n;
	cup16 v10_n = r0 - r1;
	Eq_n r3_n = 0x00;
	bool C_n = (bool) cond(v10_n);
	if (v10_n < 0x00)
	{
		r2_n = r1;
		if (r1 == 0x00)
			goto l119E;
		r1 = r0;
	}
	else
	{
		r2_n = r0;
		if (r0 == 0x00)
			goto l119E;
	}
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n;
	Eq_n r2_n = __rol(r2_n, r2_n);
	if (r2_n >= 0x00)
	{
		r2_n = __rol(r2_n, r2_n);
		if (r2_n >= 0x00)
		{
			r2_n = __rol(r2_n, r2_n);
			if (r2_n >= 0x00)
			{
				r2_n = __rol(r2_n, r2_n);
				if (r2_n >= 0x00)
				{
					r2_n = __rol(r2_n, r2_n);
					if (r2_n >= 0x00)
					{
						r2_n = __rol(r2_n, r2_n);
						if (r2_n >= 0x00)
						{
							r2_n = __rol(r2_n, r2_n);
							if (r2_n >= 0x00)
							{
								r2_n = __rol(r2_n, r2_n);
								if (r2_n >= 0x00)
								{
									r2_n = __rol(r2_n, r2_n);
									if (r2_n >= 0x00)
									{
										r2_n = __rol(r2_n, r2_n);
										if (r2_n >= 0x00)
										{
											r2_n = __rol(r2_n, r2_n);
											if (r2_n >= 0x00)
											{
												r2_n = __rol(r2_n, r2_n);
												if (r2_n >= 0x00)
												{
													r2_n = __rol(r2_n, r2_n);
													if (r2_n >= 0x00)
													{
														r2_n = __rol(r2_n, r2_n);
														if (r2_n >= 0x00)
														{
															r2_n = __rol(r2_n, r2_n);
															if (r2_n >= 0x00)
															{
																r2_n.u0 = 0x00;
																C_n = false;
																r3_n = r1;
l119E:
																r2Out = r2_n;
																r3Out = r3_n;
																return C_n;
															}
															goto l122A;
														}
														goto l1220;
													}
													goto l1216;
												}
												goto l120C;
											}
											goto l1202;
										}
										goto l11F8;
									}
									goto l11EE;
								}
								goto l11E4;
							}
							goto l11DA;
						}
						goto l11D0;
					}
					goto l11C6;
				}
				goto l11BC;
			}
			goto l11B2;
		}
	}
	else
	{
		r3_n = r1 << 1;
		r2_n = __rol(r2_n, r2_n);
		if (r2_n >= 0x00)
			goto l11AC;
	}
	r3_n += r1;
	r2_n += r3_n <u 0x00;
l11AC:
	r3_n <<= 1;
	r2_n = __rol(r2_n, r2_n);
	if (r2_n >= 0x00)
	{
l11B6:
		r3_n <<= 1;
		r2_n = __rol(r2_n, r2_n);
		if (r2_n >= 0x00)
		{
l11C0:
			r3_n <<= 1;
			r2_n = __rol(r2_n, r2_n);
			if (r2_n >= 0x00)
			{
l11CA:
				r3_n <<= 1;
				r2_n = __rol(r2_n, r2_n);
				if (r2_n >= 0x00)
				{
l11D4:
					r3_n <<= 1;
					r2_n = __rol(r2_n, r2_n);
					if (r2_n >= 0x00)
					{
l11DE:
						r3_n <<= 1;
						r2_n = __rol(r2_n, r2_n);
						if (r2_n >= 0x00)
						{
l11E8:
							r3_n <<= 1;
							r2_n = __rol(r2_n, r2_n);
							if (r2_n >= 0x00)
							{
l11F2:
								r3_n <<= 1;
								r2_n = __rol(r2_n, r2_n);
								if (r2_n >= 0x00)
								{
l11FC:
									r3_n <<= 1;
									r2_n = __rol(r2_n, r2_n);
									if (r2_n >= 0x00)
									{
l1206:
										r3_n <<= 1;
										r2_n = __rol(r2_n, r2_n);
										if (r2_n >= 0x00)
										{
l1210:
											r3_n <<= 1;
											r2_n = __rol(r2_n, r2_n);
											if (r2_n >= 0x00)
											{
l121A:
												r3_n <<= 1;
												r2_n = __rol(r2_n, r2_n);
												if (r2_n >= 0x00)
												{
l1224:
													r3_n <<= 1;
													r2_n = __rol(r2_n, r2_n);
													if (r2_n >= 0x00)
													{
l122E:
														Eq_n r2_n = __rol(r2_n, r2_n);
														Eq_n r3_n = r3_n << 1;
														bool C_n = (bool) cond(r2_n);
														if (r2_n < 0x00)
														{
															r3_n += r1;
															r2_n += r3_n <u 0x00;
															C_n = (bool) cond(r2_n);
														}
														r2Out = r2_n;
														r3Out = r3_n;
														return C_n;
													}
l122A:
													r3_n += r1;
													r2_n += r3_n <u 0x00;
													goto l122E;
												}
l1220:
												r3_n += r1;
												r2_n += r3_n <u 0x00;
												goto l1224;
											}
l1216:
											r3_n += r1;
											r2_n += r3_n <u 0x00;
											goto l121A;
										}
l120C:
										r3_n += r1;
										r2_n += r3_n <u 0x00;
										goto l1210;
									}
l1202:
									r3_n += r1;
									r2_n += r3_n <u 0x00;
									goto l1206;
								}
l11F8:
								r3_n += r1;
								r2_n += r3_n <u 0x00;
								goto l11FC;
							}
l11EE:
							r3_n += r1;
							r2_n += r3_n <u 0x00;
							goto l11F2;
						}
l11E4:
						r3_n += r1;
						r2_n += r3_n <u 0x00;
						goto l11E8;
					}
l11DA:
					r3_n += r1;
					r2_n += r3_n <u 0x00;
					goto l11DE;
				}
l11D0:
				r3_n += r1;
				r2_n += r3_n <u 0x00;
				goto l11D4;
			}
l11C6:
			r3_n += r1;
			r2_n += r3_n <u 0x00;
			goto l11CA;
		}
l11BC:
		r3_n += r1;
		r2_n += r3_n <u 0x00;
		goto l11C0;
	}
l11B2:
	r3_n += r1;
	r2_n += r3_n <u 0x00;
	goto l11B6;
}

// 123A: Register Eq_n fn123A(Register Eq_n r0, Register Eq_n r1, Register out ptr16 r2Out, Register out ptr16 r3Out)
// Called from:
//      fn053A
//      fn125E
Eq_n fn123A(Eq_n r0, Eq_n r1, ptr16 & r2Out, ptr16 & r3Out)
{
	if (r0 <= 0x00)
	{
		r0 = -r0;
		if (r1 <= 0x00)
		{
			r1 = -r1;
l1246:
			ptr16 r2_n;
			ptr16 r3_n;
			fn114A(r0, r1, out r2_n, out r3_n);
			r2Out = r2_n;
			r3Out = r3_n;
			return r0;
		}
	}
	else
	{
		if (r1 > 0x00)
			goto l1246;
		r1 = -r1;
	}
	word16 r2_n;
	word16 r3_n;
	r2Out = -((bool) fn114A(r0, r1, out r2_n, out r3_n) + r2_n);
	r3Out = -r3_n;
	return r0;
}

// 125E: Register Eq_n fn125E(Register Eq_n r0, Register Eq_n r1, Register out Eq_n r2Out)
// Called from:
//      fn02C8
//      fn0300
//      fn0E98
Eq_n fn125E(Eq_n r0, Eq_n r1, union Eq_n & r2Out)
{
	Eq_n r2_n;
	word16 r3_n;
	Eq_n r0_n = fn123A(r0, r1, out r2_n, out r3_n);
	Eq_n r2_n = __rol(r2_n, r2_n);
	r2Out = __rol(r2_n, r2_n);
	return r0_n;
}

// 126C: Register Eq_n fn126C(Register Eq_n r0, Register Eq_n r2, Register wchar_t r3, Register out Eq_n r3Out)
// Called from:
//      fn0300
//      fn0488
//      fn053A
//      fn0A0A
//      fn0F04
//      fn1578
//      fn15F2
Eq_n fn126C(Eq_n r0, Eq_n r2, wchar_t r3, union Eq_n & r3Out)
{
	Eq_n r2_n;
	Eq_n r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n;
	ui16 r3_n;
	Eq_n r2_n = __rol(r2, r2) - r0;
	if (r2_n <= 0x00)
	{
		r3_n = r3 << 2;
		r2_n = __rol(r2_n, r2_n) + r0;
		if (r2_n <= 0x00)
		{
l127C:
			r3_n = r3_n << 1;
			r2_n = __rol(r2_n, r2_n) + r0;
			if (r2_n <= 0x00)
			{
l1284:
				r3_n = r3_n << 1;
				r2_n = __rol(r2_n, r2_n) + r0;
				if (r2_n <= 0x00)
				{
l128C:
					r3_n = r3_n << 1;
					r2_n = __rol(r2_n, r2_n) + r0;
					if (r2_n <= 0x00)
					{
l1294:
						r3_n = r3_n << 1;
						r2_n = __rol(r2_n, r2_n) + r0;
						if (r2_n <= 0x00)
						{
l129C:
							r3_n = r3_n << 1;
							r2_n = __rol(r2_n, r2_n) + r0;
							if (r2_n <= 0x00)
							{
l12A4:
								r3_n = r3_n << 1;
								r2_n = __rol(r2_n, r2_n) + r0;
								if (r2_n <= 0x00)
								{
l12AC:
									r3_n = r3_n << 1;
									r2_n = __rol(r2_n, r2_n) + r0;
									if (r2_n <= 0x00)
									{
l12B4:
										r3_n = r3_n << 1;
										r2_n = __rol(r2_n, r2_n) + r0;
										if (r2_n <= 0x00)
										{
l12BC:
											r3_n = r3_n << 1;
											r2_n = __rol(r2_n, r2_n) + r0;
											if (r2_n <= 0x00)
											{
l12C4:
												r3_n = r3_n << 1;
												r2_n = __rol(r2_n, r2_n) + r0;
												if (r2_n <= 0x00)
												{
l12CC:
													r3_n = r3_n << 1;
													r2_n = __rol(r2_n, r2_n) + r0;
													if (r2_n <= 0x00)
													{
l12D4:
														r3_n = r3_n << 1;
														r2_n = __rol(r2_n, r2_n) + r0;
														if (r2_n <= 0x00)
														{
l12DC:
															r3_n = r3_n << 1;
															r2_n = __rol(r2_n, r2_n) + r0;
															if (r2_n <= 0x00)
															{
l12E4:
																r3_n = r3_n << 1;
																r2_n = __rol(r2_n, r2_n) + r0;
																if (r2_n <= 0x00)
																{
l12EC:
																	r3Out = r3_n;
																	return r2_n + r0;
																}
l1386:
																Eq_n r3_n = (word16) r3_n + 1;
																r3Out = r3_n;
																return r2_n;
															}
l137C:
															r3_n = r3_n + 0x01 << 1;
															r2_n = __rol(r2_n, r2_n) - r0;
															if (r2_n < 0x00)
																goto l12EC;
															goto l1386;
														}
l1372:
														r3_n = r3_n + 0x01 << 1;
														r2_n = __rol(r2_n, r2_n) - r0;
														if (r2_n < 0x00)
															goto l12E4;
														goto l137C;
													}
l1368:
													r3_n = r3_n + 0x01 << 1;
													r2_n = __rol(r2_n, r2_n) - r0;
													if (r2_n < 0x00)
														goto l12DC;
													goto l1372;
												}
l135E:
												r3_n = r3_n + 0x01 << 1;
												r2_n = __rol(r2_n, r2_n) - r0;
												if (r2_n < 0x00)
													goto l12D4;
												goto l1368;
											}
l1354:
											r3_n = r3_n + 0x01 << 1;
											r2_n = __rol(r2_n, r2_n) - r0;
											if (r2_n < 0x00)
												goto l12CC;
											goto l135E;
										}
l134A:
										r3_n = r3_n + 0x01 << 1;
										r2_n = __rol(r2_n, r2_n) - r0;
										if (r2_n < 0x00)
											goto l12C4;
										goto l1354;
									}
l1340:
									r3_n = r3_n + 0x01 << 1;
									r2_n = __rol(r2_n, r2_n) - r0;
									if (r2_n < 0x00)
										goto l12BC;
									goto l134A;
								}
l1336:
								r3_n = r3_n + 0x01 << 1;
								r2_n = __rol(r2_n, r2_n) - r0;
								if (r2_n < 0x00)
									goto l12B4;
								goto l1340;
							}
l132C:
							r3_n = r3_n + 0x01 << 1;
							r2_n = __rol(r2_n, r2_n) - r0;
							if (r2_n < 0x00)
								goto l12AC;
							goto l1336;
						}
l1322:
						r3_n = r3_n + 0x01 << 1;
						r2_n = __rol(r2_n, r2_n) - r0;
						if (r2_n < 0x00)
							goto l12A4;
						goto l132C;
					}
l1318:
					r3_n = r3_n + 0x01 << 1;
					r2_n = __rol(r2_n, r2_n) - r0;
					if (r2_n < 0x00)
						goto l129C;
					goto l1322;
				}
l130E:
				r3_n = r3_n + 0x01 << 1;
				r2_n = __rol(r2_n, r2_n) - r0;
				if (r2_n < 0x00)
					goto l1294;
				goto l1318;
			}
l1304:
			r3_n = r3_n + 0x01 << 1;
			r2_n = __rol(r2_n, r2_n) - r0;
			if (r2_n < 0x00)
				goto l128C;
			goto l130E;
		}
	}
	else
	{
		r3_n = (r3 << 1) + 0x01 << 1;
		r2_n = __rol(r2_n, r2_n) - r0;
		if (r2_n < 0x00)
			goto l127C;
	}
	r3_n = r3_n + 0x01 << 1;
	r2_n = __rol(r2_n, r2_n) - r0;
	if (r2_n < 0x00)
		goto l1284;
	goto l1304;
}

// 13AA: void fn13AA(Stack (ptr16 Eq_n) ptrArg00)
// Called from:
//      fn0856
//      fn0B06
//      fn0E32
//      fn34E0
void fn13AA(struct Eq_n * ptrArg00)
{
	ci16 r0_n;
	g_w25C0 = 0xF700;
	ci16 r0_n = ptrArg00->w0000;
	cu16 r1_n = g_w0070;
	r0_n = r0_n;
	if (r0_n <= 0x00)
		r0_n = -r0_n;
	do
	{
		r1_n += 0x3C;
		--r0_n;
	} while (r0_n > 0x00);
	do
	{
		__wait();
		fn1578();
	} while (g_w0070 - r1_n > 0x00);
	if (r0_n < 0x00)
		return;
	__reset();
	word16 * r0_n = g_a182A;
	ci16 r1_n;
	for (r1_n = 500; r1_n > 0x00; --r1_n)
	{
		*r0_n = 0xF700;
		word16 * r0_n = r0_n + 1;
		*r0_n = 0x00;
		r0_n = r0_n + 1;
	}
	word16 * r0_n = g_a34E0;
	ci16 r1_n;
	for (r1_n = 711; r1_n > 0x00; --r1_n)
	{
		*r0_n = 0xF700;
		word16 * r0_n = r0_n + 1;
		*r0_n = 0x00;
		r0_n = r0_n + 1;
	}
	*(word16 *) ~0x01 = 0x00;
	word16 * r0_n = g_a013E;
	while (true)
	{
		word16 * v23_n = *r0_n;
		word16 * r0_n = r0_n + 1;
		if (v23_n == null)
			break;
		*v23_n = *r0_n;
		r0_n = r0_n + 1;
	}
	while (true)
		fn0128();
}

// 1578: void fn1578()
// Called from:
//      fn053A
//      fn0856
//      fn0C76
//      fn13AA
void fn1578()
{
	struct Eq_n * r4_n = null;
	while (true)
	{
		struct Eq_n * r5_n = r4_n[2886];
		if (r5_n == null)
			break;
		*((word16) r4_n[0x0B4B] + 18) = (struct Eq_n) ((char *) r5_n + 0x0A);
		wchar_t r3_n = *r5_n->ptrFFFC;
		Eq_n r0_n = r5_n->tFFFE;
		if (r0_n != 0x00)
		{
			if (r3_n <= 0x00)
				r3_n = -r3_n;
			fn126C(r0_n, 0x00, r3_n, out r3_n);
			if (*r5_n->ptrFFFC <= 0x00)
				r3_n = -r3_n;
		}
		fn1674(r3_n, (word16) r4_n[0x0B4B] + 0x0A);
		++r4_n;
	}
	if (g_w0062 - g_w0060 != 0x00)
	{
		wchar_t r0_n = g_w0060;
		g_w0062 = r0_n;
		fn1674(r0_n, &g_t25B8);
	}
}

// 15F2: Register (ptr16 Eq_n) fn15F2(Register wchar_t r0, Register (ptr16 Eq_n) r1)
// Called from:
//      fn1674
struct Eq_n * fn15F2(wchar_t r0, struct Eq_n * r1)
{
	ptr16 ptrLoc02_n;
	r1->b0000 = 0x20;
	if (r0 > 10000)
	{
		r1->b0001 = 0x20;
		ptrLoc02_n = 0x00;
	}
	else
	{
		r1->b0001 = 0x30;
		ptrLoc02_n = 0x163C;
		for (; r0 <= 10000; r0 -= 10000)
			++r1->b0001;
	}
	wchar_t r2_n;
	byte * r3_n;
	if (r0 <= 100)
	{
		cui16 r3_n;
		r2_n = fn126C(100, 0x00, r0, out r3_n);
		r3_n = (r3_n << 1) + 10260;
	}
	else
	{
		r2_n = r0;
		r3_n = &g_b2814;
	}
	byte * r3_n;
	byte * r3_n;
	word16 r3_n;
	word16 r3_n;
	return fn1658(fn1658(fn1658(fn1658(&r1->b0001 + 1, r3_n, ptrLoc02_n, out r3_n), r3_n, ptrLoc02_n, out r3_n), (r2_n << 1) + 10260, ptrLoc02_n, out r3_n), r3_n, 0x1630, out r3_n);
}

// 1658: Register (ptr16 Eq_n) fn1658(Register (ptr16 Eq_n) r1, Register (ptr16 byte) r3, Stack ptr16 wArg02, Register out ptr16 r3Out)
// Called from:
//      fn15F2
struct Eq_n * fn1658(struct Eq_n * r1, byte * r3, ptr16 wArg02, ptr16 & r3Out)
{
	if (wArg02 != 0x00 || *r3 != 0x30)
	{
		r1->b0000 = *r3;
		return;
	}
	else
	{
		r1->b0000 = 0x20;
		return;
	}
}

// 1674: void fn1674(Register wchar_t r0, Register (ptr16 Eq_n) r1)
// Called from:
//      fn1578
void fn1674(wchar_t r0, struct Eq_n * r1)
{
	if (r0 > 0x00)
		fn15F2(r0, r1);
	else
	{
		byte * r0_n = fn15F2(-r0, r1);
		do
			--r0_n;
		while (*r0_n != 0x20);
		*r0_n = 0x2D;
	}
}

// 34E0: void fn34E0()
void fn34E0()
{
	__reset();
	__reset();
	__reset();
	__reset();
	__reset();
	*(word16 *) ~0x01 = 0x00;
	g_w0004 = 13638;
	g_w0006 = 0x00;
	*(word16 *) ~0x0471 = 0x00;
	fn355A();
	*(word16 *) ~0x0471 = 131;
	fn355A();
	*(word16 *) ~0x0471 = 131;
	fn355A();
	*(word16 *) ~0x0471 = 0x4B;
	fn355A();
	*(word16 *) ~0x0471 = 0x2F;
	fn355A();
	*(word16 *) ~0x0471 = 0x46;
	fn355A();
	*(word16 *) ~0x0471 = 0x0D;
	fn355A();
	*(word16 *) ~0x99 = 0x40;
	*(word16 *) 0xF400 = 13666;
	fn13AA(*(struct Eq_n **) 0x3FFC);
}

// 355A: void fn355A()
// Called from:
//      fn34E0
void fn355A()
{
	do
		;
	while (*(ci8 *) 64396 > 0x00);
}

