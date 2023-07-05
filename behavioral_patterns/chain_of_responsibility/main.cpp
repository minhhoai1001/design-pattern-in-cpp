#include <memory>
#include "include/lazySupporter.h"
#include "include/limitedSupporter.h"
#include "include/moodySupporter.h"
#include "include/specialSupporter.h"

int main(int argc, char* argv[])
{
    std::unique_ptr<LazySupporter> emily (new LazySupporter("Emily"));
    std::unique_ptr<MoodySupporter> william(new MoodySupporter("William"));
    std::unique_ptr<SpecialSupporter> amelia (new SpecialSupporter("Amelia", 6));
    std::unique_ptr<LimitSupporter> joseph (new LimitSupporter("Joseph", 5));

    // make a chain
    emily->setNext(william.get())->setNext(amelia.get())->setNext(joseph.get());

    // Various troubles occurred.
    for (int i=0; i<10; i++)
    {
        std::unique_ptr<Trouble> trouble (new Trouble(i));
        emily->support(trouble.get());
    }

    return 0;
}