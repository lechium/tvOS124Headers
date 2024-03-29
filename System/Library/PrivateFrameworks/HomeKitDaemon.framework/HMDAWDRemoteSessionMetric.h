/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSDate, NSUUID, NSString;

@interface HMDAWDRemoteSessionMetric : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _submitted;
	BOOL _authenticated;
	int _role;
	int _closeReason;
	NSDate* _creation;
	NSUUID* _sessionID;

}

@property (assign,nonatomic) BOOL submitted;                        //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSDate * creation;                     //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) int role;                            //@synthesize role=_role - In the implementation block
@property (getter=isAuthenticated) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,readonly) int closeReason;                     //@synthesize closeReason=_closeReason - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)closeReasonFromError:(id)arg1 ;
+(void)initialize;
+(id)uuid;
-(NSUUID *)sessionID;
-(int)role;
-(int)closeReason;
-(BOOL)isAuthenticated;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setSubmitted:(BOOL)arg1 ;
-(void)setCreation:(NSDate *)arg1 ;
-(NSDate *)creation;
-(id)initWithClientMode:(BOOL)arg1 sessionID:(id)arg2 ;
-(BOOL)submitted;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)open;
@end

