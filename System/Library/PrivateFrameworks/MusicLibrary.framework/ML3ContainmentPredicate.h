/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate {

	NSSet* _values;

}

@property (nonatomic,retain) NSSet * values;              //@synthesize values=_values - In the implementation block
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(id)_orderedValues;
-(id)initWithProperty:(id)arg1 values:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setValues:(NSSet *)arg1 ;
-(NSSet *)values;
@end
