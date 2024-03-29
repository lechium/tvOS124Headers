/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKTurnBasedParticipant, GKTurnBasedMatch, GKTurnBasedExchangeInternal, NSArray, NSString, NSData, NSDate;

@interface GKTurnBasedExchange : NSObject {

	GKTurnBasedParticipant* _sender;
	GKTurnBasedMatch* _matchWeak;
	GKTurnBasedExchangeInternal* _internal;
	NSArray* _replies;
	NSArray* _recipients;

}

@property (nonatomic,retain) NSArray * recipients;                         //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSArray * replies;                            //@synthesize replies=_replies - In the implementation block
@property (nonatomic,retain) NSString * exchangeID; 
@property (nonatomic,retain) GKTurnBasedParticipant * sender;              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSDate * timeoutDate; 
@property (nonatomic,retain) NSDate * completionDate; 
@property (retain) GKTurnBasedExchangeInternal * internal;                 //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) GKTurnBasedMatch * match;                     //@synthesize matchWeak=_matchWeak - In the implementation block
@property (nonatomic,readonly) char status; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSDate * sendDate; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(NSArray *)replies;
-(void)setReplies:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)_updateInternalFromMatchInternal:(id)arg1 ;
-(void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(GKTurnBasedMatch *)match;
-(GKTurnBasedExchangeInternal *)internal;
-(void)setInternal:(GKTurnBasedExchangeInternal *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSString *)message;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(GKTurnBasedParticipant *)sender;
-(char)status;
-(void)setSender:(GKTurnBasedParticipant *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

