/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSSet, NSDictionary;

@interface _LSPlistHint : NSObject {

	NSSet* _keys;
	NSDictionary* _cachedValues;
	os_unfair_lock_s _valueLock;
	BOOL _cachedValuesAreComplete;
	BOOL _keysAreCompacted;

}

@property (retain) NSDictionary * completeDictionary; 
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 compacted:(BOOL)arg2 ;
-(NSDictionary *)completeDictionary;
-(void)setCompleteDictionary:(NSDictionary *)arg1 ;
-(BOOL)hasValueForKey:(id)arg1 ;
-(id)debugDescription;
@end

