
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTDBEventModel : NSObject

@property (nonatomic,strong)NSMutableDictionary *data;
@property (nonatomic,copy)NSString *eventSyn;
@property (nonatomic,assign)double createAt;

@end

NS_ASSUME_NONNULL_END
