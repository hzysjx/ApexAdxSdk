//
//  ApexAdxAdStrategy.h
//  ApexAdxSdk-iOS
//
//  ApexAdx Ads Aggregation SDK - Ad Strategy Model
//

#import <Foundation/Foundation.h>

@interface ApexAdxAdStrategy : NSObject

@property (nonatomic, copy) NSString *adsId;
@property (nonatomic, copy) NSString *nAdId;
@property (nonatomic, copy) NSString *nAdType;
@property (nonatomic) int cpts;
@property (nonatomic) int ddrt;
@property (nonatomic, copy) NSString *oAppId;
@property (nonatomic, copy) NSString *nAppId;
@property (nonatomic, copy) NSString *nAdCode;

@end
