/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@protocol MFObservable;
@class NSLock;

@interface _MFDistinctUntilChangedObservable : MFObservable {

	id<MFObservable> _observable;
	id _lastObservedResult;
	NSLock* _lock;

}
-(id)initWithObservable:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(BOOL)_isLastResultDistinctFromResult:(id)arg1 ;
-(void)dealloc;
@end
