/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/_CNObservableSkipUntilSignalObserverDelegate.h>
#import <libobjc.A.dylib/_CNObservableSkipUntilInputObserverDelegate.h>

@protocol CNCancelable;
@class CNObservable, NSString;

@interface _CNObservableSkipUntilOperator : CNObservable <_CNObservableSkipUntilSignalObserverDelegate, _CNObservableSkipUntilInputObserverDelegate> {

	BOOL _active;
	CNObservable* _input;
	CNObservable* _signal;
	id<CNCancelable> _inputToken;
	id<CNCancelable> _signalToken;

}

@property (readonly) CNObservable * input;                          //@synthesize input=_input - In the implementation block
@property (readonly) CNObservable * signal;                         //@synthesize signal=_signal - In the implementation block
@property (getter=isActive) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (retain) id<CNCancelable> inputToken;                     //@synthesize inputToken=_inputToken - In the implementation block
@property (retain) id<CNCancelable> signalToken;                    //@synthesize signalToken=_signalToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldMirrorEvents;
-(void)inputDidTerminate;
-(id)initWithInput:(id)arg1 signal:(id)arg2 ;
-(void)setSignalToken:(id<CNCancelable>)arg1 ;
-(void)setInputToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)inputToken;
-(id<CNCancelable>)signalToken;
-(void)signalDidGenerateEvent;
-(id)subscribe:(id)arg1 ;
-(NSString *)description;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)cancel;
-(CNObservable *)input;
-(CNObservable *)signal;
@end

