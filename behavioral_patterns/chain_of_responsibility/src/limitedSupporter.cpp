#include "include/limitedSupporter.h"

LimitSupporter::LimitSupporter(const string& name, const int limit_id)
    : limit_id(limit_id), Supporter(name)
{

}

LimitSupporter::~LimitSupporter()
{

}

bool LimitSupporter::canHandle(const Trouble* trouble) const
{
    return trouble->id <= limit_id;
}