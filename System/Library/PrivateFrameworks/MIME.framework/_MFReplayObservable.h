/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@class NSLock, MFObservable, MFQueue;

@interface _MFReplayObservable : MFObservable {

	NSLock* _lock;
	MFObservable* _observable;
	MFQueue* _queue;

}
-(id)subscribe:(id)arg1 ;
-(void)_enqueue:(id)arg1 ;
-(id)initWithObservable:(id)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
@end
