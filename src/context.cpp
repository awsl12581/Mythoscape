#include "context.h"

namespace mythoscape::context
{

Context* GetContext()
{
    static Context contextInstance;
    return &contextInstance;
}

}
