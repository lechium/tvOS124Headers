/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class NSOrderedSet, TDRadiosityImageRenditionSpec;

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (nonatomic,retain) NSOrderedSet * layerReferences; 
@property (nonatomic,retain) TDRadiosityImageRenditionSpec * radiosityImage; 
-(void)drawFlattenedImageIntoContext:(CGContextRef)arg1 document:(id)arg2 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)addLayerReferencesObject:(id)arg1 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
@end

