/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _attributes;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	id _reserved5;

}

@property (nonatomic,readonly) NSString * postscriptName; 
@property (nonatomic,readonly) double pointSize; 
@property (nonatomic,readonly) CGAffineTransform matrix; 
@property (nonatomic,readonly) unsigned symbolicTraits; 
@property (nonatomic,readonly) NSDictionary * fontAttributes; 
+(id)_createMungledDictionary:(id)arg1 ;
+(id)fontDescriptorWithName:(id)arg1 matrix:(CGAffineTransform)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 ;
+(id)fontDescriptorWithFontAttributes:(id)arg1 ;
+(id)fontDescriptorWithName:(id)arg1 size:(double)arg2 ;
-(id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2 ;
-(NSString *)postscriptName;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1 ;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg1 ;
-(id)fontDescriptorWithSize:(double)arg1 ;
-(id)fontDescriptorWithMatrix:(CGAffineTransform)arg1 ;
-(id)fontDescriptorWithFamily:(id)arg1 ;
-(id)fontDescriptorWithDesign:(id)arg1 ;
-(id)_visibleName;
-(id)_attributes;
-(CGAffineTransform)matrix;
-(id)fontDescriptorWithFace:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)pointSize;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 ;
-(NSDictionary *)fontAttributes;
-(id)fontDescriptorByAddingAttributes:(id)arg1 ;
-(Class)classForCoder;
-(unsigned)symbolicTraits;
-(id)initWithFontAttributes:(id)arg1 ;
@end

