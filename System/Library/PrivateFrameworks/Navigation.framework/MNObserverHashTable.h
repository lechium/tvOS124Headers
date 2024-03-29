/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Protocol, NSHashTable;

@interface MNObserverHashTable : NSObject {

	Protocol* _protocol;
	NSHashTable* _observers;

}

@property (readonly) BOOL hasObservers; 
-(BOOL)hasObservers;
-(id)initWithProtocol:(id)arg1 ;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

