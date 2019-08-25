/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSDictionary;

@interface DMFSendEventRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSString* _inReplyTo;
	NSString* _eventType;
	NSDictionary* _details;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * inReplyTo;                           //@synthesize inReplyTo=_inReplyTo - In the implementation block
@property (nonatomic,copy) NSString * eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSDictionary * details;                         //@synthesize details=_details - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)details;
-(void)setInReplyTo:(NSString *)arg1 ;
-(NSString *)inReplyTo;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

