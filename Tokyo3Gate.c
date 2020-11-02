/*Nama  : Nabilah Erfariani
  NIM   : 13519181
  Kelas : 01
  File  : Tokyo3Gate.c
  Tanggal: 30 Oktober 2020
*/

void Tokyo3Gate(char *var)
{
    signed int condition; //push eax
    //call strings_not_equal
    condition = strings_not_equal(var, "You've come to understand the path of explosions, Kazuma. How about it?");
    if (condition){
        bad_instruction(); //jne Tokyo3Gate+43
    }
}