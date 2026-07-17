//
//  ApexAdxNativeAdView.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Native Ad View
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ApexAdxNativeAdView;
@class ApexAdxNativeAd;

@protocol ApexAdxNativeAdViewDelegate <NSObject>

@optional

- (void)nativeAdViewDidRenderSuccess:(ApexAdxNativeAdView *)nativeAdView;
- (void)nativeAdViewDidFailToRender:(NSError *)error;
- (void)nativeAdViewWillExpose;
- (void)nativeAdViewDidClick;
- (void)nativeAdViewDidDislike:(NSString *)reason;

@end

@interface ApexAdxNativeAdView : NSObject

+ (instancetype)adView;

@property (nonatomic) CGRect frame;
@property (nonatomic, weak) id<ApexAdxNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;

- (void)renderNativeAd:(ApexAdxNativeAd *)nativeAd;
- (UIView *)adView;

@end
