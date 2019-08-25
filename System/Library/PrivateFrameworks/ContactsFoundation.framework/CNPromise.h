/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNPromise.h>

@class CNFuture, NSString;

@interface CNPromise : NSObject <CNPromise> {

	CNFuture* _future;

}

@property (readonly) CNFuture * future;                             //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)finishWithResult:(id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(BOOL)finishWithError:(id)arg1 ;
-(CNFuture *)future;
-(id)init;
-(void)dealloc;
@end

