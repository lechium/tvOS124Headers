/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSArrayM : NSMutableArray {

	A{__cow_state_t}* cow;
	SCD_Struct_NS12* storage;

}
+(id)__new:(const id*)arg1 :(unsigned long long)arg2 :(BOOL)arg3 ;
+(id)__transferNew:(id*)arg1 :(unsigned long long)arg2 :(unsigned long long)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)_mutate;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end

