/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class SABaseCommand, NSDictionary, NSString;

@interface SALCMToggleButton : SAAceView

@property (nonatomic,retain) SABaseCommand * commandToToggleToOffMode; 
@property (nonatomic,retain) SABaseCommand * commandToToggleToOnMode; 
@property (nonatomic,copy) NSDictionary * offIconDynamicImage; 
@property (nonatomic,copy) NSString * offTitle; 
@property (nonatomic,copy) NSDictionary * onIconDynamicImage; 
@property (nonatomic,copy) NSString * onTitle; 
+(id)toggleButtonWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)toggleButton;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SABaseCommand *)commandToToggleToOffMode;
-(void)setCommandToToggleToOffMode:(SABaseCommand *)arg1 ;
-(SABaseCommand *)commandToToggleToOnMode;
-(void)setCommandToToggleToOnMode:(SABaseCommand *)arg1 ;
-(NSDictionary *)offIconDynamicImage;
-(void)setOffIconDynamicImage:(NSDictionary *)arg1 ;
-(NSString *)offTitle;
-(void)setOffTitle:(NSString *)arg1 ;
-(NSDictionary *)onIconDynamicImage;
-(void)setOnIconDynamicImage:(NSDictionary *)arg1 ;
-(NSString *)onTitle;
-(void)setOnTitle:(NSString *)arg1 ;
@end

