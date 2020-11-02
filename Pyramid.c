/*Nama  : Nabilah Erfariani
  NIM   : 13519181
  Kelas : 01
  File  : Pyramid.c
  Tanggal: 30 Oktober 2020
*/

void Pyramid(int var)
{
    unsigned int hasil; // push eax
    signed int var2; // push eax
    int var3; // add(ebx, 0x4137) dan sub(esp, 0x18)
    int var4; // lea(esp+0x8) mov(eax, gs:0x14)

    if ( __isoc99_sscanf(var, "%d %d", &var3, &var4) <= 1 ) //cmp eax,0x1
    {
        bad_instruction(); //jle *Pyramid+83
    }
    switch (var3) // cmp DWORD PTR[esp+0x4], 0x7
    {
    case 0: //jmp *Pyramid+156
        var2 = 53; 
        break; 
    case 1: 
        var2 = 672; // mov(eax, 0x2a0)
        break;
    case 2: 
        var2 = 751;  // mov(eax, 0x2ef)
        break;
    case 3: 
        var2 = 421; // mov (eax, 0x1a5)
        break;
    case 4: 
        var2 = 519; // mov(eax, 0x207)
        break;
    case 5: 
        var2 = 414; // mov(eax, 0x19e)
        break;
    case 6: 
        var2 = 925; // mov(eax, 0x39d)
        break;
    case 7: 
        var2 = 244; //mov(eax, 0xf4)
        break;
    default: // ja *Pyramid+139
        bad_instruction(); // *Pyramid+139
        return hasil;
    }
    if (var4 != var2) //cmp DWORD PTR(esp+0x8, eax)
    {
        bad_instruction(); //*Pyramid+162
    }
}
