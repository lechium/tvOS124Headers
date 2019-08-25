/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest {

	BOOL _forceDeletion;
	NSString* _username;

}

@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL forceDeletion;              //@synthesize forceDeletion=_forceDeletion - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(BOOL)forceDeletion;
-(void)setForceDeletion:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)username;
@end
