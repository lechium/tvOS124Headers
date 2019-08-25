/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroMemoryPosterStore : NSObject
-(id)_sanitizedFullPosterFilename:(id)arg1 generationInfo:(id)arg2 ;
-(id)_storedPosterImageDirectoryForMemory:(id)arg1 ;
-(id)_sanitizedPosterDirectoryName:(id)arg1 ;
-(id)posterImageStorePathBase;
-(id)_storedPosterImagePathForMemory:(id)arg1 generationInfo:(id)arg2 ;
-(id)posterImageForMemory:(id)arg1 generationInfo:(id)arg2 ;
-(void)storePosterImageWithData:(id)arg1 forMemory:(id)arg2 generationInfo:(id)arg3 ;
-(void)deletePosterStoreForMemory:(id)arg1 ;
-(void)clearOldPostersForMemory:(id)arg1 saveInfo:(id)arg2 ;
-(BOOL)posterImageExistsForMemory:(id)arg1 generationInfo:(id)arg2 ;
@end

