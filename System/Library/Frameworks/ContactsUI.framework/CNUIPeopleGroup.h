/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNUIPeopleGroup : NSObject {

	NSString* _name;
	NSString* _identifier;
	NSString* _sourceKind;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * sourceKind;              //@synthesize sourceKind=_sourceKind - In the implementation block
+(id)peopleGroupWithName:(id)arg1 identifier:(id)arg2 sourceKind:(id)arg3 ;
-(NSString *)sourceKind;
-(void)setSourceKind:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
@end

