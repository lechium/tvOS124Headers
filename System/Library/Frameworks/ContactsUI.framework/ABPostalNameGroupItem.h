/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@class CNMutableContact, NSString;

@interface ABPostalNameGroupItem : CNCardGroupItem {

	CNMutableContact* _contact;
	SEL _setter;
	NSString* _value;
	NSString* _property;
	NSString* _placeholder;

}

@property (nonatomic,retain) CNMutableContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) SEL setter;                              //@synthesize setter=_setter - In the implementation block
@property (nonatomic,copy) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * property;                       //@synthesize property=_property - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                    //@synthesize placeholder=_placeholder - In the implementation block
-(SEL)setter;
-(void)setSetter:(SEL)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(CNMutableContact *)contact;
-(void)setContact:(CNMutableContact *)arg1 ;
-(NSString *)property;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)placeholder;
@end

