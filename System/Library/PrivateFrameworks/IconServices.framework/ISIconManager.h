/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSHashTable, ISIconCache;

@interface ISIconManager : NSObject {

	os_unfair_lock_s _observerLock;
	id _iconCache;
	id _iconRegistry;
	id _observers;
	id _internalQueue;
	id _notificationIconsInvalidatedToken;

}

@property (retain) NSHashTable * iconRegistry;                              //@synthesize iconRegistry=_iconRegistry - In the implementation block
@property (retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (retain) id notificationIconsInvalidatedToken;                    //@synthesize notificationIconsInvalidatedToken=_notificationIconsInvalidatedToken - In the implementation block
@property (readonly) ISIconCache * iconCache;                               //@synthesize iconCache=_iconCache - In the implementation block
+(id)sharedInstance;
-(ISIconCache *)iconCache;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)findOrRegisterIcon:(id)arg1 ;
-(void)_notifyObserversDidInvalidateIcons:(id)arg1 ;
-(void)_validateIcons:(id)arg1 ;
-(void)invalidateIcons:(id)arg1 ;
-(void)_handleIconsInvalidatedNotification:(id)arg1 ;
-(NSHashTable *)iconRegistry;
-(void)setIconRegistry:(NSHashTable *)arg1 ;
-(id)notificationIconsInvalidatedToken;
-(void)setNotificationIconsInvalidatedToken:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(id)_init;
@end

