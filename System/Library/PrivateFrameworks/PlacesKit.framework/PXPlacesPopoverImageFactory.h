/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
#import <PlacesKit/PlacesKit-Structs.h>
@class NSCache, UIColor;

@interface PXPlacesPopoverImageFactory : NSObject {

	NSCache* _cachedBackgroundImages;
	UIColor* _defaultBackgroundColor;
	id<NSObject> _memoryWarningObserver;

}

@property (nonatomic,retain) NSCache * cachedBackgroundImages;                //@synthesize cachedBackgroundImages=_cachedBackgroundImages - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) id<NSObject> memoryWarningObserver;              //@synthesize memoryWarningObserver=_memoryWarningObserver - In the implementation block
+(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
+(id)sharedInstance;
-(id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(id<NSObject>)memoryWarningObserver;
-(void)setMemoryWarningObserver:(id<NSObject>)arg1 ;
-(CGSize)thumbnailImageSizeForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 includeScale:(BOOL)arg3 ;
-(id)annotationPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(id)createPopoverImageForGeotaggable:(id)arg1 withImage:(CGImageRef)arg2 imageType:(unsigned long long)arg3 usingTraitCollection:(id)arg4 ;
-(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)_fetchAndCacheBackgroundImageWithName:(id)arg1 ;
-(double)thumbnailTopMarginForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(CGSize)backgroundImageSizeForPopoverAnnotation;
-(NSCache *)cachedBackgroundImages;
-(void)setCachedBackgroundImages:(NSCache *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)imageNamed:(id)arg1 ;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColor;
@end

