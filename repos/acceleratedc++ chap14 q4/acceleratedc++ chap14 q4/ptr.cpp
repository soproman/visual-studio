#include "stdafx.h"
// since the onyl funciton here isnt even belonging to ptr class template
//#include"ptr.h"


//this function takes a pointer to a random class


/*
template<class T> ptr<T>::~ptr() {
	if (--*refptr == 0) {
		delete refptr;
		delete cp;
	}
}


template<class T>ptr<T>& ptr<T>::operator=(const ptr& s) {
	++(*(s.refptr));
	if (--*refptr == 0) {
		delete cp;
		delete refptr;
	}
	refptr = s.refptr;
	cp = s.cp;
	return *this;
}
*/


/*
template<class T> bool ptr<T>::compare(const ptr<T>& x, const ptr<T>& y) {
return (x->name() )< (y->name());
}
*/
