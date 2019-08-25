/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSDictionary, SABaseCommand;

@interface SiriTVUIToggleButtonTemplateItem : SiriTVUITemplateItem {

	NSDictionary* _onTitles;
	NSDictionary* _offTitles;
	NSDictionary* _highlightedOnTitles;
	NSDictionary* _highlightedOffTitles;
	NSDictionary* _backgroundColors;
	BOOL _initialState;
	SABaseCommand* _commandToToggleToOnMode;
	SABaseCommand* _commandToToggleToOffMode;
	NSDictionary* _onDynamicImages;
	NSDictionary* _offDynamicImages;
	CGSize _onIconImagePointSize;
	CGSize _offIconImagePointSize;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _onImageEdgeInsets;
	UIEdgeInsets _offImageEdgeInsets;

}

@property (assign,nonatomic) BOOL initialState;                                   //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,copy) SABaseCommand * commandToToggleToOnMode;               //@synthesize commandToToggleToOnMode=_commandToToggleToOnMode - In the implementation block
@property (nonatomic,copy) SABaseCommand * commandToToggleToOffMode;              //@synthesize commandToToggleToOffMode=_commandToToggleToOffMode - In the implementation block
@property (nonatomic,copy) NSDictionary * onDynamicImages;                        //@synthesize onDynamicImages=_onDynamicImages - In the implementation block
@property (nonatomic,copy) NSDictionary * offDynamicImages;                       //@synthesize offDynamicImages=_offDynamicImages - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                      //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets onImageEdgeInsets;                      //@synthesize onImageEdgeInsets=_onImageEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets offImageEdgeInsets;                     //@synthesize offImageEdgeInsets=_offImageEdgeInsets - In the implementation block
@property (assign,nonatomic) CGSize onIconImagePointSize;                         //@synthesize onIconImagePointSize=_onIconImagePointSize - In the implementation block
@property (assign,nonatomic) CGSize offIconImagePointSize;                        //@synthesize offIconImagePointSize=_offIconImagePointSize - In the implementation block
-(SABaseCommand *)commandToToggleToOffMode;
-(void)setCommandToToggleToOffMode:(SABaseCommand *)arg1 ;
-(SABaseCommand *)commandToToggleToOnMode;
-(void)setCommandToToggleToOnMode:(SABaseCommand *)arg1 ;
-(BOOL)initialState;
-(void)setInitialState:(BOOL)arg1 ;
-(id)initWithOnTitles:(id)arg1 offTitles:(id)arg2 highlightedOnTitles:(id)arg3 highlightedOffTitles:(id)arg4 backgroundColors:(id)arg5 commandToToggleToOnMode:(id)arg6 commandToToggleToOffMode:(id)arg7 initialState:(BOOL)arg8 ;
-(id)onTitleForUserInterfaceStyle:(long long)arg1 ;
-(id)offTitleForUserInterfaceStyle:(long long)arg1 ;
-(id)highlightedOnTitleForUserInterfaceStyle:(long long)arg1 ;
-(id)highlightedOffTitleForUserInterfaceStyle:(long long)arg1 ;
-(id)backgroundColorForUserInterfaceStyle:(long long)arg1 ;
-(id)onDynamicImageForUserInterfaceStyle:(long long)arg1 ;
-(id)offDynamicImageForUserInterfaceStyle:(long long)arg1 ;
-(NSDictionary *)onDynamicImages;
-(void)setOnDynamicImages:(NSDictionary *)arg1 ;
-(NSDictionary *)offDynamicImages;
-(void)setOffDynamicImages:(NSDictionary *)arg1 ;
-(UIEdgeInsets)onImageEdgeInsets;
-(void)setOnImageEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)offImageEdgeInsets;
-(void)setOffImageEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)onIconImagePointSize;
-(void)setOnIconImagePointSize:(CGSize)arg1 ;
-(CGSize)offIconImagePointSize;
-(void)setOffIconImagePointSize:(CGSize)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
@end
