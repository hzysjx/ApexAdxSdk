//
//  ApexAdxNativeAdManager.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Native Ad Manager
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ApexAdxAdRequest;
@class ApexAdxNativeAd;
@class ApexAdxNativeAdManager;

NS_ASSUME_NONNULL_BEGIN

@protocol ApexAdxNativeAdManagerDelegate <NSObject>

@optional

- (void)nativeAdManagerDidLoad:(ApexAdxNativeAdManager *)nativeAdManager;
- (void)nativeAdManagerDidFailWithError:(NSError *)error;

@end

@interface ApexAdxNativeAdManager : NSObject

@property (nonatomic, weak) id<ApexAdxNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(ApexAdxAdRequest *)request;

- (void)loadAdsWithCount:(NSInteger)count;

- (NSArray<ApexAdxNativeAd *> * _Nullable)allNativeAds;

@end

NS_ASSUME_NONNULL_END
