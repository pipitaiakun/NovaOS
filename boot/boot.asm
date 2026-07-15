; ======================================
; NovaOS Boot Entry
; Version : 0.0.2
; ======================================

global _start

section .text

_start:
    cli

.hang:
    hlt
    jmp .hang
