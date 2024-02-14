#ifdef __cplusplus
#import "react-native-test-module.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestModuleSpec.h"

@interface TestModule : NSObject <NativeTestModuleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TestModule : NSObject <RCTBridgeModule>
#endif

@end
