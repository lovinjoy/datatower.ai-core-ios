//
//  DTEventTracker.h
//
//
//
//

#import <Foundation/Foundation.h>

#if __has_include(<ThinkingSDK/DTConstant.h>)
#import <ThinkingSDK/DTConstant.h>
#else
#import "DTConstant.h"
#endif

#import "DTSecurityPolicy.h"


NS_ASSUME_NONNULL_BEGIN

@class DTEventTracker;

@interface DTEventTracker : NSObject

- (dispatch_queue_t)dt_networkQueue;

- (instancetype)initWithQueue:(dispatch_queue_t)queue;

- (void)flush;

- (void)track:(NSDictionary *)event sync:(NSString *)sync immediately:(BOOL)immediately;

- (void)saveEventsData:(NSDictionary *)data sync:(NSString *)sync;

- (void)_asyncWithCompletion:(void(^)(void))completion;

/// 同步把网络队列中的数据发送完毕
- (void)syncSendAllData;

#pragma mark - UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
