
#import <Foundation/Foundation.h>
#import "DTQualityConstant.h"
NS_ASSUME_NONNULL_BEGIN

@interface DTASDKQualityHelper : NSObject

+ (void)reportQualityCode:(DTQualityErrorCode)code
                 errorMsg:(DTQualityErrorMSG)errorMsg
                      msg:(NSString *)msg;

@end

NS_ASSUME_NONNULL_END
