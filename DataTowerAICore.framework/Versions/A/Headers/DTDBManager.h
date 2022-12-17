
#import <Foundation/Foundation.h>
#import "DTDBEventModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface DTDBManager : NSObject

+ (DTDBManager *)sharedInstance;


/*
  初始化数据库，建议在主线程完成。
 */
- (id)initWithDBPath:(NSString *)dbPath;


/*
  增加一条数据，返回值是否操作成功
 */
- (BOOL)addEvent:(NSDictionary *)data
        eventSyn:(NSString *)eventSyn;
        

/*
  根据eventSyn删除数据
 */

- (BOOL)deleteEventsBySyn:(NSString *)eventSyn;


- (BOOL)deleteEventsWithSyns:(NSArray *)syns;
/*
  从数据库读取数据
 */

- (NSArray <DTDBEventModel *> *)queryEventsCount:(NSUInteger)eventsCount;

/*
  从数据库读取数量
 */

- (NSUInteger)queryEventCount;

@end

NS_ASSUME_NONNULL_END
