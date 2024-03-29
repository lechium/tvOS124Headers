/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long count; 
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)_alloc;
+(id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 ;
+(id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithSet:(id)arg1 ;
+(id)array;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)arrayWithObjects:(id)arg1 ;
+(id)arrayWithArray:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)pathsMatchingExtensions:(id)arg1 ;
-(id)stringsByAppendingPathComponent:(id)arg1 ;
-(void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_unionOfSetsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)_stringToWrite;
-(id)sortedArrayHint;
-(id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(BOOL)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)reversedArray;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(BOOL)isNSArray__;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)lastObject;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allObjects;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)firstObject;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)componentsJoinedByString:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)objectEnumerator;
-(id)initWithArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(id)reverseObjectEnumerator;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)arrayByExcludingObjectsInArray:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
@end

