/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray {

	int _cd_rc;
	unsigned _editCount;
	unsigned _offset;
	unsigned _limit;
	_PFArray* _originalArray;
	NSMutableArray* _updatedObjectsArray;
	CFArrayRef _indicesVeneer;

}
+(Class)classForKeyedUnarchiver;
-(Class)classForArchiver;
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)initWithPFArray:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_rehash;
-(id)initWithPFArray:(id)arg1 ;
-(void)finalize;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)mutableCopy;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeLastObject;
-(oneway void)release;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end

