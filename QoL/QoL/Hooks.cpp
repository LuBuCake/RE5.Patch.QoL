#include "pch.h"

using namespace Mod;

#pragma region Game

int jmp_00A2B93C = 0x00A2B93C;
void _declspec(naked) Hooks::asm_00A2B92E()
{
	__asm {
		movzx edi, byte ptr[esi + ebp + 0x190]
		movzx eax, byte ptr[esi + ebp + 0x244]
		jmp [jmp_00A2B93C]
	}
}

int jmp_00A2BA0B = 0x00A2BA0B;
void _declspec(naked) Hooks::asm_00A2BA04()
{
	__asm {
		mov eax, edi
		cmp[esi + ebp + 0x190], al
		jmp [jmp_00A2BA0B]
	}
}

int jmp_00A2BA1C = 0x00A2BA1C;
void _declspec(naked) Hooks::asm_00A2BA15()
{
	__asm {
		mov[esi + ebp + 0x190], al
		jmp [jmp_00A2BA1C]
	}
}

int jmp_00A26286 = 0x00A26286;
void _declspec(naked) Hooks::asm_00A2627F()
{
	__asm {
		movzx ecx, byte ptr[esi + ebp + 0x190]
		jmp [jmp_00A26286]
	}
}

int jmp_00A2682E = 0x00A2682E;
void _declspec(naked) Hooks::asm_00A2681E()
{
	__asm {
		movzx edi, byte ptr[esi + eax + 0x190]
		movzx eax, byte ptr[esi + eax + 0x244]
		test edi, edi
		jmp [jmp_00A2682E]
	}
}

int jmp_00A29281 = 0x00A29281;
void _declspec(naked) Hooks::asm_00A2927A()
{
	__asm {
		movzx ebp, byte ptr[esi + edi + 0x190]
		jmp [jmp_00A29281]
	}
}

int jmp_00A298DB = 0x00A298DB;
void _declspec(naked) Hooks::asm_00A298CB()
{
	__asm {
		movzx ecx, byte ptr[esi + eax + 0x190]
		movzx eax, byte ptr[esi + eax + 0x244]
		test ecx, ecx
		jmp [jmp_00A298DB]
	}
}

int jmp_00A29927 = 0x00A29927;
void _declspec(naked) Hooks::asm_00A2991C()
{
	__asm {
		movzx eax, byte ptr[esi + 0x190]
		jmp [jmp_00A29927]
	}
}

int jmp_00A26904 = 0x00A26904;
void _declspec(naked) Hooks::asm_00A268F9()
{
	__asm {
		movzx eax, byte ptr[esi + 0x190]
		jmp [jmp_00A26904]
	}
}

int jmp_00B86F27 = 0x00B86F27;
void _declspec(naked) Hooks::asm_00B86F20()
{
	__asm {
		movzx eax, [ecx + eax + 0x94]
		jmp [jmp_00B86F27]
	}
}

int jmp_00B7496B = 0x00B7496B;
void _declspec(naked) Hooks::asm_00B74964()
{
	__asm {
		movzx eax, [ecx + eax + 0x94]
		jmp [jmp_00B7496B]
	}
}

int jmp_00B76354 = 0x00B76354;
void _declspec(naked) Hooks::asm_00B7634D()
{
	__asm {
		movzx eax, [edx + eax + 0x94]
		jmp [jmp_00B76354]
	}
}

int jmp_00B74AF5 = 0x00B74AF5;
void _declspec(naked) Hooks::asm_00B74AEE()
{
	__asm {
		movzx eax, byte ptr[edx + eax + 0x94]
		jmp [jmp_00B74AF5]
	}
}

int jmp_00B845FF = 0x00B845FF;
void _declspec(naked) Hooks::asm_00B845F8()
{
	__asm {
		movzx eax, byte ptr[ecx + eax + 0x94]
		jmp [jmp_00B845FF]
	}
}

int jmp_00849CB3 = 0x00849CB3;
void _declspec(naked) Hooks::asm_00849CAC()
{
	__asm {
		movzx eax, [ecx + eax + 0x96]
		jmp [jmp_00849CB3]
	}
}

int jmp_00B8A240 = 0x00B8A240;
void _declspec(naked) Hooks::asm_00B8A239()
{
	__asm {
		movzx eax, [ecx + eax + 0x96]
		jmp [jmp_00B8A240]
	}
}

int jmp_00B679A9 = 0x00B679A9;
void _declspec(naked) Hooks::asm_00B679A2()
{
	__asm {
		movzx eax, [ecx + eax + 0x96]
		jmp [jmp_00B679A9]
	}
}

int jmp_00B67C3A = 0x00B67C3A;
void _declspec(naked) Hooks::asm_00B67C33()
{
	__asm {
		movzx ecx, [edi + ecx + 0x96]
		jmp [jmp_00B67C3A]
	}
}

int jmp_00B8B111 = 0x00B8B111;
void _declspec(naked) Hooks::asm_00B8B10A()
{
	__asm {
		movzx eax, [ecx + eax + 0x96]
		jmp [jmp_00B8B111]
	}
}

int jmp_00B8AE94 = 0x00B8AE94;
void _declspec(naked) Hooks::asm_00B8AE8D()
{
	__asm {
		movzx eax, [ecx + eax + 0x96]
		jmp [jmp_00B8AE94]
	}
}

int jmp_00B8B2EF = 0x00B8B2EF;
void _declspec(naked) Hooks::asm_00B8B2E8()
{
	__asm {
		movzx eax, [edx + eax + 0x96]
		jmp [jmp_00B8B2EF]
	}
}

int jmp_00B8B464 = 0x00B8B464;
void _declspec(naked) Hooks::asm_00B8B45D()
{
	__asm {
		movzx eax, [ecx + eax + 0x96]
		jmp [jmp_00B8B464]
	}
}

int jmp_00B85D6E = 0x00B85D6E;
void _declspec(naked) Hooks::asm_00B85D67()
{
	__asm {
		movzx eax, [ecx + eax + 0x96]
		jmp [jmp_00B85D6E]
	}
}

int jmp_00A2BB51 = 0x00A2BB51;
void _declspec(naked) Hooks::asm_00A2BB48()
{
	__asm {
		mov ecx, edi
		mov [esi + ebx + 0x190], cl
		mov ecx, esi
		jmp [jmp_00A2BB51]
	}
}

BYTE Hooks::op_00A263A0[67] = { 0x8D, 0x8E, 0x95, 0x01, 0x00, 0x00, 0x39, 0xC5, 0x74, 0x14, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x11, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC0, 0x01, 0x83, 0xC1, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF8, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF8, 0x42, 0x7C, 0xC8, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A266F7[32] = { 0x83, 0xC5, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xE9, 0x0, 0x0, 0x0, 0x0, 0x83, 0xF9, 0x42, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A2658B[107] = { 0x0F, 0xB6, 0x96, 0x96, 0x01, 0x00, 0x00, 0x52, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x89, 0x44, 0x24, 0x28, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x44, 0x24, 0x14, 0x89, 0x44, 0x24, 0x18, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xAE, 0x95, 0x01, 0x00, 0x00, 0x83, 0xF9, 0x06, 0x74, 0x15, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0D, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x55, 0x00, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC1, 0x01, 0x83, 0xC5, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF9, 0x42, 0x7C, 0xC6, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A26633[109] = { 0x0F, 0xB6, 0x96, 0x99, 0x01, 0x00, 0x00, 0x8B, 0x0D, 0x28, 0xAD, 0x23, 0x01, 0x52, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x4C, 0x24, 0x14, 0x89, 0x4C, 0x24, 0x18, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xAE, 0x95, 0x01, 0x00, 0x00, 0x83, 0xF9, 0x09, 0x74, 0x15, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0D, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x55, 0x00, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC1, 0x01, 0x83, 0xC5, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF9, 0x42, 0x7C, 0xC6, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A26437[107] = { 0x0F, 0xB6, 0x96, 0xA1, 0x01, 0x00, 0x00, 0x52, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x89, 0x44, 0x24, 0x28, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x44, 0x24, 0x14, 0x89, 0x44, 0x24, 0x18, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xAE, 0x95, 0x01, 0x00, 0x00, 0x83, 0xF9, 0x11, 0x74, 0x15, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0D, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x55, 0x00, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC1, 0x01, 0x83, 0xC2, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF9, 0x42, 0x7C, 0xC6, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A264E1[109] = { 0x0F, 0xB6, 0x96, 0x99, 0x01, 0x00, 0x00, 0x8B, 0x0D, 0x28, 0xAD, 0x23, 0x01, 0x52, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x4C, 0x24, 0x14, 0x89, 0x4C, 0x24, 0x18, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xAE, 0x95, 0x01, 0x00, 0x00, 0x83, 0xF9, 0x09, 0x74, 0x15, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0D, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x55, 0x00, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC1, 0x01, 0x83, 0xC5, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF9, 0x42, 0x7C, 0xC6, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A2B8D3[30] = { 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0B, 0x0F, 0x1F, 0x40, 0x00, 0x6A, 0x2D, 0xEB, 0x05, 0x0F, 0x1F, 0x00, 0x6A, 0x42, 0x51, 0x57, 0x55, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A2B905[30] = { 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0B, 0x0F, 0x1F, 0x40, 0x00, 0x6A, 0x26, 0xEB, 0x05, 0x0F, 0x1F, 0x00, 0x6A, 0x3B, 0x6A, 0x00, 0x52, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A268C9[35] = { 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xFF, 0x26, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xFF, 0x3B, 0x0F, 0x8D, 0x0, 0x0, 0x0, 0x0, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A268EF[29] = { 0x83, 0xF9, 0x04, 0x76, 0x09, 0x0F, 0x1F, 0x40, 0x00, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x0F, 0xB7, 0x04, 0x4D, 0xA8, 0xD0, 0x11, 0x01, 0x85, 0xC9, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A262B8[41] = { 0x83, 0xFD, 0x2C, 0x77, 0x11, 0x0F, 0x1F, 0x40, 0x00, 0x0F, 0xB7, 0x04, 0x6D, 0x28, 0xCF, 0x11, 0x01, 0xE9, 0x0, 0x0, 0x0, 0x0, 0x83, 0xED, 0x2D, 0x0F, 0xB7, 0x04, 0x6D, 0xB4, 0xD0, 0x11, 0x01, 0x83, 0xC5, 0x2D, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A293DD[71] = { 0xB8, 0x05, 0x00, 0x00, 0x00, 0x8B, 0xCD, 0x8D, 0x96, 0x95, 0x01, 0x00, 0x00, 0x39, 0xC7, 0x74, 0x14, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xC9, 0x74, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x0A, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x04, 0x01, 0x83, 0xC2, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0B, 0x0F, 0x1F, 0x40, 0x00, 0x3C, 0x2D, 0xEB, 0x05, 0x0F, 0x1F, 0x00, 0x3C, 0x42, 0x7C, 0xCB, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A296B3[77] = { 0x0F, 0xB6, 0x9E, 0x95, 0x01, 0x00, 0x00, 0x53, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x89, 0x44, 0x24, 0x2C, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x44, 0x24, 0x14, 0x89, 0x44, 0x24, 0x1C, 0xBF, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xAE, 0x95, 0x01, 0x00, 0x00, 0x8B, 0xFF, 0x83, 0xFF, 0x05, 0x74, 0x15, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xDB, 0x74, 0x0D, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x5D, 0x00, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A2971A[32] = { 0x83, 0xC5, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xFF, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xFF, 0x42, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A295B5[102] = { 0x0F, 0xB6, 0x96, 0x96, 0x01, 0x00, 0x00, 0x52, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x6C, 0x24, 0x14, 0x89, 0x6C, 0x24, 0x1C, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xBE, 0x95, 0x01, 0x00, 0x00, 0x83, 0xF9, 0x06, 0x74, 0x14, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x17, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC1, 0x01, 0x83, 0xC7, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF9, 0x42, 0x7C, 0xC7, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A29665[108] = { 0x0F, 0xB6, 0x96, 0x99, 0x01, 0x00, 0x00, 0x8B, 0x0D, 0x28, 0xAD, 0x23, 0x01, 0x52, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x6C, 0x24, 0x14, 0x89, 0x6C, 0x24, 0x1C, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xBE, 0x95, 0x01, 0x00, 0x00, 0x83, 0xF9, 0x09, 0x74, 0x14, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x17, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC1, 0x01, 0x83, 0xC7, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF9, 0x42, 0x7C, 0xC7, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A29475[102] = { 0x0F, 0xB6, 0x96, 0xA1, 0x01, 0x00, 0x00, 0x52, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x6C, 0x24, 0x14, 0x89, 0x6C, 0x24, 0x1C, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xBE, 0x95, 0x01, 0x00, 0x00, 0x83, 0xF9, 0x11, 0x74, 0x14, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x17, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC1, 0x01, 0x83, 0xC7, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF9, 0x42, 0x7C, 0xC7, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A29525[108] = { 0x0F, 0xB6, 0x96, 0x99, 0x01, 0x00, 0x00, 0x8B, 0x0D, 0x28, 0xAD, 0x23, 0x01, 0x52, 0xE8, 0x0, 0x0, 0x0, 0x0, 0x85, 0xC0, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x8B, 0x6C, 0x24, 0x14, 0x89, 0x6C, 0x24, 0x1C, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x8D, 0xBE, 0x95, 0x01, 0x00, 0x00, 0x83, 0xF9, 0x09, 0x74, 0x14, 0x0F, 0x1F, 0x40, 0x00, 0x85, 0xD2, 0x74, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x3A, 0x17, 0x0F, 0x84, 0x0, 0x0, 0x0, 0x0, 0x83, 0xC1, 0x01, 0x83, 0xC7, 0x01, 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xF9, 0x2D, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xF9, 0x42, 0x7C, 0xC7, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A29910[29] = { 0x83, 0xF9, 0x04, 0x76, 0x09, 0x0F, 0x1F, 0x40, 0x00, 0xB9, 0x05, 0x00, 0x00, 0x00, 0x0F, 0xB7, 0x04, 0x4D, 0xA8, 0xD0, 0x11, 0x01, 0x85, 0xC9, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A29281[41] = { 0x83, 0xFF, 0x2C, 0x77, 0x11, 0x0F, 0x1F, 0x40, 0x00, 0x0F, 0xB7, 0x14, 0x7D, 0x28, 0xCF, 0x11, 0x01, 0xE9, 0x0, 0x0, 0x0, 0x0, 0x83, 0xEF, 0x2D, 0x0F, 0xB7, 0x14, 0x7D, 0xB4, 0xD0, 0x11, 0x01, 0x83, 0xC7, 0x2D, 0xE9, 0x0, 0x0, 0x0, 0x0 };
BYTE Hooks::op_00A298A5[35] = { 0x80, 0x3D, 0xF2, 0xD2, 0x11, 0x01, 0x00, 0x75, 0x0C, 0x0F, 0x1F, 0x40, 0x00, 0x83, 0xFF, 0x26, 0xEB, 0x06, 0x0F, 0x1F, 0x00, 0x83, 0xFF, 0x3B, 0x0F, 0x8D, 0x0, 0x0, 0x0, 0x0, 0xE9, 0x0, 0x0, 0x0, 0x0 };

#pragma endregion Game

#pragma region QoL

int jmp_4464 = 0;
void _declspec(naked) Hooks::asm_445C()
{
	__asm {
		cmp byte ptr[eax + ecx + 0x94], 01
		jmp[jmp_4464]
	}
}

int jmp_4322 = 0;
void _declspec(naked) Hooks::asm_431A()
{
	__asm {
		cmp byte ptr[eax + ecx + 0x94], 01
		jmp[jmp_4322]
	}
}

int jmp_4330 = 0;
void _declspec(naked) Hooks::asm_4328()
{
	__asm {
		cmp byte ptr[eax + ecx + 0x94], 03
		jmp[jmp_4330]
	}
}

int jmp_461F = 0;
void _declspec(naked) Hooks::asm_4618()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_461F]
	}
}

int jmp_45E5 = 0;
void _declspec(naked) Hooks::asm_45DE()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_45E5]
	}
}

int jmp_43EE = 0;
void _declspec(naked) Hooks::asm_43E7()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_43EE]
	}
}

int jmp_444E = 0;
void _declspec(naked) Hooks::asm_4447()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_444E]
	}
}

int jmp_438E = 0;
void _declspec(naked) Hooks::asm_4387()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_438E]
	}
}

int jmp_4485 = 0;
void _declspec(naked) Hooks::asm_447E()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_4485]
	}
}

int jmp_44D9 = 0;
void _declspec(naked) Hooks::asm_44D2()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_44D9]
	}
}

int jmp_45A0 = 0;
void _declspec(naked) Hooks::asm_4599()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_45A0]
	}
}

int jmp_44B4 = 0;
void _declspec(naked) Hooks::asm_44AD()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_44B4]
	}
}

int jmp_435E = 0;
void _declspec(naked) Hooks::asm_4357()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_435E]
	}
}

int jmp_441E = 0;
void _declspec(naked) Hooks::asm_4417()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_441E]
	}
}

int jmp_42EA = 0;
void _declspec(naked) Hooks::asm_42E3()
{
	__asm {
		movzx eax, byte ptr[eax + ecx + 0x94]
		jmp[jmp_42EA]
	}
}

#pragma endregion QoL

void Hooks::Initialize()
{
	Utils::Hook((LPVOID)0x00A2B92E, &Hooks::asm_00A2B92E, NULL, 7);
	Utils::Hook((LPVOID)0x00A2BA04, &Hooks::asm_00A2BA04, NULL, 7);
	Utils::Hook((LPVOID)0x00A2BA15, &Hooks::asm_00A2BA15, NULL, 7);
	Utils::Hook((LPVOID)0x00A2627F, &Hooks::asm_00A2627F, NULL, 7);
	Utils::Hook((LPVOID)0x00A2681E, &Hooks::asm_00A2681E, NULL, 7);
	Utils::Hook((LPVOID)0x00A2927A, &Hooks::asm_00A2927A, NULL, 7);
	Utils::Hook((LPVOID)0x00A298CB, &Hooks::asm_00A298CB, NULL, 7);
	Utils::Hook((LPVOID)0x00A2991C, &Hooks::asm_00A2991C, NULL, 7);
	Utils::Hook((LPVOID)0x00A268F9, &Hooks::asm_00A268F9, NULL, 7);
	Utils::Hook((LPVOID)0x00B86F20, &Hooks::asm_00B86F20, NULL, 7);
	Utils::Hook((LPVOID)0x00B74964, &Hooks::asm_00B74964, NULL, 7);
	Utils::Hook((LPVOID)0x00B7634D, &Hooks::asm_00B7634D, NULL, 7);
	Utils::Hook((LPVOID)0x00B74AEE, &Hooks::asm_00B74AEE, NULL, 7);
	Utils::Hook((LPVOID)0x00B845F8, &Hooks::asm_00B845F8, NULL, 7);
	Utils::Hook((LPVOID)0x00849CAC, &Hooks::asm_00849CAC, NULL, 7);
	Utils::Hook((LPVOID)0x00B8A239, &Hooks::asm_00B8A239, NULL, 7);
	Utils::Hook((LPVOID)0x00B679A2, &Hooks::asm_00B679A2, NULL, 7);
	Utils::Hook((LPVOID)0x00B67C33, &Hooks::asm_00B67C33, NULL, 7);
	Utils::Hook((LPVOID)0x00B8B10A, &Hooks::asm_00B8B10A, NULL, 7);
	Utils::Hook((LPVOID)0x00B8AE8D, &Hooks::asm_00B8AE8D, NULL, 7);
	Utils::Hook((LPVOID)0x00B8B2E8, &Hooks::asm_00B8B2E8, NULL, 7);
	Utils::Hook((LPVOID)0x00B8B45D, &Hooks::asm_00B8B45D, NULL, 7);
	Utils::Hook((LPVOID)0x00B85D67, &Hooks::asm_00B85D67, NULL, 7);
	Utils::Hook((LPVOID)0x00A2BB48, &Hooks::asm_00A2BB48, NULL, 9);

	Utils::Hook((LPVOID)0x00A263A0, &Hooks::op_00A263A0[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A263A0[26] = 0x00A263BF - (DWORD)&Hooks::op_00A263A0[26 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A263A0[63] = 0x00A263D5 - (DWORD)&Hooks::op_00A263A0[63 + 4];

	Utils::Hook((LPVOID)0x00A266F7, &Hooks::op_00A266F7[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A266F7[20] = 0x00A266FD - (DWORD)&Hooks::op_00A266F7[20 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A266F7[28] = 0x00A266FD - (DWORD)&Hooks::op_00A266F7[28 + 4];

	Utils::Hook((LPVOID)0x00A2658B, &Hooks::op_00A2658B[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A2658B[9] = 0x0079E9F0 - (DWORD)&Hooks::op_00A2658B[9 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A2658B[21] = 0x00A265FF - (DWORD)&Hooks::op_00A2658B[21 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A2658B[66] = 0x00A265CC - (DWORD)&Hooks::op_00A2658B[66 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A2658B[103] = 0x00A265E3 - (DWORD)&Hooks::op_00A2658B[103 + 4];

	Utils::Hook((LPVOID)0x00A26633, &Hooks::op_00A26633[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A26633[15] = 0x0079E9F0 - (DWORD)&Hooks::op_00A26633[15 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A26633[23] = 0x00A2657A - (DWORD)&Hooks::op_00A26633[23 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A26633[68] = 0x00A26543 - (DWORD)&Hooks::op_00A26633[68 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A26633[105] = 0x00A2655F - (DWORD)&Hooks::op_00A26633[105 + 4];

	Utils::Hook((LPVOID)0x00A26437, &Hooks::op_00A26437[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A26437[9] = 0x0079E9F0 - (DWORD)&Hooks::op_00A26437[9 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A26437[21] = 0x00A264AD - (DWORD)&Hooks::op_00A26437[21 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A26437[66] = 0x00A2647A - (DWORD)&Hooks::op_00A26437[66 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A26437[103] = 0x00A26491 - (DWORD)&Hooks::op_00A26437[103 + 4];

	Utils::Hook((LPVOID)0x00A264E1, &Hooks::op_00A264E1[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A264E1[15] = 0x0079E9F0 - (DWORD)&Hooks::op_00A264E1[15 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A264E1[23] = 0x00A2657A - (DWORD)&Hooks::op_00A264E1[23 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A264E1[68] = 0x00A26543 - (DWORD)&Hooks::op_00A264E1[68 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A264E1[105] = 0x00A26528 - (DWORD)&Hooks::op_00A264E1[105 + 4];

	Utils::Hook((LPVOID)0x00A2B8D3, &Hooks::op_00A2B8D3[0], NULL, 5);
	*(DWORD*)(DWORD)&Hooks::op_00A2B8D3[26] = 0x00A2B8D8 - (DWORD)&Hooks::op_00A2B8D3[26 + 4];

	Utils::Hook((LPVOID)0x00A2B905, &Hooks::op_00A2B905[0], NULL, 5);
	*(DWORD*)(DWORD)&Hooks::op_00A2B905[26] = 0x00A2B90A - (DWORD)&Hooks::op_00A2B905[26 + 4];

	Utils::Hook((LPVOID)0x00A268C9, &Hooks::op_00A268C9[0], NULL, 5);
	*(DWORD*)(DWORD)&Hooks::op_00A268C9[26] = 0x00A268E3 - (DWORD)&Hooks::op_00A268C9[26 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A268C9[31] = 0x00A268CE - (DWORD)&Hooks::op_00A268C9[31 + 4];

	Utils::Hook((LPVOID)0x00A268EF, &Hooks::op_00A268EF[0], NULL, 8);
	*(DWORD*)(DWORD)&Hooks::op_00A268EF[25] = 0x00A268F7 - (DWORD)&Hooks::op_00A268EF[25 + 4];

	Utils::Hook((LPVOID)0x00A262B8, &Hooks::op_00A262B8[0], NULL, 8);
	*(DWORD*)(DWORD)&Hooks::op_00A262B8[18] = 0x00A262C0 - (DWORD)&Hooks::op_00A262B8[18 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A262B8[37] = 0x00A262C0 - (DWORD)&Hooks::op_00A262B8[37 + 4];

	Utils::Hook((LPVOID)0x00A293DD, &Hooks::op_00A293DD[0], NULL, 5);
	*(DWORD*)(DWORD)&Hooks::op_00A293DD[33] = 0x00A29401 - (DWORD)&Hooks::op_00A293DD[33 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A293DD[67] = 0x00A29417 - (DWORD)&Hooks::op_00A293DD[67 + 4];

	Utils::Hook((LPVOID)0x00A296B3, &Hooks::op_00A296B3[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A296B3[9] = 0x0079E9F0 - (DWORD)&Hooks::op_00A296B3[9 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A296B3[21] = 0x00A29764 - (DWORD)&Hooks::op_00A296B3[21 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A296B3[68] = 0x00A29728 - (DWORD)&Hooks::op_00A296B3[68 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A296B3[73] = 0x00A296EE - (DWORD)&Hooks::op_00A296B3[73 + 4];

	Utils::Hook((LPVOID)0x00A2971A, &Hooks::op_00A2971A[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A2971A[28] = 0x00A29720 - (DWORD)&Hooks::op_00A2971A[28 + 4];

	Utils::Hook((LPVOID)0x00A295B5, &Hooks::op_00A295B5[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A295B5[9] = 0x0079E9F0 - (DWORD)&Hooks::op_00A295B5[9 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A295B5[17] = 0x00A29627 - (DWORD)&Hooks::op_00A295B5[17 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A295B5[61] = 0x00A295F2 - (DWORD)&Hooks::op_00A295B5[61 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A295B5[98] = 0x00A2960A - (DWORD)&Hooks::op_00A295B5[98 + 4];

	Utils::Hook((LPVOID)0x00A29665, &Hooks::op_00A29665[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A29665[15] = 0x0079E9F0 - (DWORD)&Hooks::op_00A29665[15 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29665[23] = 0x00A295A2 - (DWORD)&Hooks::op_00A29665[23 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29665[67] = 0x00A2956A - (DWORD)&Hooks::op_00A29665[67 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29665[104] = 0x00A29582 - (DWORD)&Hooks::op_00A29665[104 + 4];

	Utils::Hook((LPVOID)0x00A29475, &Hooks::op_00A29475[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A29475[9] = 0x0079E9F0 - (DWORD)&Hooks::op_00A29475[9 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29475[17] = 0x00A294E7 - (DWORD)&Hooks::op_00A29475[17 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29475[61] = 0x00A294B2 - (DWORD)&Hooks::op_00A29475[61 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29475[98] = 0x00A294CA - (DWORD)&Hooks::op_00A29475[98 + 4];

	Utils::Hook((LPVOID)0x00A29525, &Hooks::op_00A29525[0], NULL, 6);
	*(DWORD*)(DWORD)&Hooks::op_00A29525[15] = 0x0079E9F0 - (DWORD)&Hooks::op_00A29525[15 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29525[23] = 0x00A295A2 - (DWORD)&Hooks::op_00A29525[23 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29525[67] = 0x00A2956A - (DWORD)&Hooks::op_00A29525[67 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29525[104] = 0x00A29582 - (DWORD)&Hooks::op_00A29525[104 + 4];

	Utils::Hook((LPVOID)0x00A29910, &Hooks::op_00A29910[0], NULL, 10);
	*(DWORD*)(DWORD)&Hooks::op_00A29910[25] = 0x00A2991A - (DWORD)&Hooks::op_00A29910[25 + 4];

	Utils::Hook((LPVOID)0x00A29281, &Hooks::op_00A29281[0], NULL, 8);
	*(DWORD*)(DWORD)&Hooks::op_00A29281[18] = 0x00A29289 - (DWORD)&Hooks::op_00A29281[18 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A29281[37] = 0x00A29289 - (DWORD)&Hooks::op_00A29281[37 + 4];

	Utils::Hook((LPVOID)0x00A298A5, &Hooks::op_00A298A5[0], NULL, 5);
	*(DWORD*)(DWORD)&Hooks::op_00A298A5[26] = 0x00A298B6 - (DWORD)&Hooks::op_00A298A5[26 + 4];
	*(DWORD*)(DWORD)&Hooks::op_00A298A5[31] = 0x00A298AA - (DWORD)&Hooks::op_00A298A5[31 + 4];

	// QoL Tweaks (Gotta implement those externaly so we keep the QoL dll clean)

	DWORD QoL = (DWORD)GetModuleHandle(L"QOL.dll");

	Utils::Hook((LPVOID)(QoL + 0x6207), &Hooks::asm_42E3, &jmp_42EA, 7);
	Utils::Hook((LPVOID)(QoL + 0x621C), &Hooks::asm_431A, &jmp_4322, 8);
	Utils::Hook((LPVOID)(QoL + 0x6338), &Hooks::asm_4328, &jmp_4330, 8);
	Utils::Hook((LPVOID)(QoL + 0x6367), &Hooks::asm_4357, &jmp_435E, 7);
	Utils::Hook((LPVOID)(QoL + 0x6397), &Hooks::asm_4387, &jmp_438E, 7);
	Utils::Hook((LPVOID)(QoL + 0x63F7), &Hooks::asm_43E7, &jmp_43EE, 7);
	Utils::Hook((LPVOID)(QoL + 0x6427), &Hooks::asm_4417, &jmp_441E, 7);
	Utils::Hook((LPVOID)(QoL + 0x6457), &Hooks::asm_4447, &jmp_444E, 7);
	Utils::Hook((LPVOID)(QoL + 0x632A), &Hooks::asm_445C, &jmp_4464, 8);
	Utils::Hook((LPVOID)(QoL + 0x647A), &Hooks::asm_447E, &jmp_4485, 7);
	Utils::Hook((LPVOID)(QoL + 0x64A9), &Hooks::asm_44AD, &jmp_44B4, 7);
	Utils::Hook((LPVOID)(QoL + 0x64CE), &Hooks::asm_44D2, &jmp_44D9, 7);
	Utils::Hook((LPVOID)(QoL + 0x6595), &Hooks::asm_4599, &jmp_45A0, 7);
	Utils::Hook((LPVOID)(QoL + 0x6616), &Hooks::asm_45DE, &jmp_45E5, 7);
	Utils::Hook((LPVOID)(QoL + 0x65D0), &Hooks::asm_4618, &jmp_461F, 7);

	/*
	Utils::Hook((LPVOID)(QoL + 0x42E3), &Hooks::asm_42E3, &jmp_42EA, 7);
	Utils::Hook((LPVOID)(QoL + 0x431A), &Hooks::asm_431A, &jmp_4322, 8);
	Utils::Hook((LPVOID)(QoL + 0x4328), &Hooks::asm_4328, &jmp_4330, 8);
	Utils::Hook((LPVOID)(QoL + 0x4357), &Hooks::asm_4357, &jmp_435E, 7);
	Utils::Hook((LPVOID)(QoL + 0x4387), &Hooks::asm_4387, &jmp_438E, 7);
	Utils::Hook((LPVOID)(QoL + 0x43E7), &Hooks::asm_43E7, &jmp_43EE, 7);
	Utils::Hook((LPVOID)(QoL + 0x4417), &Hooks::asm_4417, &jmp_441E, 7);
	Utils::Hook((LPVOID)(QoL + 0x4447), &Hooks::asm_4447, &jmp_444E, 7);
	Utils::Hook((LPVOID)(QoL + 0x445C), &Hooks::asm_445C, &jmp_4464, 8);
	Utils::Hook((LPVOID)(QoL + 0x447E), &Hooks::asm_447E, &jmp_4485, 7);
	Utils::Hook((LPVOID)(QoL + 0x44AD), &Hooks::asm_44AD, &jmp_44B4, 7);
	Utils::Hook((LPVOID)(QoL + 0x44D2), &Hooks::asm_44D2, &jmp_44D9, 7);
	Utils::Hook((LPVOID)(QoL + 0x4599), &Hooks::asm_4599, &jmp_45A0, 7);
	Utils::Hook((LPVOID)(QoL + 0x45DE), &Hooks::asm_45DE, &jmp_45E5, 7);
	Utils::Hook((LPVOID)(QoL + 0x4618), &Hooks::asm_4618, &jmp_461F, 7);
	*/
}