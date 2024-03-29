/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/ACMSignInWidgetProtocol.h>

@protocol ACMSignInWidgetDelegate;
@class UIView, UITextField, NSString, UIColor, NSDictionary, UITableView, UITableViewCell, UILabel;

@interface ACMSignInWidget : NSObject <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, ACMSignInWidgetProtocol> {

	id<ACMSignInWidgetDelegate> _delegate;
	UITableView* _table;
	UITableViewCell* _accountEditCell;
	UITableViewCell* _passwordEditCell;
	UITextField* _accountField;
	UITextField* _passwordField;
	UILabel* _accountLabel;
	BOOL _shouldAuthenticateOnUserInput;
	UIColor* _backgroundColor;
	NSDictionary* _placeholderAttributes;

}

@property (assign,nonatomic) id<ACMSignInWidgetDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput;                       //@synthesize shouldAuthenticateOnUserInput=_shouldAuthenticateOnUserInput - In the implementation block
@property (nonatomic,retain,readonly) UITableView * table; 
@property (nonatomic,retain,readonly) UITableViewCell * accountEditCell; 
@property (nonatomic,retain,readonly) UITableViewCell * passwordEditCell; 
@property (nonatomic,retain,readonly) UILabel * accountLabel; 
@property (nonatomic,retain,readonly) UILabel * passwordLabel; 
@property (nonatomic,retain) UITextField * accountField; 
@property (nonatomic,retain) UITextField * passwordField; 
@property (assign,nonatomic) CGPoint position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) NSString * accountLabelText; 
@property (nonatomic,retain) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSDictionary * placeholderAttributes;                     //@synthesize placeholderAttributes=_placeholderAttributes - In the implementation block
-(void)setPasswordField:(UITextField *)arg1 ;
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(NSString *)arg1 ;
-(void)setAccountField:(UITextField *)arg1 ;
-(UITableViewCell *)accountEditCell;
-(UITableViewCell *)passwordEditCell;
-(UILabel *)passwordLabel;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1 ;
-(NSDictionary *)placeholderAttributes;
-(void)disableControls:(BOOL)arg1 ;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)onSignIn:(id)arg1 ;
-(UILabel *)accountLabel;
-(void)setPlaceholderAttributes:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ACMSignInWidgetDelegate>)arg1 ;
-(UIView *)view;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id<ACMSignInWidgetDelegate>)delegate;
-(UIColor *)backgroundColor;
-(void)setPosition:(CGPoint)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(CGPoint)position;
-(UITableView *)table;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)passwordField;
@end

