/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, CNContact, NSString;

@interface CNCardGroup : NSObject <NSCopying> {

	NSMutableArray* _items;
	NSMutableArray* _actions;
	NSArray* _actionItems;
	BOOL _useSplitActions;
	BOOL _addSpacerFromPreviousGroup;
	CNContact* _contact;
	NSString* _title;

}

@property (nonatomic,retain) CNContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * actionItems; 
@property (nonatomic,readonly) NSArray * displayItems; 
@property (nonatomic,readonly) NSArray * editingItems; 
@property (nonatomic,readonly) NSArray * actions;                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL useSplitActions;                         //@synthesize useSplitActions=_useSplitActions - In the implementation block
@property (assign,nonatomic) BOOL addSpacerFromPreviousGroup;              //@synthesize addSpacerFromPreviousGroup=_addSpacerFromPreviousGroup - In the implementation block
+(id)groupForContact:(id)arg1 ;
-(id)_loadActionItems;
-(void)removeActionWithTitle:(id)arg1 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 ;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(BOOL)useSplitActions;
-(NSArray *)editingItems;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4 ;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setUseSplitActions:(BOOL)arg1 ;
-(BOOL)addSpacerFromPreviousGroup;
-(void)setAddSpacerFromPreviousGroup:(BOOL)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)actionItems;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)actions;
-(NSArray *)displayItems;
@end

