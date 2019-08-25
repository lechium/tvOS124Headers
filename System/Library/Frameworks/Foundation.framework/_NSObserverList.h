/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSObserverList : NSObject {

	id _owner;
	id _observers;
	AI _observerCount;
	os_unfair_lock_s _observersLock;

}
+(id)_copyObserversOfObject:(id)arg1 creatingIfAbsent:(BOOL)arg2 ;
+(void)destroyObserverListForObject:(id)arg1 ;
-(void)_receiveBox:(id)arg1 ;
-(void)_directAddObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 observation:(id)arg2 ;
-(void)removeBlockSink:(/*^block*/id)arg1 observation:(id)arg2 ;
-(id)addBlockSink:(/*^block*/id)arg1 toObservableObject:(id)arg2 forTag:(int)arg3 ;
-(id)addObserver:(id)arg1 toObservableObject:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)finishObserving;
-(void)removeObservation:(id)arg1 ;
@end

