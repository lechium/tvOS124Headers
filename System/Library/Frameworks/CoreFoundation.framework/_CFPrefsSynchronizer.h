/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsSynchronizer : NSObject {

	NSObject*<OS_dispatch_source> _synchTimer;
	NSObject*<OS_dispatch_queue> _synchQueue;
	CFSetRef _dirtySources;
	opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
	BOOL _active;

}
+(id)sharedInstance;
-(void)enableTimer_alreadyLocked;
-(void)clear_alreadyLocked;
-(const CFSetRef)copyDirtySourcesSnapshotAndClear;
-(void)disableTimer_alreadyLocked;
-(void)noteDirtySource:(id)arg1 ;
-(void)synchronizeForDaemonTermination;
-(id)init;
-(void)synchronize;
-(void)clear;
@end

