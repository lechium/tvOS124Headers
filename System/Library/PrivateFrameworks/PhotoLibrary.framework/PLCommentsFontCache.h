/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFontDescriptor, UIFont;

@interface PLCommentsFontCache : NSObject {

	UIFontDescriptor* __shortCaptionFontDescriptor;
	UIFontDescriptor* __emphasizedShortCaptionFontDescriptor;
	UIFontDescriptor* __shortSubheadlineFontDescriptor;
	UIFontDescriptor* __bodyFontDescriptor;
	UIFontDescriptor* __emphasizedBodyFontDescriptor;
	UIFontDescriptor* __shortBodyFontDescriptor;

}

@property (nonatomic,readonly) UIFont * youLikeFont; 
@property (nonatomic,readonly) UIFont * likeFont; 
@property (nonatomic,readonly) UIFont * commentTextFont; 
@property (nonatomic,readonly) UIFont * commentAttributionDateFont; 
@property (nonatomic,readonly) UIFont * commentAttributionNameFont; 
@property (nonatomic,readonly) UIFont * commentEntryFont; 
@property (nonatomic,readonly) UIFont * commentSendButtonFont; 
+(id)sharedCache;
-(void)_contentSizesDidChange:(id)arg1 ;
-(id)_shortCaptionFontDescriptor;
-(id)_bodyFontDescriptor;
-(id)_emphasizedShortCaptionFontDescriptor;
-(id)_shortSubheadlineFontDescriptor;
-(id)_shortBodyFontDescriptor;
-(id)_emphasizedBodyFontDescriptor;
-(UIFont *)youLikeFont;
-(UIFont *)likeFont;
-(UIFont *)commentTextFont;
-(UIFont *)commentAttributionDateFont;
-(UIFont *)commentAttributionNameFont;
-(UIFont *)commentEntryFont;
-(UIFont *)commentSendButtonFont;
-(id)init;
-(void)dealloc;
-(void)_invalidateCache;
@end

