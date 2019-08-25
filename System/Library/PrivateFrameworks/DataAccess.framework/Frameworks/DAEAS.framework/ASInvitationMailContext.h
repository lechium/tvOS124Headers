/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface ASInvitationMailContext : NSObject {

	BOOL _isMyInvite;
	int _emailResponse;
	NSString* _eventUID;
	NSString* _serverID;
	NSArray* _attendeeUUIDs;

}

@property (nonatomic,retain) NSString * eventUID;                  //@synthesize eventUID=_eventUID - In the implementation block
@property (nonatomic,retain) NSString * serverID;                  //@synthesize serverID=_serverID - In the implementation block
@property (assign,nonatomic) BOOL isMyInvite;                      //@synthesize isMyInvite=_isMyInvite - In the implementation block
@property (assign,nonatomic) int emailResponse;                    //@synthesize emailResponse=_emailResponse - In the implementation block
@property (nonatomic,retain) NSArray * attendeeUUIDs;              //@synthesize attendeeUUIDs=_attendeeUUIDs - In the implementation block
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)serverID;
-(NSString *)eventUID;
-(void)setEventUID:(NSString *)arg1 ;
-(BOOL)isMyInvite;
-(void)setIsMyInvite:(BOOL)arg1 ;
-(int)emailResponse;
-(void)setEmailResponse:(int)arg1 ;
-(NSArray *)attendeeUUIDs;
-(void)setAttendeeUUIDs:(NSArray *)arg1 ;
@end

