//
//  TDFile.h
//
//
//
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTFile : NSObject

@property(strong,nonatomic) NSString* appid;

- (instancetype)initWithAppid:(NSString*)appid;

- (void)archiveDeviceId:(NSString *)deviceId;

- (NSString *)unarchiveDeviceId;

- (BOOL)archiveObject:(id)object withFilePath:(NSString *)filePath;

- (BOOL)addSkipBackupAttributeToItemAtPath:(NSString *)filePathString;

- (void)archiveSuperProperties:(NSDictionary *)superProperties;

- (NSDictionary*)unarchiveSuperProperties;

- (void)archiveAccountId:(nullable NSString *)accountId;

- (NSString*)unarchiveAccountId;



@end;

NS_ASSUME_NONNULL_END
