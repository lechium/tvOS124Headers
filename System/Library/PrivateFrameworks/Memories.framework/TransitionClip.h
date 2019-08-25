/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@class NSDictionary, NSString;

@interface TransitionClip : KonaClip {

	BOOL _forcedNoOverlap;
	NSDictionary* _transitionEffectSettings;

}

@property (nonatomic,retain) NSString * transitionName; 
@property (assign,nonatomic) int transitionDirection; 
@property (nonatomic,readonly) int overlapType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL forcedNoOverlap;                               //@synthesize forcedNoOverlap=_forcedNoOverlap - In the implementation block
@property (assign,nonatomic) int audioEnabledType; 
@property (assign,nonatomic) float effectRangeBias; 
@property (nonatomic,copy) NSDictionary * transitionEffectSettings;              //@synthesize transitionEffectSettings=_transitionEffectSettings - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Mi11 effectRange; 
+(int)overlapTypeForName:(id)arg1 ;
-(void)setTransitionDirection:(int)arg1 ;
-(BOOL)audioEnabled;
-(int)clipType;
-(NSString *)transitionName;
-(int)transitionEatLeft;
-(int)transitionEatRight;
-(int)biasedDuration;
-(void)setTransitionName:(NSString *)arg1 ;
-(int)overlapType;
-(void)setTransitionEffectSettings:(NSDictionary *)arg1 ;
-(void)setEffectRangeBias:(float)arg1 ;
-(NSDictionary *)transitionEffectSettings;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(BOOL)forcedNoOverlap;
-(BOOL)overlapIsCurrentlyForced;
-(void)setTransitionEatLeft:(int)arg1 ;
-(void)setTransitionEatRight:(int)arg1 ;
-(float)effectRangeBias;
-(int)biasedStartOffset;
-(void)setForcedNoOverlap:(BOOL)arg1 ;
-(id)transitionIDFromName:(id)arg1 ;
-(void)setAudioEnabledType:(int)arg1 ;
-(int)audioEnabledType;
-(SCD_Struct_Mi11)effectRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)transitionDirection;
@end

