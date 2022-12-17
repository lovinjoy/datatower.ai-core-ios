#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTAnalyticsUtils : NSObject

/// 初始化事件的计时器，计时单位为毫秒。
/// - Parameters:
///     - eventName:事件的名称
+ (void)trackTimerStart:(NSString *)eventName;

/// 暂停事件的计时器，计时单位为毫秒。
/// - Parameters:
///     - eventName:事件的名称
+ (void)trackTimerPause:(NSString *)eventName;

/// 恢复事件的计时器，计时单位为毫秒。
/// - Parameters:
///     - eventName:事件的名称
+ (void)trackTimerResume:(NSString *)eventName;

/// 停止事件的计时器
/// - Parameters:
///    - eventName:事件的名称
///    - properties:自定义事件的属性
+ (void)trackTimerEnd:(NSString *)eventName properties:(NSDictionary *)properties;

/// 停止事件的计时器
/// - Parameters:
///    - eventName:事件的名称
+ (void)trackTimerEnd:(NSString *)eventName;
@end

NS_ASSUME_NONNULL_END
