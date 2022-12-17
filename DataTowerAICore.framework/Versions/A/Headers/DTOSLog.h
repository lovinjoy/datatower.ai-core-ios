#import <Foundation/Foundation.h>

#if __has_include(<ThinkingSDK/TDConstant.h>)
#import <ThinkingSDK/DTConstant.h>
#else
#import "DTConstant.h"
#endif

@class DTLogMessage;
@protocol DTLogger;

NS_ASSUME_NONNULL_BEGIN

@interface DTOSLog : NSObject

+ (void)log:(BOOL)asynchronous
    message:(NSString *)message
       type:(DTLoggingLevel)type;

@end

@protocol DTLogger <NSObject>

- (void)logMessage:(DTLogMessage *)logMessage;

@optional

@property (nonatomic, strong, readonly) dispatch_queue_t loggerQueue;

@end

@interface DTLogMessage : NSObject

- (instancetype)initWithMessage:(NSString *)message
                           type:(DTLoggingLevel)type;

@end

@interface DTAbstractLogger : NSObject <DTLogger>

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
