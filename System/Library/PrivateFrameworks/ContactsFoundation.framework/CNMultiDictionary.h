/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _entries;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)multiDictionary;
-(BOOL)containsKey:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
-(void)eachObject:(/*^block*/id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)allKeys;
-(NSDictionary *)dictionaryRepresentation;
-(id)objectsForKeys:(id)arg1 ;
@end
