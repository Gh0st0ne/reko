// retpoline_stripped.h
// Generated by decompiling retpoline_stripped.elf
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (400660 Eq_18 t400660) (400710 Eq_21 t400710) (400780 Eq_22 t400780))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_7: (fn void ())
	T_7 (in rdx : (ptr64 Eq_7))
	T_23 (in rtld_fini : (ptr64 (fn void ())))
Eq_8: (union "Eq_8" (int32 u0) (word64 u1))
	T_8 (in qwArg00 : Eq_8)
	T_19 (in argc : int32)
Eq_9: (fn void (ptr64))
	T_9 (in __align : ptr64)
	T_10 (in signature of __align : void)
Eq_16: (fn int32 ((ptr64 Eq_18), Eq_8, (ptr64 (ptr64 char)), (ptr64 Eq_21), (ptr64 Eq_22), (ptr64 Eq_7), (ptr64 void)))
	T_16 (in __libc_start_main : ptr64)
	T_17 (in signature of __libc_start_main : void)
Eq_18: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_18 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_25 (in 0x400660_64 : word64)
Eq_21: (fn void ())
	T_21 (in init : (ptr64 (fn void ())))
	T_27 (in 0x400710_64 : word64)
Eq_22: (fn void ())
	T_22 (in fini : (ptr64 (fn void ())))
	T_28 (in 0x400780_64 : word64)
Eq_30: (fn void ())
	T_30 (in __hlt : ptr64)
	T_31 (in signature of __hlt : void)
Eq_42: (fn (ptr64 void) (Eq_44, Eq_44))
	T_42 (in calloc : ptr64)
	T_43 (in signature of calloc : void)
Eq_44: (union "Eq_44" (int64 u0) (size_t u1))
	T_44 (in num : size_t)
	T_45 (in size : size_t)
	T_46 (in (int64) edi : int64)
	T_47 (in (int64) esi : int64)
Eq_49: (fn void ())
	T_49 (in fn0000000000400700 : ptr64)
	T_50 (in signature of fn0000000000400700 : void)
Eq_52: (fn void ())
	T_52 (in __pause : ptr64)
	T_53 (in signature of __pause : void)
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
T_4: (in 0_64 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0_64 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __gmon_start__ : ptr64)
  Class: Eq_6
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_7: (in rdx : (ptr64 Eq_7))
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: (ptr64 (fn void ()))
T_8: (in qwArg00 : Eq_8)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: (union (int32 u1) (word64 u0))
T_9: (in __align : ptr64)
  Class: Eq_9
  DataType: (ptr64 Eq_9)
  OrigDataType: (ptr64 (fn T_15 (T_14)))
T_10: (in signature of __align : void)
  Class: Eq_9
  DataType: (ptr64 Eq_9)
  OrigDataType: 
T_11: (in  : word64)
  Class: Eq_11
  DataType: ptr64
  OrigDataType: 
T_12: (in fp : ptr64)
  Class: Eq_12
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_13: (in 8_i64 : int64)
  Class: Eq_13
  DataType: int64
  OrigDataType: int64
T_14: (in fp + 8_i64 : word64)
  Class: Eq_11
  DataType: ptr64
  OrigDataType: ptr64
T_15: (in __align((char *) fp + 8_i32) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in __libc_start_main : ptr64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn T_29 (T_25, T_8, T_26, T_27, T_28, T_7, T_12)))
T_17: (in signature of __libc_start_main : void)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_18: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: 
T_19: (in argc : int32)
  Class: Eq_8
  DataType: Eq_8
  OrigDataType: 
T_20: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_20
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_21: (in init : (ptr64 (fn void ())))
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: 
T_22: (in fini : (ptr64 (fn void ())))
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: 
T_23: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: 
T_24: (in stack_end : (ptr64 void))
  Class: Eq_12
  DataType: (ptr64 void)
  OrigDataType: 
T_25: (in 0x400660_64 : word64)
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_26: (in fp + 8_i64 : word64)
  Class: Eq_20
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_27: (in 0x400710_64 : word64)
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: (ptr64 (fn void ()))
T_28: (in 0x400780_64 : word64)
  Class: Eq_22
  DataType: (ptr64 Eq_22)
  OrigDataType: (ptr64 (fn void ()))
T_29: (in __libc_start_main(&globals->t400660, qwArg00, (char *) fp + 8_i32, &globals->t400710, &globals->t400780, rdx, fp) : int32)
  Class: Eq_29
  DataType: int32
  OrigDataType: int32
T_30: (in __hlt : ptr64)
  Class: Eq_30
  DataType: (ptr64 Eq_30)
  OrigDataType: (ptr64 (fn T_32 ()))
T_31: (in signature of __hlt : void)
  Class: Eq_30
  DataType: (ptr64 Eq_30)
  OrigDataType: 
T_32: (in __hlt() : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in r8 : word64)
  Class: Eq_33
  DataType: word64
  OrigDataType: word64
T_34: (in 0x601040_64 : word64)
  Class: Eq_33
  DataType: word64
  OrigDataType: word64
T_35: (in r8 == 0x601040_64 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0_u64 : uint64)
  Class: Eq_36
  DataType: uint64
  OrigDataType: uint64
T_37: (in 0_64 : word64)
  Class: Eq_36
  DataType: uint64
  OrigDataType: word64
T_38: (in 0_u64 == 0_64 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in 0_u64 : uint64)
  Class: Eq_39
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_40: (in esi : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in edi : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in calloc : ptr64)
  Class: Eq_42
  DataType: (ptr64 Eq_42)
  OrigDataType: (ptr64 (fn T_48 (T_46, T_47)))
T_43: (in signature of calloc : void)
  Class: Eq_42
  DataType: (ptr64 Eq_42)
  OrigDataType: 
T_44: (in num : size_t)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: 
T_45: (in size : size_t)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: 
T_46: (in (int64) edi : int64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (int64 u0) (size_t u1))
T_47: (in (int64) esi : int64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (int64 u0) (size_t u1))
T_48: (in calloc((int64) edi, (int64) esi) : (ptr64 void))
  Class: Eq_48
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_49: (in fn0000000000400700 : ptr64)
  Class: Eq_49
  DataType: (ptr64 Eq_49)
  OrigDataType: (ptr64 (fn T_51 ()))
T_50: (in signature of fn0000000000400700 : void)
  Class: Eq_49
  DataType: (ptr64 Eq_49)
  OrigDataType: 
T_51: (in fn0000000000400700() : void)
  Class: Eq_51
  DataType: void
  OrigDataType: void
T_52: (in __pause : ptr64)
  Class: Eq_52
  DataType: (ptr64 Eq_52)
  OrigDataType: (ptr64 (fn T_54 ()))
T_53: (in signature of __pause : void)
  Class: Eq_52
  DataType: (ptr64 Eq_52)
  OrigDataType: 
T_54: (in __pause() : void)
  Class: Eq_54
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	Eq_18 t400660;	// 400660
	Eq_21 t400710;	// 400710
	Eq_22 t400780;	// 400780
} Eq_1;

typedef void (Eq_7)();

typedef union Eq_8 {
	int32 u0;
	word64 u1;
} Eq_8;

typedef void (Eq_9)(ptr64);

typedef int32 (Eq_16)( *, Eq_8, char * *,  *,  *,  *, void);

typedef int32 (Eq_18)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_21)();

typedef void (Eq_22)();

typedef void (Eq_30)();

typedef void (Eq_42)(Eq_44, Eq_44);

typedef union Eq_44 {
	int64 u0;
	size_t u1;
} Eq_44;

typedef void (Eq_49)();

typedef void (Eq_52)();

