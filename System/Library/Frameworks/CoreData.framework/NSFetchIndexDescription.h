/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSEntityDescription, NSPredicate;

@interface NSFetchIndexDescription : NSObject <NSSecureCoding, NSCoding> {

	NSString* _name;
	NSArray* _elements;
	NSEntityDescription* _entity;
	NSPredicate* _partialIndexPredicate;

}

@property (copy) NSString * name; 
@property (copy) NSArray * elements; 
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (copy) NSPredicate * partialIndexPredicate; 
+(BOOL)supportsSecureCoding;
-(BOOL)_expressionIsCompoundIndexCompatible:(id)arg1 ;
-(void)_throwIfNotEditable;
-(id)initWithName:(id)arg1 elements:(id)arg2 ;
-(void)_setEntity:(id)arg1 ;
-(BOOL)_isMappedSinglePropertyIndex;
-(void)_setIsUnique:(BOOL)arg1 ;
-(BOOL)_isEditable;
-(id)_compoundIndexRepresentation;
-(BOOL)_isIndexForProperty:(id)arg1 ;
-(id)initWithName:(id)arg1 predicate:(id)arg2 elements:(id)arg3 entity:(id)arg4 ;
-(NSPredicate *)partialIndexPredicate;
-(void)_checkElements:(id)arg1 ;
-(BOOL)_isBinary;
-(BOOL)_isCompoundIndexCompatible;
-(BOOL)_isUnique;
-(void)setPartialIndexPredicate:(NSPredicate *)arg1 ;
-(void)_validateCollationTypeChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(BOOL)_isPurelyModeledIndex;
-(NSEntityDescription *)entity;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end

