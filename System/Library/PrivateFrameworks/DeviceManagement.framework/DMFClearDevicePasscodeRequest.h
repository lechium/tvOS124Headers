/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSData, NSString;

@interface DMFClearDevicePasscodeRequest : DMFTaskRequest {

	NSData* _unlockTokenData;
	NSString* _secret;

}

@property (nonatomic,copy) NSData * unlockTokenData;              //@synthesize unlockTokenData=_unlockTokenData - In the implementation block
@property (nonatomic,copy) NSString * secret;                     //@synthesize secret=_secret - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(NSData *)unlockTokenData;
-(void)setUnlockTokenData:(NSData *)arg1 ;
-(NSString *)secret;
-(void)setSecret:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

