//
//  ApexAdxAdRequest.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Ad Request
//

#import <Foundation/Foundation.h>

@interface ApexAdxAdRequest : NSObject

/// 【可选】媒体用户ID
@property (nonatomic, copy) NSString *userId;

/// 【必传】广告位ID
@property (nonatomic, copy) NSString *pid;

/// 【可选】服务端激励回传时，透传参数
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> *options;

+ (instancetype)request;

@end
