#import <Foundation/Foundation.h>

#if __has_include(<ThinkingSDK/DTConstant.h>)
#import <ThinkingSDK/DTConstant.h>
#else
#import "DTConstant.h"
#endif


NS_ASSUME_NONNULL_BEGIN

#define DTLogDebug(message, ...)  DTLogWithType(DTLoggingLevelDebug, message, ##__VA_ARGS__)
#define DTLogInfo(message,  ...)  DTLogWithType(DTLoggingLevelInfo, message, ##__VA_ARGS__)
#define DTLogError(message, ...)  DTLogWithType(DTLoggingLevelError, message, ##__VA_ARGS__)

#define DTLogWithType(type, message, ...) \
{ \
if ([DTLogging sharedInstance].loggingLevel != DTLoggingLevelNone && type <= [DTLogging sharedInstance].loggingLevel) \
{ \
[[DTLogging sharedInstance] logCallingFunction:type format:(message), ##__VA_ARGS__]; \
} \
}



@interface DTLogging : NSObject

@property (class, nonatomic, readonly) DTLogging *sharedInstance;
@property (assign, nonatomic) DTLoggingLevel loggingLevel;
- (void)logCallingFunction:(DTLoggingLevel)type format:(id)messageFormat, ...;

@end

NS_ASSUME_NONNULL_END
