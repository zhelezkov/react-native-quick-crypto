#ifndef MGLVerifyInstaller_h
#define MGLVerifyInstaller_h

#include <jsi/jsi.h>

#include <memory>

#ifdef __ANDROID__
#include "JSIUtils/MGLSmartHostObject.h"
#else
#include "MGLSmartHostObject.h"
#endif

namespace margelo {
namespace jsi = facebook::jsi;

FieldDefinition getVerifyFieldDefinition(
    std::shared_ptr<react::CallInvoker> jsCallInvoker,
    std::shared_ptr<DispatchQueue::dispatch_queue> workerQueue);
}  // namespace margelo

#endif /* MGLVerifyInstaller_h */
