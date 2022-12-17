
#ifndef DTValidatorProtocol_h
#define DTValidatorProtocol_h

#import <Foundation/Foundation.h>

#if __has_include(<ThinkingSDK/DTLogging.h>)
#import <ThinkingSDK/DTLogging.h>
#else
#import "DTLogging.h"
#endif

#define DTPropertyError(errorCode, errorMsg) \
    [NSError errorWithDomain:@"DTAnalyticsErrorDomain" \
                        code:errorCode \
                    userInfo:@{NSLocalizedDescriptionKey:errorMsg}] \


/// 属性名字的验证器协议，用来验证属性名
@protocol DTPropertyKeyValidating <NSObject>

- (void)dt_validatePropertyKeyWithError:(NSError **)error;

@end

/// 属性值的验证器协议，用来验证属性值
@protocol DTPropertyValueValidating <NSObject>

- (void)dt_validatePropertyValueWithError:(NSError **)error;

@end

/// 事件属性的验证器协议，用来验证某一条属性的key-value
@protocol DTEventPropertyValidating <NSObject>

- (void)dt_validateKey:(NSString *)key value:(id)value error:(NSError **)error;

@end

#endif /* DTValidatorProtocol_h */
