
#import <Foundation/Foundation.h>
#import "DTConstant.h"
NS_ASSUME_NONNULL_BEGIN

@interface DTAdReport : NSObject

/**
 * 上报 广告开始加载
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param seq 系列行为标识
 * @param properties 自定义属性
 */

+ (void) reportLoadBegin:(NSString *)adid
                    type:(DTAdType)type
                platform:(DTAdPlatform)platform
                     seq:(NSString *)seq
               mediation:(DTAdMediation)mediation
             mediationId:(NSString *)mediationId
              properties:(NSDictionary *)properties;

/**
 * 上报 广告结束加载
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param duration 广告加载时长
 * @param result 广告加载结果
 * @param seq 系列行为标识
 * @param errorCode 失败错误码
 * @param errorMessage 失败错误信息
 * @param properties 自定义属性
 */
+ (void) reportLoadEnd:(NSString *)adid
                  type:(DTAdType)type
              platform:(DTAdPlatform)platform
              duration:(NSNumber *)duration
                result:(BOOL)result
                   seq:(NSString *)seq
             mediation:(DTAdMediation)mediation
           mediationId:(NSString *)mediationId
             errorCode:(NSInteger)errorCode
          errorMessage:(NSString *)errorMessage
            properties:(NSDictionary *)properties;

/**
 * 上报 广告展示请求
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportToShow:(NSString *)adid
                 type:(DTAdType)type
             platform:(DTAdPlatform)platform
             location:(NSString *)location
                  seq:(NSString *)seq
            mediation:(DTAdMediation)mediation
          mediationId:(NSString *)mediationId
           properties:(NSDictionary *)properties
             entrance:(NSString *)entrance;



/**
 * 上报 广告展示
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportShow:(NSString *)adid
               type:(DTAdType)type
           platform:(DTAdPlatform)platform
           location:(NSString *)location
                seq:(NSString *)seq
          mediation:(DTAdMediation)mediation
        mediationId:(NSString *)mediationId
         properties:(NSDictionary *)properties
           entrance:(NSString *)entrance;


/**
 * 上报 广告展示失败
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param errorCode 失败错误码
 * @param errorMessage 失败错误信息
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportAdShowFail:(NSString *)adid
                     type:(DTAdType)type
                 platform:(DTAdPlatform)platform
                 location:(NSString *)location
                      seq:(NSString *)seq
                mediation:(DTAdMediation)mediation
              mediationId:(NSString *)mediationId
                errorCode:(NSInteger)errorCode
             errorMessage:(NSString *)errorMessage
               properties:(NSDictionary *)properties
                 entrance:(NSString *)entrance;

/**
 * 上报 广告点击
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportClick:(NSString *)adid
                type:(DTAdType)type
            platform:(DTAdPlatform)platform
            location:(NSString *)location
                 seq:(NSString *)seq
           mediation:(DTAdMediation)mediation
         mediationId:(NSString *)mediationId
          properties:(NSDictionary *)properties
            entrance:(NSString *)entrance;

/**
 * 上报 自定义转化，通过点击
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportConversionByClick:(NSString *)adid
                            type:(DTAdType)type
                        platform:(DTAdPlatform)platform
                        location:(NSString *)location
                             seq:(NSString *)seq
                       mediation:(DTAdMediation)mediation
                     mediationId:(NSString *)mediationId
                      properties:(NSDictionary *)properties
                        entrance:(NSString *)entrance;

/**
 * 上报 激励广告已获得奖励
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportRewarded:(NSString *)adid
                   type:(DTAdType)type
               platform:(DTAdPlatform)platform
               location:(NSString *)location
                    seq:(NSString *)seq
              mediation:(DTAdMediation)mediation
            mediationId:(NSString *)mediationId
             properties:(NSDictionary *)properties
               entrance:(NSString *)entrance;


/**
 * 上报 自定义转化事件，通过获得激励
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportConversionByRewarded:(NSString *)adid
                               type:(DTAdType)type
                           platform:(DTAdPlatform)platform
                           location:(NSString *)location
                                seq:(NSString *)seq
                          mediation:(DTAdMediation)mediation
                        mediationId:(NSString *)mediationId
                         properties:(NSDictionary *)properties
                           entrance:(NSString *)entrance;

/**
 * 上报 访问广告链接，离开当前app(页面)
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportLeftApp:(NSString *)adid
                  type:(DTAdType)type
              platform:(DTAdPlatform)platform
              location:(NSString *)location
                   seq:(NSString *)seq
             mediation:(DTAdMediation)mediation
           mediationId:(NSString *)mediationId
            properties:(NSDictionary *)properties
              entrance:(NSString *)entrance;

/**
 * 上报 自定义转化，通过跳出app
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportConversionByLeftApp:(NSString *)adid
                              type:(DTAdType)type
                          platform:(DTAdPlatform)platform
                          location:(NSString *)location
                               seq:(NSString *)seq
                         mediation:(DTAdMediation)mediation
                       mediationId:(NSString *)mediationId
                        properties:(NSDictionary *)properties
                          entrance:(NSString *)entrance;


/**
 * 上报 访问广告链接，离开当前app(页面)
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param clickGap 广告点击间隔
 * @param returnGap 广告离开间隔
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportReturnApp:(NSString *)adid
                    type:(DTAdType)type
                platform:(DTAdPlatform)platform
                location:(NSString *)location
                clickGap:(NSNumber *)clickGap
               returnGap:(NSNumber *)returnGap
                     seq:(NSString *)seq
               mediation:(DTAdMediation)mediation
             mediationId:(NSString *)mediationId
              properties:(NSDictionary *)properties
                entrance:(NSString *)entrance;

/**
 * 上报广告展示价值
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param value 价值
 * @param currency 货币
 * @param precision 精确度
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportPaid:(NSString *)adid
               type:(DTAdType)type
           platform:(DTAdPlatform)platform
           location:(NSString *)location
                seq:(NSString *)seq
          mediation:(DTAdMediation)mediation
        mediationId:(NSString *)mediationId
              value:(NSString *)value
           currency:(NSString *)currency
          precision:(NSString *)precision
         properties:(NSDictionary *)properties
           entrance:(NSString *)entrance;


/**
 * 上报广告展示价值（聚合广告）
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param mediation 聚合平台
 * @param mediationId 聚合平台广告id
 * @param value 价值
 * @param precision 精确度
 * @param country 国家
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportPaid:(NSString *)adid
               type:(DTAdType)type
           platform:(DTAdPlatform)platform
           location:(NSString *)location
                seq:(NSString *)seq
          mediation:(DTAdMediation)mediation
        mediationId:(NSString *)mediationId
              value:(NSString *)value
          precision:(NSString *)precision
            country:(NSString *)country
         properties:(NSDictionary *)properties
           entrance:(NSString *)entrance;


/**
 * 上报 广告关闭
 *
 * @param adid 广告最小单元id
 * @param type 广告类型
 * @param platform 广告平台
 * @param location 广告位
 * @param seq 系列行为标识
 * @param properties 自定义属性
 * @param entrance 广告入口
 */
+ (void) reportClose:(NSString *)adid
                type:(DTAdType)type
            platform:(DTAdPlatform)platform
            location:(NSString *)location
                 seq:(NSString *)seq
           mediation:(DTAdMediation)mediation
         mediationId:(NSString *)mediationId
          properties:(NSDictionary *)properties
            entrance:(NSString *)entrance;



@end

NS_ASSUME_NONNULL_END
