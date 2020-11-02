/*Nama  : Nabilah Erfariani
  NIM   : 13519181
  Kelas : 01
  File  : HQ.c
  Tanggal: 30 Oktober 2020
*/

void HQ(int var)
{
    int *var2; //push esi
    int var3; // sub(esp, 0x28) dan add(ebx, 0x41b1)
    int var4; // add(esp,0x10) dan mov(esp+0x24, eax)
    char var5; // lea(eax, esp+0xc), lea(esi, esp+0x4), lea(edi, esp+0x14) 
  
    //call read_six_numbers
    read_six_numbers(var, (int)&var3); 
    if ( var3 || var4 != 1 ) //cmp [esp+0x4] atau [esp+0x8] dengan 0x1
    { 
        bad_instruction(); // jne *HQ+60
    }
    var2 = &var3; 

    do{
    if ( var2[2] != *var2 + var2[1] ) //cmp  [esi+0x8] dengan eax
    { 
        bad_instruction(); //jne
    }
    ++var2; //add esi,0x4
    }while ( var2 != (int *)&var5 ); //cmp (esi,edi)
}