/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSString, NSDictionary;

@interface DMFMDMv1StartManagingAppRequest : DMFAppRequest {

	NSString* _originator;
	unsigned long long _managementOptions;
	NSString* _VPNUUIDString;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSString * originator;                               //@synthesize originator=_originator - In the implementation block
@property (assign,nonatomic) unsigned long long managementOptions;              //@synthesize managementOptions=_managementOptions - In the implementation block
@property (nonatomic,copy) NSString * VPNUUIDString;                            //@synthesize VPNUUIDString=_VPNUUIDString - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                        //@synthesize configuration=_configuration - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(BOOL)supportsSecureCoding;
-(NSString *)VPNUUIDString;
-(void)setVPNUUIDString:(NSString *)arg1 ;
-(unsigned long long)managementOptions;
-(void)setManagementOptions:(unsigned long long)arg1 ;
-(NSString *)originator;
-(void)setOriginator:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

