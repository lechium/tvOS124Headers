/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHFetchDictionaryAccessing.h>
#import <libobjc.A.dylib/PHMutableFetchDictionaryAccessing.h>

@class PLManagedObject, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing> {

	PLManagedObject* _backingManagedObject;
	NSMutableOrderedSet* _ignoredKeys;
	NSMutableDictionary* _modifiedKeyValues;

}

@property (nonatomic,readonly) PLManagedObject * backingManagedObject;              //@synthesize backingManagedObject=_backingManagedObject - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * ignoredKeys;                     //@synthesize ignoredKeys=_ignoredKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifiedKeyValues;               //@synthesize modifiedKeyValues=_modifiedKeyValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPLManagedObject:(id)arg1 ;
-(id)objectWithPropertySets:(id)arg1 ;
-(id)mutableAccessingCopy;
-(PLManagedObject *)backingManagedObject;
-(NSMutableOrderedSet *)ignoredKeys;
-(void)setIgnoredKeys:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)modifiedKeyValues;
-(void)setModifiedKeyValues:(NSMutableDictionary *)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
@end

