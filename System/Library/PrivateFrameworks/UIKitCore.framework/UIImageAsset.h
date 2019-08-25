/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIAssetManager, NSBundle, UITraitCollection, NSString, CUINamedLayerStack;

@interface UIImageAsset : NSObject <NSSecureCoding> {

	_UIAssetManager* _assetManager;
	NSBundle* _containingBundle;
	BOOL _cacheContents;
	UITraitCollection* _defaultTraitCollection;
	struct {
		unsigned hasRegisteredImages : 1;
		unsigned supportsBlockGeneration : 1;
		unsigned disconnectedFromAssetManager : 1;
	}  _assetFlags;
	/*^block*/id _creationBlock;
	NSString* _assetName;
	CUINamedLayerStack* __layerStack;

}

@property (nonatomic,copy) id creationBlock;                                        //@synthesize creationBlock=_creationBlock - In the implementation block
@property (nonatomic,copy) NSString * assetName;                                    //@synthesize assetName=_assetName - In the implementation block
@property (nonatomic,__weak,readonly) _UIAssetManager * _assetManager;              //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) CUINamedLayerStack * _layerStack;                      //@synthesize _layerStack=__layerStack - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_assetGeneratingImagesWithDrawingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_defaultTraitCollection;
-(id)imageWithTraitCollection:(id)arg1 ;
-(void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 cache:(BOOL)arg3 ;
-(CUINamedLayerStack *)_layerStack;
-(void)setCreationBlock:(id)arg1 ;
-(id)_mutableCatalog;
-(id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
-(NSString *)assetName;
-(id)_updateAssetFromBlockGenerationWithTraitCollection:(id)arg1 resolvedCatalogImage:(id)arg2 ;
-(id)creationBlock;
-(id)_initWithAssetName:(id)arg1 forManager:(id)arg2 ;
-(id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2 ;
-(void)registerImage:(id)arg1 withTraitCollection:(id)arg2 ;
-(void)unregisterImageWithTraitCollection:(id)arg1 ;
-(void)_clearResolvedImageResources;
-(BOOL)_containsImagesInPath:(id)arg1 ;
-(void)_disconnectFromAssetManager;
-(_UIAssetManager *)_assetManager;
-(void)setAssetName:(NSString *)arg1 ;
-(void)set_layerStack:(CUINamedLayerStack *)arg1 ;
@end

