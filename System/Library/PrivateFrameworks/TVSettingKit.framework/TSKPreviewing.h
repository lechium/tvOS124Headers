/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKPreviewing <NSObject>
@property (assign,nonatomic,__weak) id<TSKPreviewingDelegate> previewingDelegate; 
@required
-(id<TSKPreviewingDelegate>)previewingDelegate;
-(id)defaultIndexPathForPreview;
-(id)previewForItemAtIndexPath:(id)arg1;
-(id)sourceViewForSlideTransition;
-(BOOL)hasFullscreenPreview;
-(void)setPreviewingDelegate:(id)arg1;

@end

