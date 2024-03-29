/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray;

@interface CNContactFetchRequest : NSObject <NSSecureCoding> {

	BOOL _rankSort;
	BOOL _mutableObjects;
	BOOL _unifyResults;
	BOOL _disallowsEncodedFetch;
	BOOL _onlyMainStore;
	BOOL _allowsBatching;
	NSPredicate* _predicate;
	NSArray* _keysToFetch;
	long long _sortOrder;
	unsigned long long _batchSize;

}

@property (assign,nonatomic) BOOL disallowsEncodedFetch;                //@synthesize disallowsEncodedFetch=_disallowsEncodedFetch - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) BOOL rankSort;                             //@synthesize rankSort=_rankSort - In the implementation block
@property (assign,nonatomic) BOOL onlyMainStore;                        //@synthesize onlyMainStore=_onlyMainStore - In the implementation block
@property (assign,nonatomic) BOOL allowsBatching;                       //@synthesize allowsBatching=_allowsBatching - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                     //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * keysToFetch;                       //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL mutableObjects;                       //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (assign,nonatomic) BOOL unifyResults;                         //@synthesize unifyResults=_unifyResults - In the implementation block
@property (assign,nonatomic) long long sortOrder;                       //@synthesize sortOrder=_sortOrder - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)sortOrder;
-(void)setSortOrder:(long long)arg1 ;
-(BOOL)unifyResults;
-(BOOL)mutableObjects;
-(BOOL)onlyMainStore;
-(id)effectivePredicate;
-(id)effectiveKeysToFetch;
-(void)setDisallowsEncodedFetch:(BOOL)arg1 ;
-(BOOL)disallowsEncodedFetch;
-(BOOL)requiresMeContactAuthorization;
-(BOOL)rankSort;
-(void)setMutableObjects:(BOOL)arg1 ;
-(BOOL)allowsBatching;
-(void)setAllowsBatching:(BOOL)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)setOnlyMainStore:(BOOL)arg1 ;
-(void)setRankSort:(BOOL)arg1 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(id)initWithKeysToFetch:(id)arg1 ;
-(void)setUnifyResults:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
@end

