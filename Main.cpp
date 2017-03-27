#include <vector>
#include <string>
#include <iostream>



#include <fstream>//para archivos binarios

using namespace std;


string dibujolink();
string dibujodemonio();






int main()
{

  cout<<dibujolink()+"";
  cout<<endl<<"EASTER EGG"<<endl<<dibujodemonio();




  //probar escritura itemcuracion
ofstream itemcuracion;
itemcuracion.open("itemcuracion.bin",ios::out);
Curativas* curativa = new Curativas("dildo",200,300);

curativa->write(itemcuracion);

itemcuracion.close();

//delete curativa;


Curativas* curativa2 = new Curativas("",0,0);

ifstream curativain;

curativain.open("itemcuracion.bin",ios::binary);

curativa2->read(ataquesEspIn);

cout <<endl<<"Prueba de sonido: "<< curativa2->getEnergia()<<endl;

delete especial;

ataquesEspIn.close();



  return 0;
}

string dibujolink()
{
  
string linkp="      .---_   _--._---.__ \n    /   _ \\/\\     \\     ''-. \n   |   / \\ | \\      '.     '.     .'¯| \n   |  / __\\|  '.      '.     '    \\ _| \n   | | |_  .-'_'.      .    _.-|  $$ \n   | | \\U\\ .¯U' '..    _.-' .'  $$ \n    \\| /¯ /  ¯¯     ' |'   .'|   $$ \n      \\| '-          '|  .'  |  $$ \n        \\ --         /.      \\ $$ \n         \\          .'   __   |$$ \n          '.   ___.'  | ////¯¯''.._ \n            ¯|¯      _'.//_ ..   |||| \n       _ .-¯|\\|----¯¯¯  |\\|¯¯|---|||| \n    .-¯.'  |  X      .''  \\  |       ''. \n   '    ''..      .''__... |/           '. \n   | |    .|   .' .-   / \\|              | \n  /  '      '.'...'   /  /               | \n /_ |        '       /  /     |          | \n  |¯|                 '  '     \\| __.-.___.' \n  | |              /  /        |\\         \\  \n  | .             /  /           |        . \n  | '            '  '            |        ' \n   \\ .        /  /               '        | \n   /  '      '  '                 |       \\ \n  /   '                           |        |";
  return linkp;
}

string dibujodemonio()
{
  string mon="\n   .__                           __.\n  \\ `\\~~---..---~~~~~~--.---~~| /   \n   `~-.   `                   .~         _____ \n       ~.                .--~~    .---~~~    /\n        / .-.      .-.      |  <~~        __/\n       |  |_|      |_|       \\  \\     .--'\n      /-.      -       .-.    |  \\_   \\_\n      \\-'   -..-..-    `-'    |    \\__  \\_ \n       `.                     |     _/  _/\n         ~-                .,-\\   _/  _/\n        /                 -~~~~\\ /_  /_\n       |               /   |    \\  \\_  \\_ \n       |   /          /   /      | _/  _/\n       |  |          |   /    .,-|/  _/ \n       )__/           \\_/    -~~~| _/\n         \\                      /  \\\n          |           |        /_---` \n          \\    .______|      ./\n          (   /        \\    /        \n          `--'          /__/";
  return mon;
}