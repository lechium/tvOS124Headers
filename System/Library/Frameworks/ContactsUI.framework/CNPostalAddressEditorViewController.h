/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNPresenterDelegate.h>
#import <libobjc.A.dylib/CNPropertyCellDelegate.h>

@class NSMutableArray, NSString, CNMutableContact, CNCardPropertyGroup;

@interface CNPostalAddressEditorViewController : UITableViewController <CNPresenterDelegate, CNPropertyCellDelegate> {

	NSMutableArray* _propertyItems;
	NSString* _propertyKey;
	CNMutableContact* _contact;
	CNCardPropertyGroup* _propertyGroup;
	BOOL _editNames;
	BOOL _showDistrictField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isPresentingModalViewController; 
+(id)cellIdentifierForClass:(Class)arg1 ;
+(id)cellIdentifierForEditingProperty:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)registerContactCellClass:(Class)arg1 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3 ;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3 ;
-(void)propertyCellDidChangeLayout:(id)arg1 ;
-(id)storeForPropertyCell:(id)arg1 ;
-(id)defaultValueForPropertyCell:(id)arg1 ;
-(BOOL)isPresentingModalViewController;
-(void)_rebuildPropertyGroupItems:(BOOL)arg1 ;
-(void)_startEditingFirstCell;
-(void)validateContents;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(BOOL)arg3 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)done:(id)arg1 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
@end

