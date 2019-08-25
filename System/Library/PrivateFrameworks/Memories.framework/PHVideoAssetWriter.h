/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/PHAssetWriter.h>

@class AVAssetExportSession;

@interface PHVideoAssetWriter : PHAssetWriter {

	AVAssetExportSession* _exportSession;

}

@property (nonatomic,retain) AVAssetExportSession * exportSession;              //@synthesize exportSession=_exportSession - In the implementation block
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(id)transfer;
-(AVAssetExportSession *)exportSession;
-(unsigned long long)_estimatedOutputSizeWithError:(id*)arg1 ;
-(id)requestWithNetworkAccess:(BOOL)arg1 ;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
-(id)request;
@end

