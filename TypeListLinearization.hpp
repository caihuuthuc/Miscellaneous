#define TYPELIST_1(T1)                   TypeList<T1, NullType>
#define TYPELIST_2(T1, T2) TypeList<T1, TYPELIST_1(T2)>
#define TYPELIST_3(T1, T2, T3) TypeList<T1, TYPELIST_2(T2, T3)>
#define TYPELIST_4(T1, T2, T3, T4) TypeList<T1, TYPELIST_3(T2, T3, T4)>
#define TYPELIST_5(T1, T2, T3, T4, T5) TypeList<T1, TYPELIST_4(T2, T3, T4, T5)>
#define TYPELIST_6(T1, T2, T3, T4, T5, T6)                                     \
  TypeList<T1, TYPELIST_5(T2, T3, T4, T5, T6)>
#define TYPELIST_7(T1, T2, T3, T4, T5, T6, T7)                                 \
  TypeList<T1, TYPELIST_6(T2, T3, T4, T5, T6, T7)>
#define TYPELIST_8(T1, T2, T3, T4, T5, T6, T7, T8)                             \
  TypeList<T1, TYPELIST_7(T2, T3, T4, T5, T6, T7, T8)>
#define TYPELIST_9(T1, T2, T3, T4, T5, T6, T7, T8, T9)                         \
  TypeList<T1, TYPELIST_8(T2, T3, T4, T5, T6, T7, T8, T9)>
#define TYPELIST_10(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10)                   \
  TypeList<T1, TYPELIST_9(T2, T3, T4, T5, T6, T7, T8, T9, T10)>
#define TYPELIST_11(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)              \
  TypeList<T1, TYPELIST_10(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11)>
#define TYPELIST_12(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)         \
  TypeList<T1, TYPELIST_11(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12)>
#define TYPELIST_13(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)    \
  TypeList<T1, TYPELIST_12(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13)>
#define TYPELIST_14(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14)                                                       \
  TypeList<T1, TYPELIST_13(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14)>
#define TYPELIST_15(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15)                                                  \
  TypeList<T1, TYPELIST_14(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15)>
#define TYPELIST_16(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16)                                             \
  TypeList<T1, TYPELIST_15(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16)>
#define TYPELIST_17(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17)                                        \
  TypeList<T1, TYPELIST_16(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17)>
#define TYPELIST_18(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18)                                   \
  TypeList<T1, TYPELIST_17(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18)>
#define TYPELIST_19(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19)                              \
  TypeList<T1, TYPELIST_18(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19)>
#define TYPELIST_20(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20)                         \
  TypeList<T1, TYPELIST_19(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20)>
#define TYPELIST_21(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21)                    \
  TypeList<T1, TYPELIST_20(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21)>
#define TYPELIST_22(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22)               \
  TypeList<T1, TYPELIST_21(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22)>
#define TYPELIST_23(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23)          \
  TypeList<T1, TYPELIST_22(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23)>
#define TYPELIST_24(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24)     \
  TypeList<T1,                                                                 \
           TYPELIST_23(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,     \
                       T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24)>
#define TYPELIST_25(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25)                                                       \
  TypeList<T1, TYPELIST_24(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25)>
#define TYPELIST_26(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26)                                                  \
  TypeList<T1, TYPELIST_25(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26)>
#define TYPELIST_27(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27)                                             \
  TypeList<T1, TYPELIST_26(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27)>
#define TYPELIST_28(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28)                                        \
  TypeList<T1, TYPELIST_27(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28)>
#define TYPELIST_29(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29)                                   \
  TypeList<T1, TYPELIST_28(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29)>
#define TYPELIST_30(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30)                              \
  TypeList<T1, TYPELIST_29(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30)>
#define TYPELIST_31(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31)                         \
  TypeList<T1, TYPELIST_30(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31)>
#define TYPELIST_32(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32)                    \
  TypeList<T1, TYPELIST_31(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32)>
#define TYPELIST_33(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33)               \
  TypeList<T1, TYPELIST_32(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33)>
#define TYPELIST_34(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34)          \
  TypeList<T1,                                                                 \
           TYPELIST_33(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,     \
                       T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,  \
                       T25, T26, T27, T28, T29, T30, T31, T32, T33, T34)>
#define TYPELIST_35(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35)     \
  TypeList<T1,                                                                 \
           TYPELIST_34(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,     \
                       T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,  \
                       T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35)>
#define TYPELIST_36(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36)                                                       \
  TypeList<T1, TYPELIST_35(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36)>
#define TYPELIST_37(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37)                                                  \
  TypeList<T1, TYPELIST_36(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37)>
#define TYPELIST_38(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38)                                             \
  TypeList<T1, TYPELIST_37(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38)>
#define TYPELIST_39(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39)                                        \
  TypeList<T1, TYPELIST_38(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39)>
#define TYPELIST_40(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40)                                   \
  TypeList<T1, TYPELIST_39(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40)>
#define TYPELIST_41(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41)                              \
  TypeList<T1, TYPELIST_40(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41)>
#define TYPELIST_42(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42)                         \
  TypeList<T1, TYPELIST_41(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42)>
#define TYPELIST_43(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43)                    \
  TypeList<T1, TYPELIST_42(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43)>
#define TYPELIST_44(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44)               \
  TypeList<T1,                                                                 \
           TYPELIST_43(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,     \
                       T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,  \
                       T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,  \
                       T36, T37, T38, T39, T40, T41, T42, T43, T44)>
#define TYPELIST_45(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45)          \
  TypeList<T1,                                                                 \
           TYPELIST_44(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,     \
                       T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,  \
                       T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,  \
                       T36, T37, T38, T39, T40, T41, T42, T43, T44, T45)>
#define TYPELIST_46(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46)     \
  TypeList<T1,                                                                 \
           TYPELIST_45(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,     \
                       T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,  \
                       T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,  \
                       T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46)>
#define TYPELIST_47(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47)                                                       \
  TypeList<T1, TYPELIST_46(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47)>
#define TYPELIST_48(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48)                                                  \
  TypeList<T1, TYPELIST_47(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48)>
#define TYPELIST_49(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49)                                             \
  TypeList<T1, TYPELIST_48(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49)>
#define TYPELIST_50(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_49(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_51(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_50(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_52(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_51(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_53(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_52(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_54(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_53(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_55(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_54(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_56(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_55(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_57(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_56(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_58(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_57(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_59(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_58(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_60(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_59(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_61(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_60(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_62(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_61(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_63(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_62(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_64(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_63(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_65(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_64(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_66(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_65(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_67(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_66(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_68(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_67(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_69(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_68(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_70(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_69(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_71(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_70(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_72(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_71(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_73(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_72(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_74(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_73(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_75(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_74(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_76(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_75(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_77(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_76(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_78(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_77(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_79(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_78(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_80(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_79(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_81(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_80(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_82(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_81(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_83(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_82(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_84(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_83(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_85(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_84(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_86(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_85(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_87(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_86(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_88(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_87(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_89(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_88(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_90(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_89(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_91(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_90(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_92(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_91(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_93(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_92(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_94(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_93(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_95(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_94(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_96(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_95(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_97(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_96(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_98(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_97(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_99(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,    \
                    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,     \
                    T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,     \
                    T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,     \
                    T47, T48, T49, T50)                                        \
  TypeList<T1, TYPELIST_98(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
#define TYPELIST_100(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,   \
                     T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24,    \
                     T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35,    \
                     T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46,    \
                     T47, T48, T49, T50)                                       \
  TypeList<T1, TYPELIST_99(T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, \
                           T14, T15, T16, T17, T18, T19, T20, T21, T22, T23,   \
                           T24, T25, T26, T27, T28, T29, T30, T31, T32, T33,   \
                           T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,   \
                           T44, T45, T46, T47, T48, T49, T50)>
