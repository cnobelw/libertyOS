;================================================================
; load.inc
; 定义 MBR 加载 Loader 以及 Loader 加载 Kernel 用到的常量信息
;================================================================

BaseOfKernel		equ	1000h		; Kernel 被加载到的地址(段地址)
OffsetOfKernel		equ	0		; Kernel 被加载到的地址(偏移地址)
BaseOfKernelPAddr	equ	10000h		; BaseOfKernel << 4

BaseOfLoader		equ	0		; Loader 被加载到的地址(段地址) *根据 boot.asm 的寻址情况, 该值必须为 0.*
OffsetOfLoader		equ	0ae00h		; Loader 被加载到的地址(偏移地址)
BaseOfLoaderPAddr	equ	0		; BaseOfLoader << 4

BaseOfFatBuf		equ	7e00h		; FAT1 专用读缓冲区基地址 (len = 9 * 512 = 0x1200)
BaseOfRootBuf		equ	9000h		; 根目录区专用读缓冲区基地址 (len = 14 * 512 = 0x1c00)
BaseOfExBuf		equ	0ac00h		; 扩展缓冲区基地址 (len = 0x200)
