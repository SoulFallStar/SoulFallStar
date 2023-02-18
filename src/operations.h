#ifndef OPERATIONS_
#define OPERATIONS_

// 太乱了，以后工作区养成好习惯

typedef enum operation{
    nop,
    add,
    sub,
    mul,
    div,
    mod,
    ushr,
    shr,
    xor,
    shl,
    and,
    or,
    neg,
    gt,
    ge,
    lt,
    le,
    eq,
    jmp,
    jz,
    call,
    ret,
    swap,
    dup,
    push,
    pop,
    inc,
    dec,
    int,
    ins,
} op_t;

#endif
