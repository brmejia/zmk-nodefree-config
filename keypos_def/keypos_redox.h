/*                                      Redox KEY MATRIX / LAYOUT MAPPING

          ╭────────────────────────────╮           ╭────────────────────────────╮
          │  0   1   2   3   4   5     │           │      8   9  10  11  12  13 │
          │ 14  15  16  17  18  19   6 │           │  7  22  23  24  25  26  27 │
          │ 28  29  30  31  32  33  20 │           │ 21  36  37  38  39  40  41 │
          │ 42  43  44  45  46  47 ╭────────╮ ╭────────╮ 50  51  52  53  54  55 │
          │ 56  57  58  59    ╭────╯ 34  48 │ │ 49  35 ╰────╮    66  67  68  69 │
          ╰───────────────────│  60  61  62 │ │ 63  64  65  │───────────────────╯
                              ╰─────────────╯ ╰─────────────╯

  ╭───────────────────────────────────╮             ╭───────────────────────────────────╮
  │ LN6  LN5  LN4  LN3  LN2  LN1      │             │      RN1  RN2  RN3  RN4  RN5  RN6 │
  │ LT6  LT5  LT4  LT3  LT2  LT1  LT0 │             │ RT0  RT1  RT2  RT3  RT4  RT5  RT6 │
  │ LM6  LM5  LM4  LM3  LM2  LM1  LM0 │             │ RM0  RM1  RM2  RM3  RM4  RM5  RM6 │
  │ LB6  LB5  LB4  LB3  LB2  LB1 ╭──────────╮ ╭──────────╮ RB1  RB2  RB3  RB4  RB5  RB6 │
  │ LF6  LF5  LF4  LF3      ╭────╯ LH4  LH3 │ │ RH3  RH4 ╰────╮      RF3  RF4  RF5  RF6 │
  ╰─────────────────────────│ LH2  LH1  LH0 │ │ RH0  RH1  RH2 │─────────────────────────╯
                            ╰───────────────╯ ╰───────────────╯
*/
#pragma once


#define LN1  5  // left-number row
#define LN2  4
#define LN3  3
#define LN4  2
#define LN5  1
#define LN6  0

#define RN1  8   // right-number row
#define RN2  9
#define RN3 10
#define RN4 11
#define RN5 12
#define RN6 13

#define LT0  6  // left-top row
#define LT1 19
#define LT2 18
#define LT3 17
#define LT4 16
#define LT5 15
#define LT6 14

#define RT0  7  // right-top row
#define RT1 22
#define RT2 23
#define RT3 24
#define RT4 25
#define RT5 26
#define RT6 27

#define LM0 20  // left-middle row
#define LM1 33
#define LM2 32
#define LM3 31
#define LM4 30
#define LM5 29
#define LM6 28

#define RM0 21  // right-middle row
#define RM1 36
#define RM2 37
#define RM3 38
#define RM4 39
#define RM5 40
#define RM6 41

#define LB1 47  // left-bottom row
#define LB2 46
#define LB3 45
#define LB4 44
#define LB5 43
#define LB6 42

#define RB1 50 // right-bottom row
#define RB2 51
#define RB3 52
#define RB4 53
#define RB5 54
#define RB6 55

#define LF3 59  // left floor keys
#define LF4 58
#define LF5 57
#define LF6 56

#define RF3 66  // right floor keys
#define RF4 67
#define RF5 68
#define RF6 69

#define LH0 62  // left thumb keys
#define LH1 61
#define LH2 60
#define LH3 48
#define LH4 34

#define RH0 63  // right thumb keys
#define RH1 64
#define RH2 65
#define RH3 49
#define RH4 35

