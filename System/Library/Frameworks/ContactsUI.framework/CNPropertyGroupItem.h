/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@protocol CNPropertyGroupItemDelegate;
@class CNLabeledValue, CNCardPropertyGroup, NSString, CNContact, CNMutableContact, CNContactProperty, CNContactStore, NSArray, NSURL;

@interface CNPropertyGroupItem : CNCardGroupItem {

	BOOL _allowsIMessage;
	BOOL _allowsPhone;
	BOOL _allowsTTY;
	BOOL _allowsEmail;
	CNLabeledValue* _labeledValue;
	CNCardPropertyGroup* _group;
	NSString* _property;
	CNContact* _contact;
	id<CNPropertyGroupItemDelegate> _delegate;
	CNLabeledValue* _originalLabeledValue;

}

@property (nonatomic,retain) NSString * property;                                          //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) CNLabeledValue * labeledValue;                                //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,retain) CNLabeledValue * originalLabeledValue;                        //@synthesize originalLabeledValue=_originalLabeledValue - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
@property (nonatomic,__weak,readonly) CNCardPropertyGroup * group;                         //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (assign,nonatomic,__weak) id<CNPropertyGroupItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsIMessage;                                          //@synthesize allowsIMessage=_allowsIMessage - In the implementation block
@property (assign,nonatomic) BOOL allowsPhone;                                             //@synthesize allowsPhone=_allowsPhone - In the implementation block
@property (assign,nonatomic) BOOL allowsTTY;                                               //@synthesize allowsTTY=_allowsTTY - In the implementation block
@property (assign,nonatomic) BOOL allowsEmail;                                             //@synthesize allowsEmail=_allowsEmail - In the implementation block
@property (nonatomic,readonly) id normalizedValue; 
@property (nonatomic,readonly) NSString * displayValue; 
@property (nonatomic,readonly) NSString * displayLabel; 
@property (nonatomic,readonly) NSString * editingStringValue; 
@property (nonatomic,readonly) NSString * placeholderString; 
@property (nonatomic,__weak,readonly) NSArray * supportedLabels; 
@property (nonatomic,readonly) NSURL * defaultActionURL; 
@property (nonatomic,readonly) BOOL modified; 
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isReadonly,nonatomic,readonly) BOOL readonly; 
@property (nonatomic,readonly) BOOL canRemove; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
+(id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
+(id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
+(id)emptyValueForLabel:(id)arg1 ;
+(Class)classForProperty:(id)arg1 ;
+(id)newPropertyGroupItemForProperty:(id)arg1 ;
-(BOOL)isReadonly;
-(BOOL)isFavorite;
-(NSURL *)defaultActionURL;
-(CNContactProperty *)contactProperty;
-(BOOL)modified;
-(void)updateLabeledValueWithValue:(id)arg1 ;
-(BOOL)isSuggested;
-(void)mergeItem:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(void)saveChangesImmediately:(BOOL)arg1 ;
-(CNMutableContact *)mutableContact;
-(NSString *)displayLabel;
-(void)updateLabeledValueWithLabel:(id)arg1 ;
-(BOOL)canRemove;
-(void)confirmSuggestion;
-(void)setAllowsIMessage:(BOOL)arg1 ;
-(void)setAllowsPhone:(BOOL)arg1 ;
-(void)setAllowsEmail:(BOOL)arg1 ;
-(void)setAllowsTTY:(BOOL)arg1 ;
-(id)normalizedValue;
-(BOOL)isValidValue:(id)arg1 ;
-(NSArray *)supportedLabels;
-(NSString *)editingStringValue;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)allowsEmail;
-(BOOL)allowsIMessage;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(id)bestValue:(id)arg1 ;
-(void)rejectSuggestion;
-(id)valueForDisplayString:(id)arg1 ;
-(id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
-(id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
-(BOOL)isFavoriteOfActionType:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)bestLabel:(id)arg1 ;
-(id)updateWithLabel:(id)arg1 value:(id)arg2 ;
-(CNLabeledValue *)originalLabeledValue;
-(void)_removeSuggestion;
-(BOOL)isValidIdentifier:(id)arg1 ;
-(int)anyContactLegacyIdentifier;
-(int)labeledValueMultiValueIdentifierForChosenSourceContact;
-(NSString *)placeholderString;
-(BOOL)allowsPhone;
-(BOOL)allowsTTY;
-(void)setOriginalLabeledValue:(CNLabeledValue *)arg1 ;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(CNLabeledValue *)labeledValue;
-(void)setProperty:(NSString *)arg1 ;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)property;
-(id)initWithGroup:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setDelegate:(id<CNPropertyGroupItemDelegate>)arg1 ;
-(id<CNPropertyGroupItemDelegate>)delegate;
-(CNCardPropertyGroup *)group;
-(BOOL)isEmpty;
-(NSString *)displayValue;
@end

