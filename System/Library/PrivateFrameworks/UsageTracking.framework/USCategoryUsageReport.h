/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface USCategoryUsageReport : NSObject <NSSecureCoding> {

	double _totalUsageTime;
	NSArray* _applicationUsage;
	NSArray* _webUsage;

}

@property (readonly) double totalUsageTime;                             //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSArray * applicationUsage;                   //@synthesize applicationUsage=_applicationUsage - In the implementation block
@property (copy,readonly) NSArray * webUsage;                           //@synthesize webUsage=_webUsage - In the implementation block
@property (copy,readonly) NSDictionary * webUsageByDomain; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3 ;
-(void)_usCategoryUsageReportCommonInitWithTotalUsageTime:(double)arg1 applicationUsage:(id)arg2 webUsage:(id)arg3 ;
-(double)totalUsageTime;
-(NSArray *)applicationUsage;
-(NSArray *)webUsage;
-(NSDictionary *)webUsageByDomain;
@end

