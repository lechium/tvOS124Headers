/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>
#import <libobjc.A.dylib/CNContactActionProtocol.h>

@class NSArray, CNPropertyGroupItem;

@interface CNPropertyAction : CNContactAction <CNContactActionProtocol> {

	NSArray* _propertyItems;

}

@property (assign,nonatomic,__weak) id<CNPropertyActionDelegate> delegate; 
@property (nonatomic,copy) NSArray * propertyItems;                                     //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) BOOL canPerformAction; 
+(void)performDefaultActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)performActionWithSender:(id)arg1 ;
-(CNPropertyGroupItem *)propertyItem;
-(id)initWithContact:(id)arg1 propertyItem:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(NSArray *)propertyItems;
-(BOOL)canPerformAction;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(void)presentDisambiguationAlertWithSender:(id)arg1 ;
@end

