
#import <Foundation/Foundation.h>


typedef enum : NSUInteger {
    DTChannelDefault = 0,
    DTChannelGooglePlay,
    DTChannelAppStore,
} DTChannel;


typedef enum  : NSInteger {
    DTAdTypeIdle = -1,
    DTAdTypeBanner = 0,
    DTAdTypeInterstitial = 1,
    DTAdTypeNative = 2,
    DTAdTypeRewarded = 3,
    DTAdTypeRewardedInterstitial = 4,
    DTAdTypeAppOpen = 5,
    DTAdTypeMREC = 6,
  
}DTAdType;

typedef enum  : NSInteger {
    DTAdMediationIdle = -1,
    DTAdMediationMopub = 0,
    DTAdMediationMax = 1,
    DTAdMediationHisavana = 2,
    DTAdMediationCombo = 3,
}DTAdMediation;

typedef enum  : NSInteger {
    DTAdPlatformUndisclosed = -2,
    DTAdPlatformIdle = -1,
    DTAdPlatformAdmob = 0,
    DTAdPlatformMopub = 1,
    DTAdPlatformAdcolony = 2,
    DTAdPlatformApplovin = 3,
    DTAdPlatformChartboost = 4,
    DTAdPlatformFaceBook = 5,
    DTAdPlatformInmobi = 6,
    DTAdPlatformIronsource = 7,
    DTAdPlatformPangle = 8,
    DTAdPlatformSnapAudienceNetwork= 9,
    DTAdPlatformTapjoy = 10,
    DTAdPlatformUnityAds = 11,
    DTAdPlatformVerizonMedia = 12,
    DTAdPlatformVungle = 13,
    DTAdPlatformADX = 14,
    DTAdPlatformCombo = 15,
    DTAdPlatformBigo = 16,
    DTAdPlatformHisavana = 17,
    DTAdPlatformApplovinExchange = 18,
    DTAdPlatformLovinJoyAds = 33,
  
}DTAdPlatform;

/**
 Log 级别

 - DTLoggingLevelNone : 默认不开启
 */
typedef enum : NSInteger {
    /**
     默认不开启
     */
    DTLoggingLevelNone  = 0,
    
    /**
     Error Log
     */
    DTLoggingLevelError = 1 << 0,
    
    /**
     Info  Log
     */
    DTLoggingLevelInfo  = 1 << 1,
    
    /**
     Debug Log
     */
    DTLoggingLevelDebug = 1 << 2,
}DTLoggingLevel;


/**
 自动采集事件

 -
 */
typedef NS_OPTIONS(NSInteger, DTAutoTrackEventType) {
    
    DTAutoTrackEventTypeNone = 0,
    /**
     SDK 初始化
     */
    DTAutoTrackEventTypeInitialize    = 1 << 0,
    
    /*
     APP 启动或从后台恢复事件
     */
    DTAutoTrackEventTypeAppStart      = 1 << 1,
    
    /**
     APP 进入后台事件
     */
    DTAutoTrackEventTypeAppEnd        = 1 << 2,
    
    /**
     APP 安装之后的首次打开
     */
    DTAutoTrackEventTypeAppInstall    = 1 << 3,
    /**
     
     
     以上全部 APP 事件
     */
    DTAutoTrackEventTypeAll    = DTAutoTrackEventTypeInitialize |DTAutoTrackEventTypeAppInstall | DTAutoTrackEventTypeAppStart | DTAutoTrackEventTypeAppEnd

};

typedef NS_OPTIONS(NSInteger, DTNetworkType) {
    DTNetworkTypeNONE     = 0,
    DTNetworkType2G       = 1 << 0,
    DTNetworkType3G       = 1 << 1,
    DTNetworkType4G       = 1 << 2,
    DTNetworkTypeWIFI     = 1 << 3,
    DTNetworkType5G       = 1 << 4,
    DTNetworkTypeALL      = 0xFF,
};



/**
 证书验证模式
*/
typedef NS_OPTIONS(NSInteger, DTSSLPinningMode) {
    /**
     默认认证方式，只会在系统的信任的证书列表中对服务端返回的证书进行验证
    */
    DTSSLPinningModeNone          = 0,
    
    /**
     校验证书的公钥
    */
    DTSSLPinningModePublicKey     = 1 << 0,
    
    /**
     校验证书的所有内容
    */
    DTSSLPinningModeCertificate   = 1 << 1
};

/**
 自定义 HTTPS 认证
*/
typedef NSURLSessionAuthChallengeDisposition (^DTURLSessionDidReceiveAuthenticationChallengeBlock)(NSURLSession *_Nullable session, NSURLAuthenticationChallenge *_Nullable challenge, NSURLCredential *_Nullable __autoreleasing *_Nullable credential);


