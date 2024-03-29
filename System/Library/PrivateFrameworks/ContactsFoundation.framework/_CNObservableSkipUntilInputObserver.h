/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver, _CNObservableSkipUntilInputObserverDelegate;
@class NSString;

@interface _CNObservableSkipUntilInputObserver : NSObject <CNObserver> {

	id<CNObserver> _observer;
	id<_CNObservableSkipUntilInputObserverDelegate> _delegate;

}

@property (readonly) id<CNObserver> observer;                                                      //@synthesize observer=_observer - In the implementation block
@property (__weak,readonly) id<_CNObservableSkipUntilInputObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
-(NSString *)description;
-(id<_CNObservableSkipUntilInputObserverDelegate>)delegate;
-(id<CNObserver>)observer;
@end

