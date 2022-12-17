
#import "DTColdStartTracker.h"
#import "DTHotStartTracker.h"
#import "DTInstallTracker.h"
#import "DTAppInitializeEvent.h"
#import "DTAppInstallEvent.h"

@interface DTAutoTrackManager : NSObject

+ (instancetype)sharedManager;

- (void)trackWithAppid:(NSString *)appid withOption:(DTAutoTrackEventType)type;

#pragma mark - UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

