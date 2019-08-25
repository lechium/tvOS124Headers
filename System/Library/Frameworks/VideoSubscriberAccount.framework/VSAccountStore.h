/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class VSAccount, VSKeychainEditingContext, NSOperationQueue, VSRemoteNotifier, NSArray, NSUndoManager, NSString;

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate> {

	BOOL _needsUpdateCachedFirstAccount;
	VSAccount* _cachedFirstAccount;
	VSKeychainEditingContext* _keychainEditingContext;
	NSOperationQueue* _keychainQueue;
	id _changeObserver;
	VSRemoteNotifier* _remoteNotifier;

}

@property (retain) VSAccount * cachedFirstAccount;                                           //@synthesize cachedFirstAccount=_cachedFirstAccount - In the implementation block
@property (assign) BOOL needsUpdateCachedFirstAccount;                                       //@synthesize needsUpdateCachedFirstAccount=_needsUpdateCachedFirstAccount - In the implementation block
@property (nonatomic,retain) VSKeychainEditingContext * keychainEditingContext;              //@synthesize keychainEditingContext=_keychainEditingContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * keychainQueue;                               //@synthesize keychainQueue=_keychainQueue - In the implementation block
@property (assign,nonatomic,__weak) id changeObserver;                                       //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                              //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accounts; 
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)accountClass;
-(void)setNeedsUpdateCachedFirstAccount:(BOOL)arg1 ;
-(BOOL)isFirstAccountLoaded;
-(NSOperationQueue *)keychainQueue;
-(BOOL)_updateCachedFirstAccount;
-(void)_sendLocalNotification;
-(VSKeychainEditingContext *)keychainEditingContext;
-(BOOL)needsUpdateCachedFirstAccount;
-(id)_keychainItemsWithLimit:(unsigned long long)arg1 ;
-(id)_accountForKeychainItem:(id)arg1 ;
-(VSAccount *)cachedFirstAccount;
-(void)setCachedFirstAccount:(VSAccount *)arg1 ;
-(void)_insertAccount:(id)arg1 inContext:(id)arg2 ;
-(void)_sendRemoteNotification;
-(void)setKeychainEditingContext:(VSKeychainEditingContext *)arg1 ;
-(void)setKeychainQueue:(NSOperationQueue *)arg1 ;
-(NSArray *)accounts;
-(id)firstAccountIfLoaded;
-(void)removeAccounts:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)firstAccount;
-(void)fetchAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveAccounts:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setChangeObserver:(id)arg1 ;
-(id)changeObserver;
-(NSUndoManager *)undoManager;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
@end

