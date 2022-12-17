//
//  DTAppState.h
//
//
//
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTAppState : NSObject
/// 是否是在后台启动。当静默推送后台唤醒、地理位置改变唤醒app 的时候，value = YES。（线程安全）
@property (atomic, assign) BOOL relaunchInBackground;

/// 当前app是否在前台
@property (atomic, assign) BOOL isActive;

+ (instancetype)shareInstance;

/// 在App Extension 环境调用，返回nil
+ (id)sharedApplication;

+ (BOOL)runningInAppExtension;

@end

NS_ASSUME_NONNULL_END
