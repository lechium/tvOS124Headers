/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKInviteInternal, GKPlayer, NSString, NSData;

@interface GKInvite : NSObject {

	BOOL _cancelled;
	GKInviteInternal* _internal;
	GKPlayer* _sender;

}

@property (retain) GKInviteInternal * internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * inviteID; 
@property (nonatomic,readonly) NSData * sessionToken; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain,readonly) GKPlayer * sender;                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain,readonly) NSString * inviter; 
@property (getter=isHosted,nonatomic,readonly) BOOL hosted; 
@property (nonatomic,readonly) unsigned long long playerGroup; 
@property (nonatomic,readonly) unsigned playerAttributes; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isHosted;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(NSString *)inviter;
-(GKInviteInternal *)internal;
-(void)setInternal:(GKInviteInternal *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)isCancelled;
-(GKPlayer *)sender;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

