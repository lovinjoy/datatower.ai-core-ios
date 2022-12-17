//
//  DTAppSDTrtEvent.h
//
//
//  
//

#import "DTAutoTrackEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface DTAppStartEvent : DTAutoTrackEvent
@property (nonatomic, copy) NSString *startReason;
@property (nonatomic, assign) BOOL resumeFromBackground;


@end

NS_ASSUME_NONNULL_END
