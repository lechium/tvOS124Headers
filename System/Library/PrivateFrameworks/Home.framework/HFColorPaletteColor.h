/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFColorCollection, UIColor, NSString;

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying> {

	HFColorCollection* _colorCollection;

}

@property (nonatomic,readonly) HFColorCollection * colorCollection;              //@synthesize colorCollection=_colorCollection - In the implementation block
@property (nonatomic,readonly) UIColor * UIColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(HFColorCollection *)colorCollection;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(id)initWithColorCollection:(id)arg1 ;
-(UIColor *)UIColor;
-(id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)arg1 ;
-(id)colorByAdjustingToColorProfile:(id)arg1 ;
-(BOOL)isSimilarToColor:(id)arg1 ignoreTemperature:(BOOL)arg2 ;
-(BOOL)isSimilarToColor:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
@end

