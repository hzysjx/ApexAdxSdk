//
//  ApexAdxRewardedAd.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Rewarded Ad
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ApexAdxAdRequest;

@protocol ApexAdxRewardedAdDelegate <NSObject>

@required

- (void)rewardedAdDidReward:(NSString *_Nonnull)transId;

@optional

- (void)rewardedAdDidLoad:(NSString *)pid;
- (void)rewardedAdDidFailToLoad:(NSString *)pid error:(NSError *)error;
- (void)rewardedAdDidStartPlaying;
- (void)rewardedAdDidPlayFinish;
- (void)rewardedAdDidClick;
- (void)rewardedAdDidClose;
- (void)rewardedAdDidSkip;
- (void)rewardedAdDidFailToPlay:(NSString *)pid error:(NSError *)error;

@end

@interface ApexAdxRewardedAd : NSObject

/// 广告代理对象
@property (nonatomic, weak) id<ApexAdxRewardedAdDelegate> delegate;

- (instancetype)initWithRequest:(ApexAdxAdRequest *)request;
- (BOOL)isAdReady;
- (void)fetchRewardedAd;
- (void)showFromRootViewController:(UIViewController *)rootViewController
                           options:(NSDictionary<NSString *, NSString *> * _Nullable)options;

@end
