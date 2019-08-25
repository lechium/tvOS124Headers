/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTCarrierSpaceUsageInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceAppsInfo;

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding> {

	CTCarrierSpaceUsageInfo* _usageInfo;
	CTCarrierSpacePlansInfo* _plansInfo;
	CTCarrierSpaceAppsInfo* _appsInfo;

}

@property (nonatomic,retain) CTCarrierSpaceUsageInfo * usageInfo;              //@synthesize usageInfo=_usageInfo - In the implementation block
@property (nonatomic,retain) CTCarrierSpacePlansInfo * plansInfo;              //@synthesize plansInfo=_plansInfo - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceAppsInfo * appsInfo;                //@synthesize appsInfo=_appsInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(CTCarrierSpaceUsageInfo *)usageInfo;
-(CTCarrierSpacePlansInfo *)plansInfo;
-(CTCarrierSpaceAppsInfo *)appsInfo;
-(void)setUsageInfo:(CTCarrierSpaceUsageInfo *)arg1 ;
-(void)setPlansInfo:(CTCarrierSpacePlansInfo *)arg1 ;
-(void)setAppsInfo:(CTCarrierSpaceAppsInfo *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
