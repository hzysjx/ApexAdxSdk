//
//  ApexAdxSplashAd.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Splash Ad
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ApexAdxAdRequest;

@protocol ApexAdxSplashAdDelegate <NSObject>

@optional

- (void)splashAdDidShow;
- (void)splashAdDidFailToShow:(NSString *)pid error:(NSError *)error;
- (void)splashAdDidLoad:(NSString *)pid;
- (void)splashAdDidFailToLoad:(NSString *)pid error:(NSError *)error;
- (void)splashAdDidClick;
- (void)splashAdDidClose;
- (void)splashAdDidSkip;

@end

@interface ApexAdxSplashAd : NSObject

/// 广告代理对象
@property (nonatomic, weak) id<ApexAdxSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(ApexAdxAdRequest *)request
                          extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(ApexAdxAdRequest *)request;
- (BOOL)isAdReady;
- (void)loadAndShow;
- (void)loadAd;
- (void)showInWindow:(UIWindow *)window;

@end
