/*Nama  : Nabilah Erfariani
  NIM   : 13519181
  Kelas : 01
  File  : CommandCenter.c
  Tanggal: 30 Oktober 2020
*/
void CommandCenter(int var)
{
    unsigned int var2; // add(ebx,0x4020) dan sub(esp,0x18)
    int var3; // lea(eax, esp+0x8) dan  mov(eax, gs:0x14h)
    
    if ( __isoc99_sscanf(var, "%d %d", &var2, &var3) != 2 || var2 > 0xE ) //cmp(eax, 0x2) dan  cmp(esp+0x4, 0xe)
    {
        bad_instruction(); //jne dan jae
    }
    //call func4
    if (func4(var2, 0, 14) != 7 || var3 != 7) // cmp (eax, 0x7) dan cmp(esp+0x8, 0x7) 
    {
        bad_instruction(); // jne *CommandCenter+104
    }
}


