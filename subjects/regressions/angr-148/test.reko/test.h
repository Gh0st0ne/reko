// test.h
// Generated by decompiling test
// using Reko decompiler version 0.9.3.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (40053D Eq_19 t40053D) (400550 Eq_22 t400550) (4005C0 Eq_23 t4005C0) (600E10 (arr (ptr64 code)) a600E10) (600E20 word64 qw600E20) (601040 byte b601040))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_8: (fn void ())
	T_8 (in rdx : (ptr64 Eq_8))
	T_24 (in rtld_fini : (ptr64 (fn void ())))
Eq_9: (union "Eq_9" (int32 u0) (word64 u1))
	T_9 (in qwArg00 : Eq_9)
	T_20 (in argc : int32)
Eq_10: (fn void (ptr64))
	T_10 (in __align : ptr64)
	T_11 (in signature of __align : void)
Eq_17: (fn int32 ((ptr64 Eq_19), Eq_9, (ptr64 (ptr64 char)), (ptr64 Eq_22), (ptr64 Eq_23), (ptr64 Eq_8), (ptr64 void)))
	T_17 (in __libc_start_main : ptr64)
	T_18 (in signature of __libc_start_main : void)
Eq_19: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_19 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_26 (in 0x40053D<64> : word64)
Eq_22: (fn void ())
	T_22 (in init : (ptr64 (fn void ())))
	T_28 (in 0x400550<64> : word64)
Eq_23: (fn void ())
	T_23 (in fini : (ptr64 (fn void ())))
	T_29 (in 0x4005C0<64> : word64)
Eq_31: (fn void ())
	T_31 (in __hlt : ptr64)
	T_32 (in signature of __hlt : void)
Eq_44: (fn void ())
	T_44 (in deregister_tm_clones : ptr64)
	T_45 (in signature of deregister_tm_clones : void)
Eq_57: (fn void ())
	T_57 (in register_tm_clones : ptr64)
	T_58 (in signature of register_tm_clones : void)
	T_60 (in register_tm_clones : ptr64)
Eq_63: (fn int32 (Eq_65))
	T_63 (in putchar : ptr64)
	T_64 (in signature of putchar : void)
Eq_65: (union "Eq_65" (int32 u0) (uint64 u1))
	T_65 (in c : int32)
	T_66 (in 0x78<u64> : uint64)
Eq_68: (fn word32 ())
	T_68 (in f : ptr64)
	T_69 (in signature of f : void)
Eq_76: (fn void ())
	T_76 (in _init : ptr64)
	T_77 (in signature of _init : void)
Eq_83: (union "Eq_83" (int64 u0) (ptr64 u1))
	T_83 (in 0000000000600E18 : ptr64)
Eq_84: (union "Eq_84" (int64 u0) (ptr64 u1))
	T_84 (in 0000000000600E10 : ptr64)
Eq_86: (union "Eq_86" (int64 u0) (uint64 u1))
	T_86 (in rbx_33 : Eq_86)
	T_87 (in 0<u64> : uint64)
	T_97 (in rbx_33 + 1<64> : word64)
	T_98 (in rbp_31 >> 3<64> : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in __gmon_start__ : ptr64)
  Class: Eq_2
  DataType: word64
  OrigDataType: 
T_3: (in signature of __gmon_start__ : void)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_4: (in 0<64> : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0<64> : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __gmon_start__ : ptr64)
  Class: Eq_6
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_7: (in signature of __gmon_start__ : void)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: 
T_8: (in rdx : (ptr64 Eq_8))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: (ptr64 (fn void ()))
T_9: (in qwArg00 : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (int32 u1) (word64 u0))
T_10: (in __align : ptr64)
  Class: Eq_10
  DataType: (ptr64 Eq_10)
  OrigDataType: (ptr64 (fn T_16 (T_15)))
T_11: (in signature of __align : void)
  Class: Eq_10
  DataType: (ptr64 Eq_10)
  OrigDataType: 
T_12: (in  : word64)
  Class: Eq_12
  DataType: ptr64
  OrigDataType: 
T_13: (in fp : ptr64)
  Class: Eq_13
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_14: (in 8<i64> : int64)
  Class: Eq_14
  DataType: int64
  OrigDataType: int64
T_15: (in fp + 8<i64> : word64)
  Class: Eq_12
  DataType: ptr64
  OrigDataType: ptr64
T_16: (in __align((char *) fp + 8<i32>) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in __libc_start_main : ptr64)
  Class: Eq_17
  DataType: (ptr64 Eq_17)
  OrigDataType: (ptr64 (fn T_30 (T_26, T_9, T_27, T_28, T_29, T_8, T_13)))
T_18: (in signature of __libc_start_main : void)
  Class: Eq_17
  DataType: (ptr64 Eq_17)
  OrigDataType: 
T_19: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_20: (in argc : int32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: 
T_21: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_21
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_22: (in init : (ptr64 (fn void ())))
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: 
T_23: (in fini : (ptr64 (fn void ())))
  Class: Eq_23
  DataType: (ptr64 Eq_23)
  OrigDataType: 
T_24: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: 
T_25: (in stack_end : (ptr64 void))
  Class: Eq_13
  DataType: (ptr64 void)
  OrigDataType: 
T_26: (in 0x40053D<64> : word64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_27: (in fp + 8<i64> : word64)
  Class: Eq_21
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_28: (in 0x400550<64> : word64)
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: (ptr64 (fn void ()))
T_29: (in 0x4005C0<64> : word64)
  Class: Eq_23
  DataType: (ptr64 Eq_23)
  OrigDataType: (ptr64 (fn void ()))
T_30: (in __libc_start_main(&g_t40053D, qwArg00, (char *) fp + 8<i32>, &g_t400550, &g_t4005C0, rdx, fp) : int32)
  Class: Eq_30
  DataType: int32
  OrigDataType: int32
T_31: (in __hlt : ptr64)
  Class: Eq_31
  DataType: (ptr64 Eq_31)
  OrigDataType: (ptr64 (fn T_33 ()))
T_32: (in signature of __hlt : void)
  Class: Eq_31
  DataType: (ptr64 Eq_31)
  OrigDataType: 
T_33: (in __hlt() : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in false : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in true : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0<u64> : uint64)
  Class: Eq_36
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_37: (in false : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in true : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in 0<u64> : uint64)
  Class: Eq_39
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_40: (in 0000000000601040 : ptr64)
  Class: Eq_40
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_41 t0000)))
T_41: (in Mem0[0x0000000000601040<p64>:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0<8> : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_43: (in g_b601040 != 0<8> : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in deregister_tm_clones : ptr64)
  Class: Eq_44
  DataType: (ptr64 Eq_44)
  OrigDataType: (ptr64 (fn T_46 ()))
T_45: (in signature of deregister_tm_clones : void)
  Class: Eq_44
  DataType: (ptr64 Eq_44)
  OrigDataType: 
T_46: (in deregister_tm_clones() : void)
  Class: Eq_46
  DataType: void
  OrigDataType: void
T_47: (in 1<8> : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_48: (in 0000000000601040 : ptr64)
  Class: Eq_48
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_49 t0000)))
T_49: (in Mem19[0x0000000000601040<p64>:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_50: (in 0000000000600E20 : ptr64)
  Class: Eq_50
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_51 t0000)))
T_51: (in Mem0[0x0000000000600E20<p64>:word64] : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_52: (in 0<64> : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_53: (in g_qw600E20 == 0<64> : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in true : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in fn0000000000000000 : ptr64)
  Class: Eq_55
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_56: (in signature of fn0000000000000000 : void)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: 
T_57: (in register_tm_clones : ptr64)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: (ptr64 (fn T_59 ()))
T_58: (in signature of register_tm_clones : void)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: 
T_59: (in register_tm_clones() : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in register_tm_clones : ptr64)
  Class: Eq_57
  DataType: (ptr64 Eq_57)
  OrigDataType: (ptr64 (fn T_61 ()))
T_61: (in register_tm_clones() : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_62: (in eax : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: word32
T_63: (in putchar : ptr64)
  Class: Eq_63
  DataType: (ptr64 Eq_63)
  OrigDataType: (ptr64 (fn T_67 (T_66)))
T_64: (in signature of putchar : void)
  Class: Eq_63
  DataType: (ptr64 Eq_63)
  OrigDataType: 
T_65: (in c : int32)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: 
T_66: (in 0x78<u64> : uint64)
  Class: Eq_65
  DataType: int32
  OrigDataType: (union (int32 u1) (uint64 u0))
T_67: (in putchar(0x78<u64>) : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: int32
T_68: (in f : ptr64)
  Class: Eq_68
  DataType: (ptr64 Eq_68)
  OrigDataType: (ptr64 (fn T_70 ()))
T_69: (in signature of f : void)
  Class: Eq_68
  DataType: (ptr64 Eq_68)
  OrigDataType: 
T_70: (in f() : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in rdx : word64)
  Class: Eq_71
  DataType: word64
  OrigDataType: word64
T_72: (in rsi : word64)
  Class: Eq_72
  DataType: word64
  OrigDataType: word64
T_73: (in edi : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in rdi : word64)
  Class: Eq_74
  DataType: word64
  OrigDataType: word64
T_75: (in SLICE(rdi, word32, 0) : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_76: (in _init : ptr64)
  Class: Eq_76
  DataType: (ptr64 Eq_76)
  OrigDataType: (ptr64 (fn T_78 ()))
T_77: (in signature of _init : void)
  Class: Eq_76
  DataType: (ptr64 Eq_76)
  OrigDataType: 
T_78: (in _init() : void)
  Class: Eq_78
  DataType: void
  OrigDataType: void
T_79: (in r15d_84 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in CONVERT(edi, word32, uint64) : uint64)
  Class: Eq_80
  DataType: uint64
  OrigDataType: uint64
T_81: (in SLICE(CONVERT(edi, word32, uint64), word32, 0) : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_82: (in rbp_31 : int64)
  Class: Eq_82
  DataType: int64
  OrigDataType: int64
T_83: (in 0000000000600E18 : ptr64)
  Class: Eq_83
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_84: (in 0000000000600E10 : ptr64)
  Class: Eq_84
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_85: (in 0x600E18<u64> - 0x600E10<u64> : word64)
  Class: Eq_82
  DataType: int64
  OrigDataType: int64
T_86: (in rbx_33 : Eq_86)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: word64
T_87: (in 0<u64> : uint64)
  Class: Eq_86
  DataType: uint64
  OrigDataType: uint64
T_88: (in 3<64> : word64)
  Class: Eq_88
  DataType: word64
  OrigDataType: word64
T_89: (in rbp_31 >> 3<64> : word64)
  Class: Eq_89
  DataType: int64
  OrigDataType: int64
T_90: (in 0<64> : word64)
  Class: Eq_89
  DataType: int64
  OrigDataType: word64
T_91: (in rbp_31 >> 3<64> == 0<64> : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in 0000000000600E10 : ptr64)
  Class: Eq_92
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_100) a0000)))
T_93: (in 8<64> : word64)
  Class: Eq_93
  DataType: ui64
  OrigDataType: ui64
T_94: (in rbx_33 * 8<64> : word64)
  Class: Eq_94
  DataType: ui64
  OrigDataType: ui64
T_95: (in 0x0000000000600E10<p64>[rbx_33 * 8<64>] : word64)
  Class: Eq_95
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_96: (in 1<64> : word64)
  Class: Eq_96
  DataType: word64
  OrigDataType: word64
T_97: (in rbx_33 + 1<64> : word64)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: uint64
T_98: (in rbp_31 >> 3<64> : word64)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: int64
T_99: (in rbx_33 != rbp_31 >> 3<64> : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100:
  Class: Eq_100
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_95 t0000))
*/
typedef struct Globals {
	Eq_19 t40053D;	// 40053D
	Eq_22 t400550;	// 400550
	Eq_23 t4005C0;	// 4005C0
	<anonymous> * a600E10[];	// 600E10
	word64 qw600E20;	// 600E20
	byte b601040;	// 601040
} Eq_1;

typedef void (Eq_8)();

typedef union Eq_9 {
	int32 u0;
	word64 u1;
} Eq_9;

typedef void (Eq_10)(ptr64);

typedef int32 (Eq_17)( *, Eq_9, char * *,  *,  *,  *, void);

typedef int32 (Eq_19)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_22)();

typedef void (Eq_23)();

typedef void (Eq_31)();

typedef void (Eq_44)();

typedef void (Eq_57)();

typedef int32 (Eq_63)(Eq_65);

typedef union Eq_65 {
	int32 u0;
	uint64 u1;
} Eq_65;

typedef word32 (Eq_68)();

typedef void (Eq_76)();

typedef union Eq_83 {
	int64 u0;
	ptr64 u1;
} Eq_83;

typedef union Eq_84 {
	int64 u0;
	ptr64 u1;
} Eq_84;

typedef union Eq_86 {
	int64 u0;
	uint64 u1;
} Eq_86;

