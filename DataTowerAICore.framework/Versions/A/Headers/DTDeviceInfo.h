#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString *const VERSION;

@interface DTDeviceInfo : NSObject

+ (DTDeviceInfo *)sharedManager;


@property (nonatomic, copy) NSString *uniqueId;// 默认访客ID，一般是设备ID+安装次数组成
@property (nonatomic, copy) NSString *deviceId;// 设备id
@property (nonatomic, copy) NSString *userAgent;// 浏览器ua
@property (nonatomic, copy) NSString *appVersion;// app版本名
@property (nonatomic, copy) NSNumber *appVersionCode;// app版本号
@property (nonatomic, readonly) BOOL isFirstOpen;// 是否是第一次启动
@property (nonatomic, readonly) BOOL isAppInsatlled;//已安装
@property (nonatomic, copy) NSString *libName; // 库名称，外层库可以修改该字段
@property (nonatomic, copy) NSString *libVersion;// 库版本号，外层库可以修改该字段

+ (NSString *)libVersion;
+ (NSString*)bundleId;
+ (NSString*)deviceId;
+ (NSString*)userAgent;

- (void)dt_updateData;
- (NSDictionary *)dt_collectProperties;

+ (NSDate *)dt_getInstallTime;

/// 获取属性
/// 注意线程问题
- (NSDictionary *)getAutomaticData;

// 获取手机供应商信息
+ (NSString *)currentRadio;

@end

NS_ASSUME_NONNULL_END
