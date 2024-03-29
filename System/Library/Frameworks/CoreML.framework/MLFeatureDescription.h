/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, MLMultiArrayConstraint, MLImageConstraint, MLDictionaryConstraint, MLSequenceConstraint;

@interface MLFeatureDescription : NSObject <NSCopying> {

	BOOL _optional;
	NSString* _name;
	long long _type;
	NSDictionary* _valueConstraints;
	MLMultiArrayConstraint* _multiArrayConstraintCached;
	MLImageConstraint* _imageConstraintCached;
	MLDictionaryConstraint* _dictionaryConstraintCached;
	MLSequenceConstraint* _sequenceConstraintCached;

}

@property (retain) NSDictionary * valueConstraints;                                              //@synthesize valueConstraints=_valueConstraints - In the implementation block
@property (nonatomic,readonly) MLMultiArrayConstraint * multiArrayConstraintCached;              //@synthesize multiArrayConstraintCached=_multiArrayConstraintCached - In the implementation block
@property (nonatomic,readonly) MLImageConstraint * imageConstraintCached;                        //@synthesize imageConstraintCached=_imageConstraintCached - In the implementation block
@property (nonatomic,readonly) MLDictionaryConstraint * dictionaryConstraintCached;              //@synthesize dictionaryConstraintCached=_dictionaryConstraintCached - In the implementation block
@property (nonatomic,readonly) MLSequenceConstraint * sequenceConstraintCached;                  //@synthesize sequenceConstraintCached=_sequenceConstraintCached - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (getter=isOptional,nonatomic,readonly) BOOL optional;                                  //@synthesize optional=_optional - In the implementation block
+(id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 constraints:(id)arg4 ;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 contraints:(id)arg4 ;
-(id)dictionaryConstraint;
-(id)sequenceConstraint;
-(BOOL)isAllowedValue:(id)arg1 ;
-(BOOL)allowsValuesWithDescription:(id)arg1 ;
-(NSDictionary *)valueConstraints;
-(void)setValueConstraints:(NSDictionary *)arg1 ;
-(MLMultiArrayConstraint *)multiArrayConstraintCached;
-(MLImageConstraint *)imageConstraintCached;
-(MLDictionaryConstraint *)dictionaryConstraintCached;
-(MLSequenceConstraint *)sequenceConstraintCached;
-(id)multiArrayConstraint;
-(id)imageConstraint;
-(BOOL)isOptional;
-(NSString *)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(id)debugQuickLookObject;
@end

