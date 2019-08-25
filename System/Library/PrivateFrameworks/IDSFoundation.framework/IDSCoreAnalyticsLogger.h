/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTMetricLogger.h>

@class NSString;

@interface IDSCoreAnalyticsLogger : NSObject <CUTMetricLogger> {

	NSString* _domain;

}

@property (nonatomic,readonly) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLogger;
-(void)logMetric:(id)arg1 ;
-(NSString *)domain;
-(id)initWithDomain:(id)arg1 ;
@end

