#include "localstorage.h"

#include "mvalue.h"
#include "utils/strings.h"

#ifdef ALT_CLIENT_API
void LocalStorage_SetKey(alt::ILocalStorage* localStorage, const char* key, alt::MValueConst* value) {
    localStorage->Set(key, *((alt::MValue*) value));
}

void LocalStorage_DeleteKey(alt::ILocalStorage* localStorage, const char* key) {
    localStorage->Delete(key);
}

alt::MValueConst* LocalStorage_GetKey(alt::ILocalStorage* localStorage, const char* key) {
    return AllocMValue(localStorage->Get(key));
}

void LocalStorage_Clear(alt::ILocalStorage* localStorage) {
    localStorage->Clear();
}

void LocalStorage_Save(alt::ILocalStorage* localStorage) {
    localStorage->Save();
}
#endif