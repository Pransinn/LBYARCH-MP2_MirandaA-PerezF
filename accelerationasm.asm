section .data
    cons_1k dq 1000.0
    cons_3600 dq 3600.0
section .text
bits 64
default rel
global accelerationasm
accelerationasm:
    
L1:
    movsd xmm0, qword[rdx+8]
    subsd xmm0, qword[rdx]
    
    movsd xmm1, qword[cons_1k]
    
    movsd xmm2, qword[cons_3600]
    
    mulsd xmm0, xmm1
    divsd xmm0, xmm2
    
    divsd xmm0, qword[rdx+16]
    
    roundsd xmm0, xmm0, 0b00
    
    movsd qword[r8], xmm0
    add rdx, 24
    add r8, 8
    
    LOOP L1
    
    ret