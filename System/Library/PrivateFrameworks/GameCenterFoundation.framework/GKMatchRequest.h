/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class GKMatchRequestInternal, NSArray, NSString;

@interface GKMatchRequest : NSObject {

	GKMatchRequestInternal* _internal;
	/*^block*/id _inviteeResponseHandler;
	/*^block*/id _recipientResponseHandler;

}

@property (retain) GKMatchRequestInternal * internal;                      //@synthesize internal=_internal - In the implementation block
@property (assign) unsigned long long minPlayers; 
@property (assign) unsigned long long maxPlayers; 
@property (assign) unsigned long long playerGroup; 
@property (assign) unsigned playerAttributes; 
@property (retain) NSArray * recipients; 
@property (retain) NSArray * playersToInvite; 
@property (copy) NSString * inviteMessage; 
@property (assign) unsigned long long defaultNumberOfPlayers; 
@property (copy) id recipientResponseHandler;                              //@synthesize recipientResponseHandler=_recipientResponseHandler - In the implementation block
@property (copy) id inviteeResponseHandler;                                //@synthesize inviteeResponseHandler=_inviteeResponseHandler - In the implementation block
+(unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)guestPlayers;
-(id)inviteeResponseHandler;
-(void)setInviteeResponseHandler:(id)arg1 ;
-(id)recipientResponseHandler;
-(void)setRecipientResponseHandler:(id)arg1 ;
-(BOOL)defaultNumberOfPlayersIsValid;
-(BOOL)isValidWithMax:(unsigned long long)arg1 ;
-(BOOL)isValidForHosted:(BOOL)arg1 ;
-(BOOL)isTurnBasedValid;
-(void)ensureValidityHosted:(BOOL)arg1 ;
-(void)removeLocalPlayerFromPlayersToInvite;
-(BOOL)isRecipientCountValid;
-(NSArray *)playersToInvite;
-(void)setPlayersToInvite:(NSArray *)arg1 ;
-(void)loadRecipientsWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKMatchRequestInternal *)internal;
-(void)setInternal:(GKMatchRequestInternal *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

