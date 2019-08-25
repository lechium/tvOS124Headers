/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFAppRequest.h>

@interface DMFInstallAppRequest : DMFAppRequest {

	BOOL _allowFreePurchases;
	unsigned long long _licenseType;

}

@property (assign,nonatomic) unsigned long long licenseType;              //@synthesize licenseType=_licenseType - In the implementation block
@property (assign,nonatomic) BOOL allowFreePurchases;                     //@synthesize allowFreePurchases=_allowFreePurchases - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(unsigned long long)licenseType;
-(BOOL)allowFreePurchases;
-(void)setLicenseType:(unsigned long long)arg1 ;
-(void)setAllowFreePurchases:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

