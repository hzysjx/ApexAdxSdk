//
//  ApexAdxNativeAd.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Native Ad
//

#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface ApexAdxNativeAd : NSObject

- (instancetype)initWithNativeAd:(WindMillNativeAd *)ad;
- (WindMillNativeAd *)underlyingNativeAd;

@end
