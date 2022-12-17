//
//  DTBaseEvent.h
//
//
//
//

#import <Foundation/Foundation.h>
#import "DTPropertyValidator.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *kDTEventType;
typedef NSString *kEDEventTypeName;

static NSString * const DT_APP_START_EVENT                  = @"#session_start";
static NSString * const DT_APP_START_BACKGROUND_EVENT       = @"#session_start";
static NSString * const DT_APP_END_EVENT                    = @"#session_end";
static NSString * const DT_APP_VIEW_EVENT                   = @"ta_app_view";
static NSString * const DT_APP_CLICK_EVENT                  = @"ta_app_click";
static NSString * const DT_APP_CRASH_EVENT                  = @"ta_app_crash";
static NSString * const DT_APP_INSTALL_EVENT                = @"#app_install";
static NSString * const DT_APP_INITIALIZE                   = @"#app_initialize";


static NSString * const COMMON_PROPERTY_EVENT_SESSION            = @"#session_id";
static NSString * const COMMON_PROPERTY_EVENT_SESSION_DURATION  = @"#session_duration";
static NSString * const COMMON_PROPERTY_MCC                      = @"#mcc";
static NSString * const COMMON_PROPERTY_MNC                      = @"#mnc";
static NSString * const COMMON_PROPERTY_OS_COUNTRY               = @"#os_country_code";
static NSString * const COMMON_PROPERTY_OS_LANG                  = @"#os_lang_code";
static NSString * const COMMON_PROPERTY_APP_VERSION_CODE         = @"#app_version_code";
static NSString * const COMMON_PROPERTY_APP_VERSION_NAME         = @"#app_version_name";
static NSString * const COMMON_PROPERTY_SDK_TYPE                 = @"#sdk_type";
static NSString * const COMMON_PROPERTY_SDK_VERSION              = @"#sdk_version_name";
static NSString * const COMMON_PROPERTY_OS                       = @"#os";
static NSString * const COMMON_PROPERTY_OS_VERSION_NAME          = @"#os_version_name";
static NSString * const COMMON_PROPERTY_DEVICE_MANUFACTURER      = @"#device_manufacturer";
static NSString * const COMMON_PROPERTY_DEVICE_BRAND             = @"#device_brand";
static NSString * const COMMON_PROPERTY_DIMS_DPI                 = @"#dims_dpi";
static NSString * const COMMON_PROPERTY_NETWORK_TYPE             = @"#network_type";
static NSString * const COMMON_PROPERTY_SIMULATOR                = @"#simulator";
static NSString * const COMMON_PROPERTY_MEMORY_USED              = @"#memory_used";
static NSString * const COMMON_PROPERTY_FPS                      = @"#fps";
static NSString * const COMMON_PROPERTY_STORAGE_USED             = @"#storage_used";
static NSString * const COMMON_PROPERTY_DEVICE_MODEL             = @"#device_model";
static NSString * const COMMON_PROPERTY_SCREEN_HEIGHT            = @"#screen_height";
static NSString * const COMMON_PROPERTY_SCREEN_WIDTH             = @"#screen_width";
static NSString * const COMMON_PROPERTY_IS_FOREGROUND            = @"#is_foreground";
static NSString * const COMMON_PROPERTY_EVENT_DURATION           = @"#event_duration";
static NSString * const COMMON_PROPERTY_IAS_ORIGINAL_ORDER_ID    = @"#ias_ooid";

static NSString * const DT_CRASH_REASON                     = @"#app_crashed_reason";
static NSString * const DT_RESUME_FROM_BACKGROUND           = @"#resume_from_background";
static NSString * const DT_START_REASON                     = @"#start_reason";
static NSString * const DT_BACKGROUND_DURATION              = @"#background_duration";


static kEDEventTypeName const DT_EVENT_TYPE_TRACK           = @"track";
static kEDEventTypeName const DT_EVENT_TYPE_USER            = @"user";
static kEDEventTypeName const DT_EVENT_TYPE_TRACK_FIRST     = @"track_first";
static kEDEventTypeName const DT_EVENT_TYPE_TRACK_UPDATE    = @"track_update";
static kEDEventTypeName const DT_EVENT_TYPE_TRACK_OVERWRITE = @"track_overwrite";

static kEDEventTypeName const DT_EVENT_TYPE_USER_DEL        = @"#user_del";
static kEDEventTypeName const DT_EVENT_TYPE_USER_ADD        = @"#user_add";
static kEDEventTypeName const DT_EVENT_TYPE_USER_SET        = @"#user_set";
static kEDEventTypeName const DT_EVENT_TYPE_USER_SETONCE    = @"#user_set_once";
static kEDEventTypeName const DT_EVENT_TYPE_USER_UNSET      = @"#user_unset";
static kEDEventTypeName const DT_EVENT_TYPE_USER_APPEND     = @"#user_append";
static kEDEventTypeName const DT_EVENT_TYPE_USER_UNIQ_APPEND= @"#user_uniq_append";



typedef NS_OPTIONS(NSUInteger, DTEventType) {
    DTEventTypeNone = 0,
    DTEventTypeTrack = 1 << 0,
    DTEventTypeTrackFirst = 1 << 1,
    DTEventTypeTrackUpdate = 1 << 2,
    DTEventTypeTrackOverwrite = 1 << 3,
    DTEventTypeUserSet = 1 << 4,
    DTEventTypeUserUnset = 1 << 5,
    DTEventTypeUserAdd = 1 << 6,
    DTEventTypeUserDel = 1 << 7,
    DTEventTypeUserSetOnce = 1 << 8,
    DTEventTypeUserAppend = 1 << 9,
    DTEventTypeUserUniqueAppend = 1 << 10,
    DTEventTypeAll = 0xFFFFFFFF,
};

//extern kTAEventType const kTAEventTypeTrack;
//extern kTAEventType const kTAEventTypeTrackFirst;
//extern kTAEventType const kTAEventTypeTrackUpdate;
//extern kTAEventType const kTAEventTypeTrackOverwrite;
//extern kTAEventType const kTAEventTypeUserSet;
//extern kTAEventType const kTAEventTypeUserUnset;
//extern kTAEventType const kTAEventTypeUserAdd;
//extern kTAEventType const kTAEventTypeUserDel;
//extern kTAEventType const kTAEventTypeUserSetOnce;
//extern kTAEventType const kTAEventTypeUserAppend;
//extern kTAEventType const kTAEventTypeUserUniqueAppend;

typedef NS_OPTIONS(NSInteger, DTEventTimeValueType) {
    DTEventTimeValueTypeNone = 0, // 用户没有指定时间
    DTEventTimeValueTypeTimeOnly = 1 << 0, // 用户只指定时间，没有指定时区
    DTEventTimeValueTypeTimeAndZone = 1 << 1, // 用户指定时间+时区
};

@interface DTBaseEvent : NSObject<DTEventPropertyValidating>
@property (nonatomic, assign) DTEventType eventType;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *accountId;
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *dtid;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, assign) BOOL isDebug;

/// 事件真正的时间戳
@property (nonatomic, assign) NSTimeInterval time;

/// 记录事件发生时的开机时间节点。用于统计事件累计时长
@property (nonatomic, assign) NSTimeInterval systemUpTime;
/// 事件名字
@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, strong) NSTimeZone *timeZone;
@property (nonatomic, strong, readonly) NSDateFormatter *timeFormatter;
/// 传入的时间类型
@property (nonatomic, assign) DTEventTimeValueType timeValueType;
@property (nonatomic, strong) NSMutableDictionary *properties;
/// 是否需要立即上传
@property (nonatomic, assign) BOOL immediately;

/// 标识是否暂停网络上报，默认 NO 上报网络正常流程；YES 入本地数据库但不网络上报
@property (atomic, assign, getter=isTrackPause) BOOL trackPause;
/// 标识SDK是否继续采集事件
@property (nonatomic, assign) BOOL isEnabled;
/// 标识SDK是否停止
@property (atomic, assign) BOOL isOptOut;

- (instancetype)initWithType:(DTEventType)type;

/// 验证事件对象是否合法
/// @param error 错误信息
- (void)validateWithError:(NSError **)error;

/// 用于上报的json对象
- (NSMutableDictionary *)jsonObject;

/// 将dict数据源中，NSDate格式的value值格式化为字符串
/// @param dict 数据源
- (NSMutableDictionary *)formatDateWithDict:(NSDictionary *)dict;

- (NSString *)eventTypeString;

- (NSNumber *)formatTime:(NSTimeInterval)time;
/// 获取事件类型
+ (DTEventType)typeWithTypeString:(NSString *)typeString;



@end

NS_ASSUME_NONNULL_END
