/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFScheduleOSUpdateRequest : DMFTaskRequest {

	BOOL _useDelay;
	unsigned long long _action;
	NSString* _productKey;
	NSString* _productVersion;

}

@property (assign,nonatomic) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * productKey;                    //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy) NSString * productVersion;                //@synthesize productVersion=_productVersion - In the implementation block
@property (assign,nonatomic) BOOL useDelay;                          //@synthesize useDelay=_useDelay - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)_descriptionForAction:(unsigned long long)arg1 ;
+(BOOL)_action:(unsigned long long*)arg1 fromString:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(BOOL)useDelay;
-(void)setUseDelay:(BOOL)arg1 ;
-(NSString *)productKey;
-(void)setProductKey:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
@end

