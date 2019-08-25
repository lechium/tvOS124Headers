/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUIPeopleGroupsDataSourceDelegate;
@class CNContactStore, CNUIContactsEnvironment, NSArray, NSDictionary;

@interface CNUIPeopleGroupsDataSource : NSObject {

	id<CNUIPeopleGroupsDataSourceDelegate> _delegate;
	CNContactStore* _contactStore;
	CNUIContactsEnvironment* _environment;
	NSArray* _singleGroupPeopleSources;
	NSArray* _multipleGroupsPeopleSources;
	NSDictionary* _sourcesByKind;
	NSArray* _groups;

}

@property (nonatomic,retain) CNUIContactsEnvironment * environment;                               //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSArray * singleGroupPeopleSources;                                  //@synthesize singleGroupPeopleSources=_singleGroupPeopleSources - In the implementation block
@property (nonatomic,retain) NSArray * multipleGroupsPeopleSources;                               //@synthesize multipleGroupsPeopleSources=_multipleGroupsPeopleSources - In the implementation block
@property (nonatomic,retain) NSDictionary * sourcesByKind;                                        //@synthesize sourcesByKind=_sourcesByKind - In the implementation block
@property (nonatomic,retain) NSArray * groups;                                                    //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIPeopleGroupsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                     //@synthesize contactStore=_contactStore - In the implementation block
-(void)setEnvironment:(CNUIContactsEnvironment *)arg1 ;
-(id)initWithEnvironment:(id)arg1 contactStore:(id)arg2 ;
-(unsigned long long)numberOfGroupsInSection:(unsigned long long)arg1 ;
-(id)groupAtIndexPath:(id)arg1 ;
-(id)peopleInGroup:(id)arg1 withKeysToFetch:(id)arg2 ;
-(void)createSources;
-(id)buildGroupList;
-(void)sourceDidChange:(id)arg1 ;
-(void)setSingleGroupPeopleSources:(NSArray *)arg1 ;
-(void)setMultipleGroupsPeopleSources:(NSArray *)arg1 ;
-(NSArray *)singleGroupPeopleSources;
-(NSArray *)multipleGroupsPeopleSources;
-(void)setSourcesByKind:(NSDictionary *)arg1 ;
-(NSDictionary *)sourcesByKind;
-(BOOL)isSyntheticGroup:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CNUIPeopleGroupsDataSourceDelegate>)arg1 ;
-(id<CNUIPeopleGroupsDataSourceDelegate>)delegate;
-(void)reloadData;
-(NSArray *)groups;
-(void)setGroups:(NSArray *)arg1 ;
-(unsigned long long)numberOfSections;
-(CNUIContactsEnvironment *)environment;
@end

