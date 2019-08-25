/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebClipDelegate;
@class NSString, NSURL, NSArray, UIImage, NSMutableData, NSURLConnection;

@interface UIWebClip : NSObject {

	NSString* identifier;
	NSURL* pageURL;
	NSArray* icons;
	unsigned long long currentIconIndex;
	NSURL* startupImageURL;
	NSURL* startupLandscapeImageURL;
	NSString* title;
	BOOL fullScreen;
	BOOL classicMode;
	BOOL removalDisallowed;
	BOOL iconIsScreenShotBased;
	BOOL iconIsPrecomposed;
	BOOL iconIsPrerendered;
	unsigned long long supportedOrientations;
	long long statusBarStyle;
	UIImage* iconImage;
	UIImage* startupImage;
	UIImage* startupLandscapeImage;
	UIImage* initialLaunchImage;
	id<WebClipDelegate> delegate;
	NSMutableData* _customIconData;
	NSURLConnection* _iconConnection;
	NSMutableData* _customStartupImageData;
	NSURLConnection* _startupImageConnection;
	NSMutableData* _customStartupLandscapeImageData;
	NSURLConnection* _startupLandscapeImageConnection;
	unsigned long long _webClipStatusBarStyle;

}

@property (copy) NSString * identifier; 
@property (nonatomic,retain) NSURL * pageURL; 
@property (retain) NSArray * icons; 
@property (retain) NSURL * startupImageURL; 
@property (retain) NSURL * startupLandscapeImageURL; 
@property (nonatomic,copy) NSString * title; 
@property (assign) BOOL fullScreen; 
@property (assign) BOOL classicMode; 
@property (assign) BOOL removalDisallowed; 
@property (readonly) BOOL iconIsScreenShotBased; 
@property (readonly) BOOL iconIsPrecomposed; 
@property (readonly) BOOL iconIsPrerendered; 
@property (assign) unsigned long long supportedOrientations; 
@property (assign) long long statusBarStyle; 
@property (assign,nonatomic) unsigned long long webClipStatusBarStyle;              //@synthesize webClipStatusBarStyle=_webClipStatusBarStyle - In the implementation block
@property (readonly) NSString * iconImagePath; 
@property (nonatomic,retain,readonly) UIImage * iconImage; 
@property (nonatomic,retain) UIImage * startupImage; 
@property (nonatomic,retain) UIImage * startupLandscapeImage; 
@property (nonatomic,retain) UIImage * initialLaunchImage; 
@property (assign,nonatomic,__weak) id<WebClipDelegate> delegate; 
+(BOOL)_webClipFullScreenValueForMetaTagContent:(id)arg1 ;
+(unsigned long long)_webClipOrientationsForMetaTagContent:(id)arg1 ;
+(id)urlForWebClipWithIdentifier:(id)arg1 ;
+(id)pathForWebClipWithIdentifier:(id)arg1 ;
+(id)webClipWithIdentifier:(id)arg1 ;
+(id)webClipsDirectoryPath;
+(id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2 ;
+(long long)_webClipStatusBarStyleForMetaTagContent:(id)arg1 ;
+(id)_webClipLinkTagsFromWebDocumentView:(id)arg1 ;
+(id)webClipIconsForWebClipLinkTags:(id)arg1 pageURL:(id)arg2 ;
+(id)webClipWithURL:(id)arg1 ;
+(id)webClips;
+(BOOL)bundleIdentifierContainsWebClipIdentifier:(id)arg1 ;
+(id)webClipIdentifierFromBundleIdentifier:(id)arg1 ;
+(long long)webClipStatusBarStyleForWebDocumentView:(id)arg1 ;
+(BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1 ;
+(id)webClipTitleForWebDocumentView:(id)arg1 ;
+(BOOL)webClipClassicModeValueForWebDocumentView:(id)arg1 ;
+(unsigned long long)webClipOrientationsForWebDocumentView:(id)arg1 ;
+(id)webClipIconsForWebDocumentView:(id)arg1 ;
+(id)pathForWebClipStorageWithIdentifier:(id)arg1 ;
+(id)pathForWebClipCacheWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)bundleIdentifier;
-(void)setDelegate:(id<WebClipDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<WebClipDelegate>)delegate;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_info;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(NSArray *)icons;
-(void)setFullScreen:(BOOL)arg1 ;
-(void)setSupportedOrientations:(unsigned long long)arg1 ;
-(void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg1 baseURL:(id)arg2 ;
-(void)setPageURL:(NSURL *)arg1 ;
-(void)setClassicMode:(BOOL)arg1 ;
-(void)setRemovalDisallowed:(BOOL)arg1 ;
-(void)_readPropertiesFromBundle:(id)arg1 ;
-(void)_reloadProperties;
-(BOOL)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2 ;
-(void)setStartupImage:(UIImage *)arg1 ;
-(void)setStartupLandscapeImage:(UIImage *)arg1 ;
-(void)setInitialLaunchImage:(UIImage *)arg1 ;
-(BOOL)updateOnDisk;
-(id)_bundleResourceWithName:(id)arg1 ;
-(UIImage *)iconImage;
-(BOOL)iconIsPrecomposed;
-(id)_bundleImageWithName:(id)arg1 ;
-(void)_setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 isScreenShotBased:(BOOL)arg3 ;
-(void)cancelMediaUpdate;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)stopLoadingCustomIcon;
-(void)stopLoadingStartupImage;
-(void)stopLoadingStartupLandscapeImage;
-(BOOL)fullScreen;
-(void)setIcons:(NSArray *)arg1 ;
-(void)setStartupImageURL:(NSURL *)arg1 ;
-(void)setStartupLandscapeImageURL:(NSURL *)arg1 ;
-(void)requestCustomIconUpdate;
-(void)requestCustomPortraitStartupImageUpdate;
-(void)requestCustomLandscapeStartupImageUpdate;
-(BOOL)tryLoadingNextCustomIcon;
-(void)setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 ;
-(void)requestIconUpdateInSpringBoard;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(UIImage *)startupImage;
-(UIImage *)startupLandscapeImage;
-(void)configureWithMetaTags:(id)arg1 linkTags:(id)arg2 ;
-(NSURL *)pageURL;
-(BOOL)createOnDisk;
-(BOOL)removeFromDisk;
-(NSString *)iconImagePath;
-(id)generateIconImageForFormat:(int)arg1 scale:(double)arg2 ;
-(void)setIconImageFromScreenshot:(id)arg1 ;
-(UIImage *)initialLaunchImage;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)getStartupImage:(long long)arg1 ;
-(NSURL *)startupImageURL;
-(NSURL *)startupLandscapeImageURL;
-(BOOL)classicMode;
-(BOOL)removalDisallowed;
-(BOOL)iconIsScreenShotBased;
-(BOOL)iconIsPrerendered;
-(unsigned long long)supportedOrientations;
-(unsigned long long)webClipStatusBarStyle;
-(void)setWebClipStatusBarStyle:(unsigned long long)arg1 ;
@end

