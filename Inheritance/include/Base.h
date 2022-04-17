/*
 * Base.h
 */

#ifndef BASE_H_
#define BASE_H_

namespace inheritance {


class Base {
public:

	Base();
    virtual ~Base();

	void OnlyInBase();
	int Func();
	virtual int VFunc();

protected:
	unsigned int id;
};

} /* namespace inheritance */

#endif /* BASE_H_ */
