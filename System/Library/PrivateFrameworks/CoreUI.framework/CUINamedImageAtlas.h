/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSDictionary, NSArray;

@interface CUINamedImageAtlas : CUINamedLookup {

	NSDictionary* _images;
	NSArray* _renditions;
	CFArrayRef _atlasImages;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CFArrayRef images; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) NSArray * imageNames; 
@property (nonatomic,readonly) BOOL completeTextureExtrusion; 
-(id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2 ;
-(BOOL)_dimension1ExistsInKeyFormatForThemeRef:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6 ;
-(id)imageWithName:(id)arg1 ;
-(NSArray *)imageNames;
-(BOOL)completeTextureExtrusion;
-(void)dealloc;
-(double)scale;
-(CGImageRef)image;
-(CFArrayRef)images;
@end

