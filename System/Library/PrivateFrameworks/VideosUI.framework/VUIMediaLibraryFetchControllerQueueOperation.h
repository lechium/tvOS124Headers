/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray;

@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation {

	NSArray* _fetchControllers;
	unsigned long long _mediaLibraryRevision;

}

@property (nonatomic,copy) NSArray * fetchControllers;                             //@synthesize fetchControllers=_fetchControllers - In the implementation block
@property (assign,nonatomic) unsigned long long mediaLibraryRevision;              //@synthesize mediaLibraryRevision=_mediaLibraryRevision - In the implementation block
-(id)init;
-(void)executionDidBegin;
-(NSArray *)fetchControllers;
-(unsigned long long)mediaLibraryRevision;
-(id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(unsigned long long)arg2 ;
-(void)setFetchControllers:(NSArray *)arg1 ;
-(void)setMediaLibraryRevision:(unsigned long long)arg1 ;
@end
