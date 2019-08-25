/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding> {

	Class _aggregateEntityClass;
	NSString* _foreignPersistentIDProperty;
	BOOL _isFastCountable;

}

@property (nonatomic,readonly) Class aggregateEntityClass;                          //@synthesize aggregateEntityClass=_aggregateEntityClass - In the implementation block
@property (nonatomic,readonly) NSString * foreignPersistentIDProperty;              //@synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty - In the implementation block
@property (assign,nonatomic) BOOL isFastCountable;                                  //@synthesize isFastCountable=_isFastCountable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)persistentIDProperty;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(Class)aggregateEntityClass;
-(id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3 ;
-(BOOL)isFastCountable;
-(void)setIsFastCountable:(BOOL)arg1 ;
-(Class)entityClass;
-(BOOL)hasEntities;
-(unsigned long long)countOfEntities;
-(NSString *)foreignPersistentIDProperty;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

