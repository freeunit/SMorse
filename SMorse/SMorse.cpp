/*
 За еденицу времени принимается интервал равный одной точке. 
 Длительность тире равна интервалу времени трех точек.
 Пауза между элементами одного знака - одна точка.
 Пауза между знаками в слове - три точки.
 Пауза между словами - 7 точек.
 SMorse.h - библиотека позволяет генерировать сигнал Морзе
 из сериал порта.
 Автор Akhmedov Tim <freeunit>. Tashkent, 7 ноября 2016.
 Выпущено для публичного использования.
*/ 
#include "Arduino.h"
#include "SMorse.h"
 
SMorse::SMorse(int pin, int dot, int note)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  _dot = dot;
  _note = note;
}
 
void SMorse::dot()
{
  tone(_pin, _note);
  delay(_dot);
  noTone(_pin);
  delay(_dot);  
}
 
void SMorse::dash()
{
  tone(_pin, _note);
  delay(3*_dot);
  noTone(_pin);
  delay(_dot);
}

void SMorse::end_char()
{
  delay(3*_dot);
}

void SMorse::end_word()
{
  delay(7*_dot);
}

void SMorse::avail(int message)
{
	switch (message)
	{
		case 97:a();break;
		case 98:b();break;
		case 99:c();break;
		case 100:d();break;
		case 101:e();break;
		case 102:f();break;
		case 103:g();break;
		case 104:h();break;
		case 105:i();break;
		case 106:j();break;		
		case 107:k();break;
		case 108:l();break;
		case 109:m();break;
		case 110:n();break;
		case 111:o();break;
		case 112:p();break;
		case 113:q();break;
		case 114:r();break;
		case 115:s();break;
		case 116:t();break;
		case 117:u();break;
		case 118:v();break;
		case 119:w();break;		
		case 120:x();break;
		case 121:y();break;
		case 122:z();break;
		case 49:one();break;
		case 50:two();break;
		case 51:three();break;
		case 52:four();break;
		case 53:five();break;
		case 54:six();break;
		case 55:seven();break;
		case 56:eight();break;		
		case 57:nine();break;
		case 48:zero();break;
		case 32:end_word();break;
	}
}

void SMorse::a(){dot(); dash(); end_char();}
void SMorse::b(){dash(); dot(); dot(); dot(); end_char();}
void SMorse::c(){dash(); dot(); dash(); dot(); end_char();}
void SMorse::d(){dash(); dot(); dot(); end_char();}
void SMorse::e(){dot(); end_char();}
void SMorse::f(){dot(); dot(); dash(); dot(); end_char();}
void SMorse::g(){dash(); dash(); dot(); end_char();}
void SMorse::h(){dot(); dot(); dot(); dot(); end_char();}
void SMorse::i(){dot(); dot(); end_char();}
void SMorse::j(){dot(); dash(); dash(); dash(); end_char();}
void SMorse::k(){dash(); dot(); dash(); end_char();}
void SMorse::l(){dot(); dash(); dot(); dot(); end_char();}
void SMorse::m(){dash(); dash(); end_char();}
void SMorse::n(){dash(); dot(); end_char();}
void SMorse::o(){dash(); dash(); dash(); end_char();}
void SMorse::p(){dot(); dash(); dash(); dot(); end_char();}
void SMorse::q(){dash(); dash(); dot(); dash(); end_char();}
void SMorse::r(){dot(); dash(); dot(); end_char();}
void SMorse::s(){dot(); dot(); dot(); end_char();}
void SMorse::t(){dash(); end_char();}
void SMorse::u(){dot(); dot(); dash(); end_char();}
void SMorse::v(){dot(); dot(); dot(); dash(); end_char();}
void SMorse::w(){dot(); dash(); dash(); end_char();}
void SMorse::x(){dash(); dot(); dot(); dash(); end_char();}
void SMorse::y(){dash(); dot(); dash(); dash(); end_char();}
void SMorse::z(){dash(); dash(); dot(); dot(); end_char();}
void SMorse::one(){dot(); dash(); dash(); dash(); dash(); end_char();}
void SMorse::two(){dot(); dot(); dash(); dash(); dash(); end_char();}
void SMorse::three(){dot(); dot(); dot(); dash(); dash(); end_char();}
void SMorse::four(){dot(); dot(); dot(); dot(); dash(); end_char();}
void SMorse::five(){dot(); dot(); dot(); dot(); dot(); end_char();}
void SMorse::six(){dash(); dot(); dot(); dot(); dot(); end_char();}
void SMorse::seven(){dash(); dash(); dot(); dot(); dot(); end_char();}
void SMorse::eight(){dash(); dash(); dash(); dot(); dot(); end_char();}
void SMorse::nine(){dash(); dash(); dash(); dash(); dot(); end_char();}
void SMorse::zero(){dash(); dash(); dash(); dash(); dash(); end_char();}
