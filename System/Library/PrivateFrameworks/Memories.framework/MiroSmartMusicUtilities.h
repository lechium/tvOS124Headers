/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface MiroSmartMusicUtilities : NSObject
+(double)normalizeGainForRendition:(id)arg1 ;
+(id)metadataItemAtTime:(SCD_Struct_TV2)arg1 fromMetadataItems:(id)arg2 findNearest:(BOOL)arg3 ;
+(id)beatMetadataItemForBeatIndex:(long long)arg1 andBarIndex:(long long)arg2 nearBeatMetadataItem:(id)arg3 fromBeatMetadataItems:(id)arg4 ;
+(double)averageBarDurationForFlexAudioClipInSeconds:(id)arg1 ;
+(id)_peakAndLoudnessForRendition:(id)arg1 ;
+(id)metadataItemAtTime:(SCD_Struct_TV2)arg1 fromMetadataItems:(id)arg2 ;
+(SCD_Struct_TV2)averageBarDurationForFlexAudioClip:(id)arg1 ;
+(SCD_Struct_TV2)durationOfOutroForFlexAudioClip:(id)arg1 ;
+(SCD_Struct_TV2)durationOfIntroForFlexAudioClip:(id)arg1 ;
@end

