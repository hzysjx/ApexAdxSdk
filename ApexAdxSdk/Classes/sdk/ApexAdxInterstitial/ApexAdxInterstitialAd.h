//
//  ApexAdxInterstitialAd.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Interstitial Ad
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ApexAdxAdRequest;

@protocol ApexAdxInterstitialAdDelegate <NSObject>

@optional

- (void)interstitialAdDidLoad:(NSString *)pid;
- (void)interstitialAdDidFailToLoad:(NSString *)pid error:(NSError *)error;
- (void)interstitialAdDidStartPlaying;
- (void)interstitialAdDidPlayFinish;
- (void)interstitialAdDidClick;
- (void)interstitialAdDidClose;
- (void)interstitialAdDidSkip;

@end

@interface ApexAdxInterstitialAd : NSObject

/// 广告代理对象
@property (nonatomic, weak) id<ApexAdxInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(ApexAdxAdRequest *)request;
- (BOOL)isAdReady;
- (void)fetchInterstitialAd;
- (void)showFromRootViewController:(UIViewController *)rootViewController;

@end
