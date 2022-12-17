
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//latest
static NSString * const USER_PROPERTY_LATEST_DEBUG                = @"#latest_debug";
static NSString * const USER_PROPERTY_LATEST_FIREBASE_IID         = @"#latest_firebase_iid";
static NSString * const USER_PROPERTY_LATEST_APPSFLYER_ID         = @"#latest_appsflyer_id";
static NSString * const USER_PROPERTY_LATEST_KOCHAVA_ID           = @"#latest_kochava_id";
static NSString * const USER_PROPERTY_LATEST_APP_VERSION_CODE     = @"#latest_app_version_code";
static NSString * const USER_PROPERTY_LATEST_APP_VERSION_NAME     = @"#latest_app_version_name";
static NSString * const USER_PROPERTY_LATEST_ADJUST_ID            = @"#latest_adjust_id";

//active
static NSString * const USER_PROPERTY_ACTIVE_MCC                 = @"#active_mcc";
static NSString * const USER_PROPERTY_ACTIVE_MNC                 = @"#active_mnc";
static NSString * const USER_PROPERTY_ACTIVE_OS_COUNTRY          = @"#active_os_country_code";
static NSString * const USER_PROPERTY_ACTIVE_OS_LANG             = @"#active_os_lang_code";
static NSString * const USER_PROPERTY_ACTIVE_PKG                 = @"#active_bundle_id";
static NSString * const USER_PROPERTY_ACTIVE_APP_VERSION_CODE    = @"#active_app_version_code";
static NSString * const USER_PROPERTY_ACTIVE_APP_VERSION_NAME    = @"#active_app_version_name";
static NSString * const USER_PROPERTY_ACTIVE_SDK_TYPE            = @"#active_sdk_type";
static NSString * const USER_PROPERTY_ACTIVE_SDK_VERSION         = @"#active_sdk_version_name";
static NSString * const USER_PROPERTY_ACTIVE_OS                  = @"#active_os";
static NSString * const USER_PROPERTY_ACTIVE_OS_VERSION_NAME     = @"#active_os_version_name";
static NSString * const USER_PROPERTY_ACTIVE_OS_VERSION_CODE     = @"#active_os_version_code";
static NSString * const USER_PROPERTY_ACTIVE_DEVICE_MANUFACTURER = @"#active_device_manufacturer";
static NSString * const USER_PROPERTY_ACTIVE_DEVICE_BRAND        = @"#active_device_brand";
static NSString * const USER_PROPERTY_ACTIVE_DEVICE_MODEL        = @"#active_device_model";
static NSString * const USER_PROPERTY_ACTIVE_SCREEN_HEIGHT       = @"#active_screen_height";
static NSString * const USER_PROPERTY_ACTIVE_SCREEN_WIDTH        = @"#active_screen_width";
static NSString * const USER_PROPERTY_ACTIVE_DIMS_DPI            = @"#active_dims_dpi";
static NSString * const USER_PROPERTY_ACTIVE_MEMORY_USED         = @"#active_memory_used";
static NSString * const USER_PROPERTY_ACTIVE_STORAGE_USED        = @"#active_storage_used";
static NSString * const USER_PROPERTY_ACTIVE_NETWORK_TYPE        = @"#active_network_type";
static NSString * const USER_PROPERTY_ACTIVE_SIMULATOR           = @"#active_simulator";
static NSString * const USER_PROPERTY_ACTIVE_USER_AGENT          = @"#active_user_agent";

@interface DTPresetProperties : NSObject

@property (nonatomic, copy, readonly) NSString *bundle_id;
@property (nonatomic, copy, readonly) NSString *carrier;
@property (nonatomic, copy, readonly) NSString *device_id;
@property (nonatomic, copy, readonly) NSString *device_model;
@property (nonatomic, copy, readonly) NSString *manufacturer;
@property (nonatomic, copy, readonly) NSString *network_type;
@property (nonatomic, copy, readonly) NSString *os;
@property (nonatomic, copy, readonly) NSString *os_version;
@property (nonatomic, copy, readonly) NSNumber *screen_height;
@property (nonatomic, copy, readonly) NSNumber *screen_width;
@property (nonatomic, copy, readonly) NSString *system_language;
@property (nonatomic, copy, readonly) NSNumber *zone_offset;

- (instancetype)initWithDictionary:(NSDictionary *)dict ;
/**
 * 返回事件预置属性的Key以"#"开头，不建直接作为事件的Property使用
 */
- (NSDictionary *)toEventPresetProperties;

- (NSDictionary *)getActivePresetProperties;

- (NSDictionary *)getLatestPresetProperties;


@end

NS_ASSUME_NONNULL_END
