/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVLPreviewFactoryDelegate;
@class TVLMenuElement, TVLElement, NSIndexPath, NSTimer;

@interface TVLPreviewFactory : NSObject {

	TVLMenuElement* _menuElement;
	TVLElement* _defaultPreviewElement;
	NSIndexPath* _indexPath;
	id<TVLPreviewFactoryDelegate> _delegate;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSTimer * timer;                                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) TVLMenuElement * menuElement;                               //@synthesize menuElement=_menuElement - In the implementation block
@property (nonatomic,retain) TVLElement * defaultPreviewElement;                         //@synthesize defaultPreviewElement=_defaultPreviewElement - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                  //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic,__weak) id<TVLPreviewFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(TVLMenuElement *)menuElement;
-(void)setMenuElement:(TVLMenuElement *)arg1 ;
-(void)updatePreview:(id)arg1 forIndexPath:(id)arg2 ;
-(id)previewElementAtIndexPath:(id)arg1 ;
-(void)loadPreviewFromURLString:(id)arg1 javascriptContext:(id)arg2 forIndexPath:(id)arg3 ;
-(id)menuItemElementAtIndexPath:(id)arg1 ;
-(TVLElement *)defaultPreviewElement;
-(void)updatePreview:(id)arg1 forIndexPath:(id)arg2 withHysteresis:(double)arg3 ;
-(void)setDefaultPreviewElement:(TVLElement *)arg1 ;
-(void)setDelegate:(id<TVLPreviewFactoryDelegate>)arg1 ;
-(id<TVLPreviewFactoryDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)timerFired:(id)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
@end

