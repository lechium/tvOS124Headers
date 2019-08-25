/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject {

	NSArray* _profiles;

}

@property (nonatomic,copy,readonly) NSArray * profiles;              //@synthesize profiles=_profiles - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)profiles;
-(id)initWithProfiles:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

