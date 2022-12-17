#import <Foundation/Foundation.h>
#import "DTConfig.h"
NS_ASSUME_NONNULL_BEGIN

@interface DTAnalytics : NSObject

+ (void)initializeWithConfig:(DTConfig *)config;

+ (void)trackEventName:(NSString *)eventName;

+ (void)trackEventName:(NSString *)eventName properties:(NSDictionary *)properties;

/**
 设置用户属性

 @param properties 用户属性
 */
+ (void)userSet:(NSDictionary *)properties;

/**
 重置用户属性
 
 @param propertyName 用户属性
 */
+ (void)userUnset:(NSString *)propertyName;

/**
 设置单次用户属性

 @param properties 用户属性
 */
+ (void)userSetOnce:(NSDictionary *)properties;

/**
 对数值类型用户属性进行累加操作

 @param properties 用户属性
 */
+ (void)userAdd:(NSDictionary *)properties;

/**
 删除用户 该操作不可逆 需慎重使用
 */
+ (void)userDelete;

/**
 对 Array 类型的用户属性进行追加操作
 
 @param properties 用户属性
*/
+ (void)userAppend:(NSDictionary<NSString *, NSArray *> *)properties;

/// 设置自有用户系统的id
/// - Parameters:
///   - accountId: 用户系统id
+ (void)setAccountId:(NSString *)accountId;

/// 设置Firebase的app_instance_id
/// - Parameters:
///   - fiid: Firebase 的 app_instance_id
+ (void)setFirebaseAppInstanceId:(NSString *)fiid;

/// 设置AppsFlyer的appsflyer_id
/// - Parameters:
///   - afuid: AppsFlyer的appsflyer_id
+ (void)setAppsFlyerId:(NSString *)afid;

/// 设置kochava iid
/// - Parameters:
///   - afuid: AppsFlyer的appsflyer_id
+ (void)setKochavaId:(NSString *)koid;

/// 设置AdjustId
/// - Parameter adjustId: AdjustId
+ (void)setAdjustId:(NSString *)adjustId;

/// 设置订阅原始订单id
/// - Parameters:
///   - orderId : 订阅原始订单id
+ (void)setIasOriginalOrderId:(NSString *)oorderId;


+ (NSString *)getDataTowerId;

@end

NS_ASSUME_NONNULL_END
