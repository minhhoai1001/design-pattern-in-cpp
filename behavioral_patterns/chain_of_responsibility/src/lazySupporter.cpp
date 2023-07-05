#include "include/lazySupporter.h"

LazySupporter::LazySupporter(const string& name)
    :Supporter(name)
{

}

LazySupporter::~LazySupporter()
{

}

bool LazySupporter::canHandle(const Trouble* trouble) const
{
    return false;
}