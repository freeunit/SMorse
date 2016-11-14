/*
 SMorse.h - библиотека позволяет генерировать сигнал Морзе из сериал порта
 Автор Akhmedov Tim <freeunit>. Tashkent, 7 ноября 2016.
 Выпущено для публичного использования.
*/
#ifndef Morse_h
#define Morse_h
 
#include "Arduino.h"
 
class SMorse
{
  public:
    SMorse(int, int, int);
    void avail(int);
	void dot();
    void dash();
	void end_char();
	void end_word();
	void a();
	void b();
	void c();
	void d();
	void e();
	void f();
	void g();
	void h();
	void i();
	void j();
	void k();
	void l();
	void m();
	void n();
	void o();
	void p();
	void q();
	void r();
	void s();
	void t();
	void u();
	void v();
	void w();
	void x();
	void y();
	void z();
	void one();
	void two();
	void three();
	void four();
	void five();
	void six();
	void seven();
	void eight();
	void nine();
	void zero();
  private:
    int _pin;
	int _dot;
	int _note;
};
 
#endif
