/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject, NSMutableSet, NSArray;

@interface FigDisplayMirroringChangeObserver : NSObject {

	OpaqueFigPlayerRef _player;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _clonedDisplays;
	NSMutableSet* _cloningSupportedDisplays;
	NSArray* _baseDisplayList;

}
-(void)removeReferenceToPlayer;
-(void)setBaseDisplayList:(id)arg1 ;
-(void)updatePlayerDisplayList;
-(id)initWithPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

