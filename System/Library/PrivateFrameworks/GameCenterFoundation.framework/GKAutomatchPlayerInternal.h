/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKSpecialPlayerInternal.h>

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal {

	long long _automatchPosition;

}

@property (assign,nonatomic) long long automatchPosition;              //@synthesize automatchPosition=_automatchPosition - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)alias;
-(id)playerID;
-(id)gamePlayerID;
-(id)teamPlayerID;
-(long long)automatchPosition;
-(void)setAutomatchPosition:(long long)arg1 ;
-(BOOL)isAutomatchPlayer;
@end
