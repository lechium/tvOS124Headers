/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UITextField, NSString, UIColor, NSDictionary;


@protocol ACMSignInWidgetProtocol <NSObject>
@property (assign,nonatomic) id<ACMSignInWidgetDelegate> delegate; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UITextField * accountField; 
@property (nonatomic,readonly) UITextField * passwordField; 
@property (nonatomic,retain) NSString * accountLabelText; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSDictionary * placeholderAttributes; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) CGPoint position; 
@required
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(id)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(NSDictionary *)placeholderAttributes;
-(void)disableControls:(BOOL)arg1;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setPlaceholderAttributes:(id)arg1;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)setBackgroundColor:(id)arg1;
-(id<ACMSignInWidgetDelegate>)delegate;
-(UIColor *)backgroundColor;
-(void)setPosition:(CGPoint)arg1;
-(CGPoint)position;
-(UITextField *)passwordField;

@end

