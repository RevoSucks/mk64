// Decompiled from mips to c online with no changes.
void *foo(void *arg0) {
    u32 sp74;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    void *sp2C;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    u16 temp_a1;
    u32 temp_v1;
    void *temp_v0_3;
    void *temp_v1_2;
    void *phi_return;

    temp_v1 = (u32) arg0->unk24;
    if (arg0->unk6 != 0) {
        if (arg0->unk6 != 1) {
            if (arg0->unk6 != 2) {
                phi_return = func_8029E854(arg0);
            } else {
                temp_v0 = arg0->unk4;
                if (temp_v0 >= 0x14) {
block_22:
                    return func_8029E854(arg0);
                }
                if (temp_v0 < 0) {
                    goto block_22;
                }
                arg0->unk4 = (s16) (temp_v0 + 1);
                arg0->unk10 = (s16) (arg0->unk10 + 0x444);
                arg0->unk12 = (s16) (arg0->unk12 - 0x2D8);
                arg0->unk14 = (s16) (arg0->unk14 + 0x16C);
                phi_return = temp_v0;
            }
        } else {
            if (arg0->unk8 < 1.0f) {
                arg0->unk8 = (f32) (arg0->unk8 + D_802B99D0);
            } else {
                if (1.0f <= arg0->unk8) {
                    arg0->unk8 = 1.0f;
                }
            }
            arg0->unkC = (f32) (arg0->unk8 * 5.5f);
            if (arg0->unk28 <= arg0->unk1C) {
                arg0->unk1C = (f32) arg0->unk28;
            } else {
                arg0->unk1C = (f32) (arg0->unk1C + D_802B99D4);
            }
            if ((arg0->unk2 & 0x1000) != 0) {
                temp_v0_2 = arg0->unk4;
                if ((temp_v0_2 <= 0) || (temp_v0_2 >= 0x12D)) {
                    arg0->unk2 = (s16) (arg0->unk2 & 0xEFFF);
                    arg0->unk4 = (u16)0;
                    phi_return = temp_v0_2;
                } else {
                    arg0->unk4 = (s16) (temp_v0_2 - 1);
                    phi_return = temp_v0_2;
                }
            }
            arg0->unk10 = (s16) (arg0->unk10 - 0xB6);
            arg0->unk12 = (s16) (arg0->unk12 + 0x16C);
            arg0->unk14 = (s16) (arg0->unk14 - 0xB6);
        }
    } else {
        arg0->unkC = (f32) (arg0->unk8 * 5.5f);
        arg0->unk10 = (s16) (arg0->unk10 - 0xB6);
        arg0->unk12 = (s16) (arg0->unk12 + 0x16C);
        arg0->unk14 = (s16) (arg0->unk14 - 0xB6);
        temp_v0_3 = (temp_v1 * 0xDD8) + &D_800F6990;
        temp_f14 = temp_v0_3->unk14 - arg0->unk18;
        temp_f16 = temp_v0_3->unk18 - arg0->unk1C;
        sp48 = temp_f14;
        temp_f18 = temp_v0_3->unk1C - arg0->unk20;
        sp44 = temp_f16;
        sp74 = temp_v1;
        sp40 = temp_f18;
        sp2C = temp_v0_3;
        temp_f2 = sqrtf(((temp_f14 * temp_f14) + (temp_f16 * temp_f16)) + (temp_f18 * temp_f18), temp_f14) / 10.0f;
        temp_f14_2 = temp_f14 / temp_f2;
        temp_f16_2 = temp_f16 / temp_f2;
        arg0->unk18 = (f32) (temp_v0_3->unk14 - temp_f14_2);
        temp_f18_2 = temp_f18 / temp_f2;
        arg0->unk1C = (f32) ((temp_v0_3->unk18 - temp_f16_2) - 1.0f);
        arg0->unk20 = (f32) (temp_v0_3->unk1C - temp_f18_2);
        func_802ADDC8(1.0f, temp_f14_2, arg0 + 0x30, (bitwise s32) arg0->unkC, (bitwise s32) arg0->unk18, (bitwise s32) arg0->unk1C, (f32) arg0->unk20);
        func_802B4E30(arg0);
        temp_v1_2 = (sp74 * 0x10) + &D_800F6910;
        phi_return = temp_v0_3;
        if ((temp_v0_3->unk0 & 0x4000) != 0) {
            temp_a1 = temp_v1_2->unk8;
            phi_return = temp_v0_3;
            if ((temp_a1 & 0x2000) != 0) {
                temp_v1_2->unk8 = (u16) (temp_a1 & 0xDFFF);
                sp2C = temp_v0_3;
                func_802A1064(arg0, temp_a1);
                temp_v0_3->unkC = (s32) (temp_v0_3->unkC & 0xFFFBFFFF);
                return func_800C9060(((s32) (temp_v0_3 - D_800DC4DC) / 0xDD8) & 0xFF, 0x19008012);
            }
        }
    }
    return phi_return;
}


