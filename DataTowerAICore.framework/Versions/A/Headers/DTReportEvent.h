
#import "DTTrackEvent.h"
#import "DTAnalyticsManager.h"

NS_ASSUME_NONNULL_BEGIN


//广告预置事件名称
static NSString * const EVENT_AD_LOAD_BEGIN       =  @"#ad_load_begin";
static NSString * const EVENT_AD_LOAD_END         =  @"#ad_load_end";
static NSString * const EVENT_AD_TO_SHOW          =  @"#ad_to_show";
static NSString * const EVENT_AD_SHOW             =  @"#ad_show";
static NSString * const EVENT_AD_SHOW_FAILED      =  @"#ad_show_failed";


static NSString * const EVENT_AD_CLOSE            =  @"#ad_close";
static NSString * const EVENT_AD_CLICK            =  @"#ad_click";
static NSString * const EVENT_AD_LEFT_APP         =  @"#ad_left_app";
static NSString * const EVENT_AD_RETURN_APP       =  @"#ad_return_app";
static NSString * const EVENT_AD_REWARDED         =  @"#ad_rewarded";
static NSString * const EVENT_AD_CONVERSION       =  @"#ad_conversion";
static NSString * const EVENT_AD_PAID             =  @"#ad_paid";


static NSString * const PROPERTY_AD_ID            = @"#ad_id";
static NSString * const PROPERTY_AD_TYPE          = @"#ad_type_code";
static NSString * const PROPERTY_AD_PLATFORM      = @"#ad_platform_code";
static NSString * const PROPERTY_AD_LOCATION      = @"#ad_location";
static NSString * const PROPERTY_AD_ENTRANCE      = @"#ad_entrance";
static NSString * const PROPERTY_AD_SEQ           = @"#ad_seq";
static NSString * const PROPERTY_AD_CONVERSION_SOURCE = @"#ad_conversion_source";
static NSString * const PROPERTY_AD_CLICK_GAP     = @"#ad_click_gap";
static NSString * const PROPERTY_AD_RETURN_GAP    = @"#ad_return_gap";

static NSString * const PROPERTY_AD_MEDIAITON      = @"#ad_mediation_code";
static NSString * const PROPERTY_AD_MEDIAITON_ID   = @"#ad_mediation_id";
static NSString * const PROPERTY_AD_VALUE_MICROS   = @"#ad_value";
static NSString * const PROPERTY_AD_CURRENCY_CODE  = @"#ad_currency";
static NSString * const PROPERTY_AD_PRECISION_TYPE = @"#ad_precision";
static NSString * const PROPERTY_AD_COUNTRY        = @"#ad_country_code";

static NSString * const PROPERTY_AD_SHOW_ERROR_CODE       = @"#error_code";
static NSString * const PROPERTY_AD_SHOW_ERROR_MESSAGE    = @"#error_message";
static NSString * const PROPERTY_LOAD_RESULT              = @"#load_result";
static NSString * const PROPERTY_LOAD_DURATION            = @"#load_duration";
static NSString * const PROPERTY_ERROR_CODE               = @"#error_code";
static NSString * const PROPERTY_ERROR_MESSAGE            = @"#error_message";


//展示订阅
static NSString * const IAS_TO_SHOW_EVENT              = @"#ias_to_show";
// 展示订阅内容成功
static NSString * const IAS_SHOW_SUCCESS_EVENT         =  @"#ias_show_success";
// 展示订阅内容失败
static NSString * const IAS_SHOW_FAIL_EVENT            =  @"#ias_show_fail";
// 点击内购
static NSString * const IAS_TO_SUBSCRIBE_EVENT         =  @"#ias_to_subscribe";
// 订阅成功
static NSString * const IAS_SUBSCRIBE_SUCCESS_EVENT =  @"#ias_subscribe_success";
// 订阅失败
static NSString * const IAS_SUBSCRIBE_FAIL_EVENT    =  @"#ias_subscribe_fail";

// 系列行为唯一标识
static NSString * const IAS_SEQ            = @"#ias_seq";
// 入口
static NSString * const IAS_ENTRANCE       = @"#ias_entrance";
// 页面区分
static NSString * const IAS_PLACEMENT      = @"#ias_placement";
// 错误码
static NSString * const IAS_CODE           = @"#error_code";
// 额外信息
static NSString * const IAS_MSG            = @"#error_message";
//订阅的产品ID
static NSString * const IAS_SKU            = @"#ias_sku";
// 订单ID
static NSString * const IAS_ORDER_ID       = @"#ias_order";
// 价格
static NSString * const IAS_PRICE          = @"#ias_price";
// 货币
static NSString * const IAS_CURRENCY       = @"#ias_currency";
// 原始订单ID
static NSString * const IAS_ORIGINAL_ORDER_ID = @"#ias_original_order";



//内购事件名称
static NSString * const EVENT_IAP_ENTRANCE        = @"#iap_entrance";
static NSString * const EVENT_IAP_TO_PURCHASE     = @"#iap_to_purchase";
static NSString * const EVENT_IAP_PURCHASED       = @"#iap_purchased";
static NSString * const EVENT_IAP_NOT_PURCHASED   = @"#iap_not_purchased";
//事件属性
static NSString * const PROPERTY_IAP_SEQ          = @"#iap_seq";
static NSString * const PROPERTY_IAP_ENTRANCE     = @"#iap_entrance";
static NSString * const PROPERTY_IAP_PLACEMENT    = @"#iap_placement";
static NSString * const PROPERTY_IAP_ORDER        = @"#iap_order";
static NSString * const PROPERTY_IAP_SKU          = @"#iap_sku";
static NSString * const PROPERTY_IAP_USD_PRICE    = @"#iap_usd_price";
static NSString * const PROPERTY_IAP_PRICE        = @"#iap_price";
static NSString * const PROPERTY_IAP_CURRENCY     = @"#iap_currency";
static NSString * const PROPERTY_IAP_CODE         = @"#iap_code";
static NSString * const PROPERTY_IAP_MSG          = @"#iap_msg";

@interface DTReportEvent : DTTrackEvent

@end

NS_ASSUME_NONNULL_END
