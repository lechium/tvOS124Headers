/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSHashTable, NAFuture, NSString;

@interface HFHomeAppInstallStateArbiter : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSHashTable* _observers;
	NAFuture* _homeAppInstalledFuture;

}

@property (nonatomic,readonly) NSHashTable * observers;                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NAFuture * homeAppInstalledFuture;              //@synthesize homeAppInstalledFuture=_homeAppInstalledFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)_fastPath_isHomeAppInstalled;
-(void)setHomeAppInstalledFuture:(NAFuture *)arg1 ;
-(void)_applications:(id)arg1 didInstall:(BOOL)arg2 ;
-(NAFuture *)homeAppInstalledFuture;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
@end

