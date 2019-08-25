/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/CompositionItem.h>

@class AVAsset, AVURLAsset;

@interface MovieCompositionItem : CompositionItem {

	AVAsset* m_asset;
	AVURLAsset* m_audioProxyAsset;

}

@property (nonatomic,retain) AVAsset * asset; 
@property (nonatomic,retain) AVURLAsset * audioProxyAsset; 
-(SCD_Struct_Mi11)applySpeed:(SCD_Struct_Mi11)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV2)arg1 paddedFromTime:(SCD_Struct_TV2)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(void)setAudioProxyAsset:(AVURLAsset *)arg1 ;
-(AVURLAsset *)audioProxyAsset;
-(id)audioAsset;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_Mi11)arg2 destinationRange:(SCD_Struct_Mi11)arg3 ;
-(id)speedRangesForSourceRange:(SCD_Struct_Mi11)arg1 destinationRange:(SCD_Struct_Mi11)arg2 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV2)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
@end
