/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVCSessionConfiguration : NSObject {

	unsigned long long _maxRemoteParticipants;
	long long _sessionMode;
	id _reportingHierarchyToken;

}

@property (assign,nonatomic) unsigned long long maxRemoteParticipants;              //@synthesize maxRemoteParticipants=_maxRemoteParticipants - In the implementation block
@property (assign,nonatomic) long long sessionMode;                                 //@synthesize sessionMode=_sessionMode - In the implementation block
@property (nonatomic,copy) id reportingHierarchyToken;                              //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
+(long long)clientSessionModeWithSessionMode:(long long)arg1 ;
+(long long)sessionModeWithClientSessionMode:(long long)arg1 ;
-(void)setReportingHierarchyToken:(id)arg1 ;
-(unsigned long long)maxRemoteParticipants;
-(void)setMaxRemoteParticipants:(unsigned long long)arg1 ;
-(long long)sessionMode;
-(void)setSessionMode:(long long)arg1 ;
-(id)reportingHierarchyToken;
-(void)setUpWithDictionary:(id)arg1 ;
-(id)dictionary;
-(void)dealloc;
@end
