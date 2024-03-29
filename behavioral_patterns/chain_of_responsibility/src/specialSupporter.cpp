#include "include/specialSupporter.h"

SpecialSupporter::SpecialSupporter(const string& name, const int target_id)
    :target_id(target_id), Supporter(name)
{

}

SpecialSupporter::~SpecialSupporter()
{

}

bool SpecialSupporter::canHandle(const Trouble* trouble) const
{
    return trouble->id == target_id;
}