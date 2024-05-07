#import <Foundation/Foundation.h>
#import "DTConstant.h"
NS_ASSUME_NONNULL_BEGIN

@interface DT : NSObject

+ (void)initSDK:(NSString *)appid
      serverUrl:(NSString *)url
        channel:(DTChannel)channel
        isDebug:(BOOL)debug
       logLevel:(DTLoggingLevel)logLevel
      enableTrack:(BOOL)enableTrack;
        


///for unity
+ (void)initSDK:(NSString *)appid
      serverUrl:(NSString *)url
        channel:(DTChannel)channel
        isDebug:(BOOL)debug
       logLevel:(DTLoggingLevel)logLevel
        commonProperties:(nullable NSDictionary *)commonProperties
    enableTrack:(BOOL)enableTrack;

@end

NS_ASSUME_NONNULL_END
