/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXAppInstallCoordinator.h>
#import <libobjc.A.dylib/IXCoordinatorWithAppAssetPromise.h>
#import <libobjc.A.dylib/IXCoordinatorWithInstallOptions.h>
#import <libobjc.A.dylib/IXCoordinatorWithAutoEnablingExtensionTypes.h>
#import <libobjc.A.dylib/IXCoordinatorWithInitialODRAssetPromises.h>
#import <libobjc.A.dylib/IXUserInitiatedCoordinator.h>
#import <libobjc.A.dylib/IXCoordinatorWithImportance.h>

@class NSString;

@interface IXUpdatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithAutoEnablingExtensionTypes, IXCoordinatorWithInitialODRAssetPromises, IXUserInitiatedCoordinator, IXCoordinatorWithImportance>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasAppAssetPromise; 
@property (nonatomic,readonly) BOOL hasInstallOptions; 
@property (nonatomic,readonly) BOOL hasAutoEnabledExtensionTypes; 
@property (nonatomic,readonly) BOOL hasInitialODRAssetPromises; 
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated; 
+(id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
+(BOOL)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)enumerateCoordinatorsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)setAppAssetPromise:(id)arg1 error:(id*)arg2 ;
-(id)appAssetPromiseWithError:(id*)arg1 ;
-(BOOL)hasAppAssetPromise;
-(BOOL)appAssetPromiseHasBegunFulfillment:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)appAssetPromiseResponsibleClientWithError:(id*)arg1 ;
-(BOOL)setInstallOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasInstallOptions;
-(BOOL)setAutoEnabledExtensionTypes:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasAutoEnabledExtensionTypes;
-(id)validInstallTypes;
-(BOOL)setInitialODRAssetPromises:(id)arg1 error:(id*)arg2 ;
-(id)initialODRAssetPromisesWithError:(id*)arg1 ;
-(BOOL)hasInitialODRAssetPromises;
@end

