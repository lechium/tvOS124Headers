/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNAccountsAndGroupsItem : NSObject {

	BOOL _selected;
	BOOL _bypassIfUnique;
	BOOL _soloSelect;
	NSString* _name;
	/*^block*/id _nameProvider;
	NSString* _identifier;
	long long _containerType;
	NSArray* _childItems;
	CNAccountsAndGroupsItem* _parentItem;
	long long _type;

}

@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id nameProvider;                                            //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long containerType;                                  //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) NSArray * childItems;                                     //@synthesize childItems=_childItems - In the implementation block
@property (assign,nonatomic,__weak) CNAccountsAndGroupsItem * parentItem;              //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic) BOOL bypassIfUnique;                                      //@synthesize bypassIfUnique=_bypassIfUnique - In the implementation block
@property (assign,nonatomic) BOOL soloSelect;                                          //@synthesize soloSelect=_soloSelect - In the implementation block
@property (nonatomic,readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                          //@synthesize selected=_selected - In the implementation block
-(long long)containerType;
-(void)setContainerType:(long long)arg1 ;
-(void)setParentItem:(CNAccountsAndGroupsItem *)arg1 ;
-(NSArray *)childItems;
-(BOOL)soloSelect;
-(BOOL)bypassIfUnique;
-(id)arrayForDisplay:(BOOL)arg1 ;
-(id)nameProvider;
-(void)setChildItems:(NSArray *)arg1 ;
-(void)setNameProvider:(id)arg1 ;
-(void)setBypassIfUnique:(BOOL)arg1 ;
-(void)setSoloSelect:(BOOL)arg1 ;
-(CNAccountsAndGroupsItem *)parentItem;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setSelected:(BOOL)arg1 ;
-(long long)localizedCompare:(id)arg1 ;
@end

