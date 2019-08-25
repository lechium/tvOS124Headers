/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

@interface CFPDCloudSource : CFPDContainerSource {

	SYDRemotePreferencesSource* cloudSource;
	CFStringRef _configurationPath;

}
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 storeName:(id)arg3 configurationPath:(CFStringRef)arg4 containerPath:(CFStringRef)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(CFStringRef)debugDump;
-(void)_writeToDisk:(BOOL)arg1 ;
-(id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1 ;
-(CFStringRef)cloudConfigurationPath;
-(id)copyPropertyListValidatingPlist:(BOOL)arg1 ;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long long)arg3 encoding:(int)arg4 ;
-(id)copyConfigurationFromPath:(CFStringRef)arg1 ;
-(void)synchronizeWithCloud:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)registerForChangeNotifications;
@end

