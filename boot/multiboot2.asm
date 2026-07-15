; ==================================================
; NovaOS Multiboot2 Header
; ==================================================

section .multiboot
align 8

header_start:

dd 0xE85250D6                 ; Multiboot2 Magic
dd 0                          ; Architecture (i386)
dd header_end - header_start  ; Header Length
dd -(0xE85250D6 + 0 + (header_end - header_start))

; End Tag
dw 0
dw 0
dd 8

header_end:
