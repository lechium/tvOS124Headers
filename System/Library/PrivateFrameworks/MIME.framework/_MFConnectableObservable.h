/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>
#import <libobjc.A.dylib/MFConnectableObservable.h>

@protocol MFObservable;
@class MFCancelationToken, NSLock, NSMapTable, NSString;

@interface _MFConnectableObservable : MFObservable <MFConnectableObservable> {

	id<MFObservable> _observable;
	MFCancelationToken* _cancelable;
	NSLock* _lock;
	NSMapTable* _observersToCancelable;
	BOOL _connected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObservable:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
-(id)connect;
@end

