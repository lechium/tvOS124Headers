/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/PXPlacesMapAnnotationViewFadable.h>

@class PKExtendedTraitCollection, UILabel, UIImageView, PXPlacesImageCache, NSString;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {

	long long _geotaggablesCount;
	/*^block*/id _displayCompletion;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id _extendedTraitObserver;
	UILabel* _countLabel;
	UIImageView* _countLabelBackgroundImageView;
	PXPlacesImageCache* _imageCache;

}

@property (nonatomic,retain) PKExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,retain) id extendedTraitObserver;                                         //@synthesize extendedTraitObserver=_extendedTraitObserver - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                                             //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UIImageView * countLabelBackgroundImageView;                      //@synthesize countLabelBackgroundImageView=_countLabelBackgroundImageView - In the implementation block
@property (nonatomic,retain) PXPlacesImageCache * imageCache;                                  //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,copy) id displayCompletion;                                               //@synthesize displayCompletion=_displayCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_thumbnailFetchOperationQueue;
+(id)_thumbnailCreationOperationQueue;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
-(UILabel *)countLabel;
-(PXPlacesImageCache *)imageCache;
-(void)setImageCache:(PXPlacesImageCache *)arg1 ;
-(id)renderToImage;
-(id)extendedTraitObserver;
-(void)_reloadData:(BOOL)arg1 ;
-(void)_hideCountLabel;
-(id)displayCompletion;
-(void)setDisplayCompletion:(id)arg1 ;
-(id)_countLabelBackgroundColor;
-(id)primaryGeotaggable;
-(id)userCacheKey;
-(void)_reloadCount:(long long)arg1 ;
-(void)_fetchImageWithNetworkAccessAllowed:(BOOL)arg1 ;
-(void)_processPlaceHolderForGeotaggable:(id)arg1 ;
-(void)_processPostImage;
-(void)_processGeotaggable:(id)arg1 withImage:(CGImageRef)arg2 popoverImageType:(unsigned long long)arg3 shouldCache:(BOOL)arg4 ;
-(UIImageView *)countLabelBackgroundImageView;
-(void)_showCountLabel;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 extendedTraitCollection:(id)arg3 imageCache:(id)arg4 ;
-(void)setExtendedTraitObserver:(id)arg1 ;
-(void)setCountLabelBackgroundImageView:(UIImageView *)arg1 ;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)prepareForReuse;
-(void)setAnnotation:(id)arg1 ;
@end

