/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MiroPosterGenerationInfo : NSObject <NSCopying> {

	BOOL _sourceImageWasCloudThumb;
	BOOL _analysisDataWasAvailable;

}

@property (assign) BOOL sourceImageWasCloudThumb;              //@synthesize sourceImageWasCloudThumb=_sourceImageWasCloudThumb - In the implementation block
@property (assign) BOOL analysisDataWasAvailable;              //@synthesize analysisDataWasAvailable=_analysisDataWasAvailable - In the implementation block
-(BOOL)sourceImageWasCloudThumb;
-(BOOL)analysisDataWasAvailable;
-(void)setSourceImageWasCloudThumb:(BOOL)arg1 ;
-(void)setAnalysisDataWasAvailable:(BOOL)arg1 ;
-(id)storageKeyHint;
-(BOOL)isActualPoster;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

