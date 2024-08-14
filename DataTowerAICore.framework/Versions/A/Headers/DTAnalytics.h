#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTAnalytics : NSObject


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

/**
 对 Array 类型的用户属性进行追加操作，并且会对数组元素去重
 
 @param properties 用户属性
*/
+ (void)userUniqAppend:(NSDictionary<NSString *, NSArray *> *)properties;

/// 设置自有用户系统的id
/// - Parameters:
///   - accountId: 用户系统id
+ (void)setAccountId:(NSString *)accountId;

/// 设置访客id
/// - Parameters:
///   - accountId: 访客id，必须唯一
//+ (void)setDistinctId:(NSString *)distinctId;

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

/// 设置TenjinId
/// - Parameter TenjinId: TenjinId
+ (void)setTenjinId:(NSString *)tenjinId;

/// 设置订阅原始订单id
/// - Parameters:
///   - orderId : 订阅原始订单id
+ (void)setIasOriginalOrderId:(NSString *)oorderId;


+ (NSString *)getDataTowerId;

+ (NSString *)getDistinctId;

+ (void)setEnableTracking:(BOOL)track;

+ (void)setSuperProperties:(nullable NSDictionary *)superProps;

+ (void)setDynamicSuperProperties:(NSDictionary<NSString *, id> *(^ _Nullable)(void))dynamicSuperProperties;

@end

NS_ASSUME_NONNULL_END
