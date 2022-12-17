
#import <Foundation/Foundation.h>
#import "DTConstant.h"
#import "DTReportEvent.h"
NS_ASSUME_NONNULL_BEGIN

@interface DTIAPReport : NSObject

/**
 * 展示购买入口的时候上报
 *
 * @param order 订单
 * @param sku 商品ID
 * @param price 价格， 如 9.99
 * @param currency 货币，如usd
 * @param seq 系列行为标识
 * @param placement 入口，可为空
 */
+ (void)reportEntrance:(NSString *)order
                   sku:(NSString *)sku
                 price:(NSNumber *)price
              currency:(NSString *)currency
                   seq:(NSString *)seq
             placement:(NSString *)placement;

/**
 * 点击购买的时候上报
 *
 * @param order 订单
 * @param sku 商品ID
 * @param price 价格， 如 9.99
 * @param currency 货币，如usd
 * @param seq 系列行为标识
 * @param placement 入口，可为空
 */
+ (void)reportToPurchase:(NSString *)order
                     sku:(NSString *)sku
                   price:(NSNumber *)price
                currency:(NSString *)currency
                     seq:(NSString *)seq
               placement:(NSString *)placement;
/**
 * 购买成功的时候上报，无论是否消耗
 *
 * @param order 订单
 * @param sku 商品ID
 * @param price 价格， 如 9.99
 * @param currency 货币，如usd
 * @param seq 系列行为标识
 * @param placement 入口，可为空
 */
+ (void)reportPurchased:(NSString *)order
                    sku:(NSString *)sku
                  price:(NSNumber *)price
               currency:(NSString *)currency
                    seq:(NSString *)seq
              placement:(NSString *)placement;
/**
 * 购买失败的时候上报
 *
 * @param order 订单
 * @param sku 商品ID
 * @param price 价格， 如 9.99
 * @param currency 货币，如usd
 * @param seq 系列行为标识
 * @param code 错误码
 * @param placement 入口，可为空
 * @param msg 额外信息，可为空
 */
+ (void)reportNotToPurchased:(NSString *)order
                         sku:(NSString *)sku
                       price:(NSNumber *)price
                    currency:(NSString *)currency
                         seq:(NSString *)seq
                        code:(NSString *)code
                         msg:(NSString *)msg
                   placement:(NSString *)placement;

@end

NS_ASSUME_NONNULL_END
