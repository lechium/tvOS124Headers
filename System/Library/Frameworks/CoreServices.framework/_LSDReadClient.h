/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSDClient.h>
#import <libobjc.A.dylib/_LSDReadProtocol.h>

@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>
-(void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(BOOL)arg5 preferredLocalizations:(id)arg6 validationToken:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)getServerStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getDiskUsage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveQueries:(id)arg1 legacySPI:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLocalizationDictionaryForTypeWithIdentifier:(id)arg1 unit:(unsigned)arg2 preferredLocalizations:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getServerStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getKernelPackageExtensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)bindDocumentProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
