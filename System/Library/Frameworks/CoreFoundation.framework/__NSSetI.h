/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface __NSSetI : NSSet {

	unsigned _used : 58;
	unsigned _szidx : 6;
	id _list[0];

}
+(id)__new:(const id*)arg1 :(char*)arg2 :(unsigned long long)arg3 :(BOOL)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(double)clumpingFactor;
-(double)clumpingInterestingThreshold;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectEnumerator;
-(id)member:(id)arg1 ;
@end

