/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface LocalAttachmentCleanUpSupport : NSObject {

	NSObject*<OS_dispatch_source> _source;

}
-(void)interruptNextScheduledCleanup;
-(void)_dispatchCleanupAfterDelay:(long long)arg1 ;
-(void)scheduleNextCleanup;
-(void)_setTimerOnSource:(long long)arg1 ;
-(void)cleanUpOrphanedFiles;
-(id)init;
-(void)dealloc;
@end
