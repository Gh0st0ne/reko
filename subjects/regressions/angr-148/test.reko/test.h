// test.h
// Generated by decompiling test
// using Reko decompiler version 0.8.2.0.

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
	T_26 (in 0x000000000040053D : word64)
Eq_22: (fn void ())
	T_22 (in init : (ptr64 (fn void ())))
	T_28 (in 0x0000000000400550 : word64)
Eq_23: (fn void ())
	T_23 (in fini : (ptr64 (fn void ())))
	T_29 (in 0x00000000004005C0 : word64)
Eq_31: (fn void ())
	T_31 (in __hlt : ptr64)
	T_32 (in signature of __hlt : void)
Eq_51: (fn void (word64))
	T_51 (in deregister_tm_clones : ptr64)
	T_52 (in signature of deregister_tm_clones : void)
Eq_68: (fn void (word64))
	T_68 (in register_tm_clones : ptr64)
	T_69 (in signature of register_tm_clones : void)
	T_71 (in register_tm_clones : ptr64)
Eq_74: (fn int32 (Eq_76))
	T_74 (in putchar : ptr64)
	T_75 (in signature of putchar : void)
Eq_76: (union "Eq_76" (int32 u0) (uint64 u1))
	T_76 (in c : int32)
	T_77 (in 0x0000000000000078 : uint64)
Eq_79: (fn word32 ())
	T_79 (in f : ptr64)
	T_80 (in signature of f : void)
Eq_87: (fn void ())
	T_87 (in _init : ptr64)
	T_88 (in signature of _init : void)
Eq_94: (union "Eq_94" (int64 u0) (ptr64 u1))
	T_94 (in 0000000000600E18 : ptr64)
Eq_95: (union "Eq_95" (int64 u0) (ptr64 u1))
	T_95 (in 0000000000600E10 : ptr64)
Eq_97: (union "Eq_97" (int64 u0) (uint64 u1))
	T_97 (in rbx_30 : Eq_97)
	T_98 (in 0x0000000000000000 : uint64)
	T_108 (in rbx_30 + 0x0000000000000001 : word64)
	T_109 (in rbp_29 >> 0x0000000000000003 : word64)
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
T_4: (in 0x0000000000000000 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0x0000000000000000 : bool)
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
T_14: (in 8 : int64)
  Class: Eq_14
  DataType: int64
  OrigDataType: int64
T_15: (in fp + 8 : word64)
  Class: Eq_12
  DataType: ptr64
  OrigDataType: ptr64
T_16: (in __align((char *) fp + 8) : void)
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
T_26: (in 0x000000000040053D : word64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_27: (in fp + 8 : word64)
  Class: Eq_21
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_28: (in 0x0000000000400550 : word64)
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: (ptr64 (fn void ()))
T_29: (in 0x00000000004005C0 : word64)
  Class: Eq_23
  DataType: (ptr64 Eq_23)
  OrigDataType: (ptr64 (fn void ()))
T_30: (in __libc_start_main(&globals->t40053D, qwArg00, (char *) fp + 8, &globals->t400550, &globals->t4005C0, rdx, fp) : int32)
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
T_34: (in r8 : word64)
  Class: Eq_34
  DataType: word64
  OrigDataType: word64
T_35: (in false : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x0000000000000000 : uint64)
  Class: Eq_36
  DataType: uint64
  OrigDataType: uint64
T_37: (in 0x0000000000000000 : word64)
  Class: Eq_36
  DataType: uint64
  OrigDataType: word64
T_38: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in 0x0000000000000000 : uint64)
  Class: Eq_39
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_40: (in r8 : word64)
  Class: Eq_40
  DataType: word64
  OrigDataType: word64
T_41: (in true : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0x0000000000000000 : uint64)
  Class: Eq_42
  DataType: uint64
  OrigDataType: uint64
T_43: (in 0x0000000000000000 : word64)
  Class: Eq_42
  DataType: uint64
  OrigDataType: word64
T_44: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in 0x0000000000000000 : uint64)
  Class: Eq_45
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_46: (in r8 : word64)
  Class: Eq_34
  DataType: word64
  OrigDataType: word64
T_47: (in 0000000000601040 : ptr64)
  Class: Eq_47
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_48 t0000)))
T_48: (in Mem0[0x0000000000601040:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_50: (in globals->b601040 != 0x00 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in deregister_tm_clones : ptr64)
  Class: Eq_51
  DataType: (ptr64 Eq_51)
  OrigDataType: (ptr64 (fn T_53 (T_46)))
T_52: (in signature of deregister_tm_clones : void)
  Class: Eq_51
  DataType: (ptr64 Eq_51)
  OrigDataType: 
T_53: (in deregister_tm_clones(r8) : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in 0x01 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_55: (in 0000000000601040 : ptr64)
  Class: Eq_55
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_56 t0000)))
T_56: (in Mem20[0x0000000000601040:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_57: (in r8 : word64)
  Class: Eq_40
  DataType: word64
  OrigDataType: word64
T_58: (in 0000000000600E20 : ptr64)
  Class: Eq_58
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_59 t0000)))
T_59: (in Mem0[0x0000000000600E20:word64] : word64)
  Class: Eq_59
  DataType: word64
  OrigDataType: word64
T_60: (in 0x0000000000000000 : word64)
  Class: Eq_59
  DataType: word64
  OrigDataType: word64
T_61: (in globals->qw600E20 == 0x0000000000000000 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in 0x0000000000000000 : uint64)
  Class: Eq_62
  DataType: uint64
  OrigDataType: uint64
T_63: (in 0x0000000000000000 : word64)
  Class: Eq_62
  DataType: uint64
  OrigDataType: word64
T_64: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in r8_28 : word64)
  Class: Eq_40
  DataType: word64
  OrigDataType: word64
T_66: (in fn0000000000000000 : ptr64)
  Class: Eq_66
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_67: (in signature of fn0000000000000000 : void)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: 
T_68: (in register_tm_clones : ptr64)
  Class: Eq_68
  DataType: (ptr64 Eq_68)
  OrigDataType: (ptr64 (fn T_70 (T_65)))
T_69: (in signature of register_tm_clones : void)
  Class: Eq_68
  DataType: (ptr64 Eq_68)
  OrigDataType: 
T_70: (in register_tm_clones(r8_28) : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
T_71: (in register_tm_clones : ptr64)
  Class: Eq_68
  DataType: (ptr64 Eq_68)
  OrigDataType: (ptr64 (fn T_72 (T_57)))
T_72: (in register_tm_clones(r8) : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
T_73: (in eax : int32)
  Class: Eq_73
  DataType: int32
  OrigDataType: word32
T_74: (in putchar : ptr64)
  Class: Eq_74
  DataType: (ptr64 Eq_74)
  OrigDataType: (ptr64 (fn T_78 (T_77)))
T_75: (in signature of putchar : void)
  Class: Eq_74
  DataType: (ptr64 Eq_74)
  OrigDataType: 
T_76: (in c : int32)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: 
T_77: (in 0x0000000000000078 : uint64)
  Class: Eq_76
  DataType: int32
  OrigDataType: (union (int32 u1) (uint64 u0))
T_78: (in putchar(0x0000000000000078) : int32)
  Class: Eq_73
  DataType: int32
  OrigDataType: int32
T_79: (in f : ptr64)
  Class: Eq_79
  DataType: (ptr64 Eq_79)
  OrigDataType: (ptr64 (fn T_81 ()))
T_80: (in signature of f : void)
  Class: Eq_79
  DataType: (ptr64 Eq_79)
  OrigDataType: 
T_81: (in f() : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in rdx : word64)
  Class: Eq_82
  DataType: word64
  OrigDataType: word64
T_83: (in rsi : word64)
  Class: Eq_83
  DataType: word64
  OrigDataType: word64
T_84: (in edi : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in rdi : word64)
  Class: Eq_85
  DataType: word64
  OrigDataType: word64
T_86: (in SLICE(rdi, word32, 0) : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_87: (in _init : ptr64)
  Class: Eq_87
  DataType: (ptr64 Eq_87)
  OrigDataType: (ptr64 (fn T_89 ()))
T_88: (in signature of _init : void)
  Class: Eq_87
  DataType: (ptr64 Eq_87)
  OrigDataType: 
T_89: (in _init() : void)
  Class: Eq_89
  DataType: void
  OrigDataType: void
T_90: (in r15d_79 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in (uint64) edi : uint64)
  Class: Eq_91
  DataType: uint64
  OrigDataType: uint64
T_92: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_93: (in rbp_29 : int64)
  Class: Eq_93
  DataType: int64
  OrigDataType: int64
T_94: (in 0000000000600E18 : ptr64)
  Class: Eq_94
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_95: (in 0000000000600E10 : ptr64)
  Class: Eq_95
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_96: (in 0x0000000000600E18 - 0x0000000000600E10 : word64)
  Class: Eq_93
  DataType: int64
  OrigDataType: int64
T_97: (in rbx_30 : Eq_97)
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: word64
T_98: (in 0x0000000000000000 : uint64)
  Class: Eq_97
  DataType: uint64
  OrigDataType: uint64
T_99: (in 0x0000000000000003 : word64)
  Class: Eq_99
  DataType: word64
  OrigDataType: word64
T_100: (in rbp_29 >> 0x0000000000000003 : word64)
  Class: Eq_100
  DataType: int64
  OrigDataType: int64
T_101: (in 0x0000000000000000 : word64)
  Class: Eq_100
  DataType: int64
  OrigDataType: word64
T_102: (in rbp_29 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in 0000000000600E10 : ptr64)
  Class: Eq_103
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_111) a0000)))
T_104: (in 0x0000000000000008 : word64)
  Class: Eq_104
  DataType: ui64
  OrigDataType: ui64
T_105: (in rbx_30 * 0x0000000000000008 : word64)
  Class: Eq_105
  DataType: ui64
  OrigDataType: ui64
T_106: (in 0x0000000000600E10[rbx_30 * 0x0000000000000008] : word64)
  Class: Eq_106
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_107: (in 0x0000000000000001 : word64)
  Class: Eq_107
  DataType: word64
  OrigDataType: word64
T_108: (in rbx_30 + 0x0000000000000001 : word64)
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: uint64
T_109: (in rbp_29 >> 0x0000000000000003 : word64)
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: int64
T_110: (in rbx_30 != rbp_29 >> 0x0000000000000003 : bool)
  Class: Eq_110
  DataType: bool
  OrigDataType: bool
T_111:
  Class: Eq_111
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_106 t0000))
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

typedef void (Eq_51)(word64);

typedef void (Eq_68)(word64);

typedef int32 (Eq_74)(Eq_76);

typedef union Eq_76 {
	int32 u0;
	uint64 u1;
} Eq_76;

typedef word32 (Eq_79)();

typedef void (Eq_87)();

typedef union Eq_94 {
	int64 u0;
	ptr64 u1;
} Eq_94;

typedef union Eq_95 {
	int64 u0;
	ptr64 u1;
} Eq_95;

typedef union Eq_97 {
	int64 u0;
	uint64 u1;
} Eq_97;

