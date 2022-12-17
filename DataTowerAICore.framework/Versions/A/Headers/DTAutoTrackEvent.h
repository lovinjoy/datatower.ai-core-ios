//
//  TAAutoTrackEvent.h
//
//
//
//

#import "DTTrackEvent.h"
#import "DTConstant.h"

NS_ASSUME_NONNULL_BEGIN

@interface DTAutoTrackEvent : DTTrackEvent

/// 用于记录自动采集事件的动态公共属性，动态公共属性需要在事件发生的当前线程获取
@property (nonatomic, strong) NSDictionary *autoDynamicSuperProperties;

/// 用于记录自动采集事件的静态公共属性
@property (nonatomic, strong) NSDictionary *autoSuperProperties;

/// 返回自动采集类型
- (DTAutoTrackEventType)autoTrackEventType;

@end

NS_ASSUME_NONNULL_END
