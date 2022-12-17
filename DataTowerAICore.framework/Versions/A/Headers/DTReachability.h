

#import <Foundation/Foundation.h>
#import "DTConstant.h"

NS_ASSUME_NONNULL_BEGIN

@interface DTReachability : NSObject

+ (DTNetworkType)convertNetworkType:(NSString *)networkType;

/// 获取网络状态监听类
+ (instancetype)shareInstance;

/// 开启网络状态监听
- (void)startMonitoring;

/// 停止网络状态监听
- (void)stopMonitoring;

/// 获取网络状态
- (NSString *)networkState;


@end

NS_ASSUME_NONNULL_END
