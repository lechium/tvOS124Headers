/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest {

	NSString* _profileIdentifier;
	NSString* _managingProfileIdentifier;

}

@property (nonatomic,copy) NSString * profileIdentifier;                      //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(NSString *)managingProfileIdentifier;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

