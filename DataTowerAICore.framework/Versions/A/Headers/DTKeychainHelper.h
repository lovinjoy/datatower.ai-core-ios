#import <Foundation/Foundation.h>

@interface DTKeychainHelper : NSObject

- (void)saveDTID:(NSString *)string;

- (NSString *)readDTID;


@end
