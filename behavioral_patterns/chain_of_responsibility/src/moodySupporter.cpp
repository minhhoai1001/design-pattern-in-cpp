#include "include/moodySupporter.h"

MoodySupporter::MoodySupporter(const string& name)
    :Supporter(name)
{   

}

MoodySupporter::~MoodySupporter()
{

}

bool MoodySupporter::canHandle(const Trouble* trouble) const
{
    return trouble->id % 2 == 1;
}