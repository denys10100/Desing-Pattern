#include <iostream>
#include <string>

#include "ConcretePrintableString.h"
#include "PrintableStringDecorator.h"
#include "PostComaDecorator.h"
#include "PostEndlDecorator.h"
#include "PostSpaceDecorator.h"
#include "PostExclaimDecorator.h"
#include "PostWordDecorator.h"
#include "PreWordDecorator.h"


int main()
{
    PrintableString* printableString = new ConcretePrintableString("");

    // ��������� ���������� �� �������� �����
    PrintableString* decoratedString = new PostComaDecorator(new PostWordDecorator(new PostExclaimDecorator(new PostSpaceDecorator(new PreWordDecorator(new ConcretePrintableString(""), "Hello,")), "World")), "!"));

    decoratedString->print(); // ��������� ������������� �����

    delete decoratedString;
    delete printableString;

    return 0;
}
