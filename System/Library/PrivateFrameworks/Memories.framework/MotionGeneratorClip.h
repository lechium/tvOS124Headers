/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@class PVEffect;

@interface MotionGeneratorClip : KonaClip {

	PVEffect* _generatorEffect;

}

@property (nonatomic,retain) PVEffect * generatorEffect;              //@synthesize generatorEffect=_generatorEffect - In the implementation block
-(int)maxDuration;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(BOOL)isFreezeFrame;
-(void)validateEffectRange:(SCD_Struct_Mi11)arg1 inProject:(id)arg2 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(PVEffect *)generatorEffect;
-(void)setGeneratorEffect:(PVEffect *)arg1 ;
-(BOOL)hasVisualCharacteristic;
@end
