//
//  ApexAdxHttpClient.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - HTTP Client
//

#import <Foundation/Foundation.h>

typedef void(^ApexAdxHttpCompletionBlock)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);

@interface ApexAdxHttpClient : NSObject

/// 发起 POST 请求
+ (void)postWithURL:(NSString *)url
               body:(NSDictionary *)body
         completion:(ApexAdxHttpCompletionBlock)completion;

/// 拉取广告位配置
+ (void)fetchAdConfig:(NSString *)appId;

@end
