//
//  sun_asm.asm.s
//  Practice
//
//  Created by QinyuTang on 2017/8/13.
//  Copyright © 2017年 QinyuTang. All rights reserved.
//

/*
 * arm7.asm
 * Test
 *
 * Created by Zenny Chen on 4/24/10.
 * Copyright 2010 GreenGames Studio. All rights reserved.
 */

/*.text
.align 4
.globl _my_arm_test
.globl _my_thumb_test


.arm

_my_arm_test:

    vdup.32     q0, r0
    qadd8       r0, r1, r2
    add         r0, r0, LSL #2
    bx          lr


.thumb
.thumb_func _my_thumb_test

_my_thumb_test:

    movw       r1, #1001
    rev16      r0, r1
    bx         lr*/
