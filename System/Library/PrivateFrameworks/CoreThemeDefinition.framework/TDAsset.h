/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, TDThemeBitSource, TDTemplateRenderingMode;

@interface TDAsset : NSManagedObject {

	unsigned _scaleFactor;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) TDThemeBitSource * source; 
@property (nonatomic,readonly) NSString * baseName; 
@property (nonatomic,retain) TDTemplateRenderingMode * templateRenderingMode; 
+(unsigned)scaleFactorFromImageFilename:(id)arg1 ;
+(id)_filenameRegex;
+(BOOL)isTemplateFromImageFilename:(id)arg1 ;
+(long long)idiomFromImageFilename:(id)arg1 ;
+(long long)subtypeFromImageFilename:(id)arg1 ;
-(id)fileURLWithDocument:(id)arg1 ;
-(BOOL)hasProduction;
-(id)_sourceRelativePathComponents;
-(id)sourceRelativePath;
-(void)setHasProduction:(id)arg1 ;
-(NSString *)baseName;
-(unsigned)scaleFactor;
-(void)setScaleFactor:(unsigned)arg1 ;
@end

