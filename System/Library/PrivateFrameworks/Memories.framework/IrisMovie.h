/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VideoMovie.h>

@interface IrisMovie : VideoMovie {

	SCD_Struct_TV2 _cachedPreciseAssetStart;

}

@property (assign,nonatomic) SCD_Struct_TV2 cachedPreciseAssetStart;              //@synthesize cachedPreciseAssetStart=_cachedPreciseAssetStart - In the implementation block
@property (nonatomic,readonly) BOOL front; 
-(void)cacheVideoTrackInformationOfAsset:(id)arg1 ;
-(SCD_Struct_TV2)cachedPreciseAssetStart;
-(void)setCachedPreciseAssetStart:(SCD_Struct_TV2)arg1 ;
-(BOOL)front;
-(id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_TV2)startTime;
-(int)duration;
@end

