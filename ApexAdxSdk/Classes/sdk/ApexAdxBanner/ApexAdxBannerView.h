//
//  ApexAdxBannerView.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Banner Ad
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ApexAdxAdRequest;
@class ApexAdxBannerView;

NS_ASSUME_NONNULL_BEGIN

@protocol ApexAdxBannerAdDelegate <NSObject>

@optional

- (void)bannerAdDidAutoRefresh:(ApexAdxBannerView *)bannerAdView;

- (void)bannerAdDidFailToAutoRefresh:(NSError *)error;

- (void)bannerAdDidLoad:(ApexAdxBannerView *)bannerAdView;

- (void)bannerAdDidFailToLoad:(NSError *)error;

- (void)bannerAdDidShow;

- (void)bannerAdDidClick;

- (void)bannerAdWillLeaveApplication;

- (void)bannerAdWillOpenFullScreen;

- (void)bannerAdDidCloseFullScreen;

- (void)bannerAdDidRemove;

@end

@interface ApexAdxBannerView : NSObject

@property (nonatomic, weak) id<ApexAdxBannerAdDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property (nullable, nonatomic, copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(ApexAdxAdRequest *)request;

- (instancetype)initWithRequest:(ApexAdxAdRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)fetchBannerAd;

- (BOOL)isAdReady;

- (UIView *)adView;

@end

NS_ASSUME_NONNULL_END
