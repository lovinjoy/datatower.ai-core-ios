//
//  DTAppEndEvent.h
//
//
//  
//

#import "DTAutoTrackEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface DTAppEndEvent : DTAutoTrackEvent
@property (nonatomic, copy) NSString *screenName;

@end

NS_ASSUME_NONNULL_END
