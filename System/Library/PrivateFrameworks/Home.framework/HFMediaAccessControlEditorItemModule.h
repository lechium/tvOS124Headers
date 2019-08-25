/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class NSSet, HMHome, HFMediaAccessControlEditorItemProvider, NSString;

@interface HFMediaAccessControlEditorItemModule : HFItemModule <HFHomeObserver> {

	NSSet* _itemProviders;
	HMHome* _home;
	HFMediaAccessControlEditorItemProvider* _accessControlEditorItemProvider;

}

@property (nonatomic,readonly) HMHome * home;                                                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFMediaAccessControlEditorItemProvider * accessControlEditorItemProvider;              //@synthesize accessControlEditorItemProvider=_accessControlEditorItemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptionFooterTextForAccessControlDescriptor:(id)arg1 hasNonPeerToPeerMediaAccessories:(BOOL)arg2 ;
-(HMHome *)home;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2 ;
-(void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(BOOL)arg2 ;
-(void)home:(id)arg1 didUpdateMediaPassword:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(HFMediaAccessControlEditorItemProvider *)accessControlEditorItemProvider;
-(BOOL)_hasNonPeerToPeerMediaAccessories;
-(BOOL)containsItem:(id)arg1 ;
-(id)updateAccessControlDescriptor:(id)arg1 ;
-(id)itemProviders;
@end

