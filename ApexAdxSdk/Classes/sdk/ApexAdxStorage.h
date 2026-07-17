//
//  ApexAdxStorage.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Strategy Storage
//

#import "ApexAdxAdStrategy.h"
#import <Foundation/Foundation.h>

@interface ApexAdxStorage : NSObject

/// 当前计点数
@property (nonatomic) int cps;

+ (instancetype)sharedInstance;

/// 保存广告位对应的策略
- (void)saveStrategy:(ApexAdxAdStrategy *)strategy forAdId:(NSString *)adId;

/// 获取广告位对应的策略
- (ApexAdxAdStrategy *)strategyForAdId:(NSString *)adId;

@end
