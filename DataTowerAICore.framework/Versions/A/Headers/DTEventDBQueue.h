
#import <Foundation/Foundation.h>

@class DTDBEventModel;

NS_ASSUME_NONNULL_BEGIN

/*
  线程安全，可以在任意线程调用，
  初始化建议在主线程。
 */

@interface DTEventDBQueue : NSObject

/*
  初始化数据库，建议在主线程完成。
 */
- (id)initWithDBPath:(NSString *)dbPath;


/*
  增加一条数据，返回值是否操作成功
 */
- (void)addEvent:(NSString *)data
         eventSyn:(NSString *)eventSyn
        createdAt:(double)createdAt
       completion:(void(^)(BOOL success))completion;

/*
  根据eventSyn删除数据
 */

- (void)deleteEventsBySyn:(NSString *)eventSyn completion:(void(^)(BOOL success))completion;

/*
  从数据库读取数据 根据id的升序返回的
 */

- (void)queryEventsCount:(NSUInteger)eventsCount completion:(void(^)(NSArray <DTDBEventModel *> *result))completion;

/*
  从数据库读取数量
 */

- (void)queryEventCountWithCompletion:(void(^)(NSUInteger count))completion;

@end

NS_ASSUME_NONNULL_END
