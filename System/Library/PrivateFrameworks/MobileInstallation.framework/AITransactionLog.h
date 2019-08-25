/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface AITransactionLog : NSObject {

	NSObject*<OS_os_log> _log;

}
+(id)_defaultLog;
+(void)initializeWithLog:(id)arg1 ;
+(void)logScenario:(id)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5 ;
+(void)logStep:(unsigned long long)arg1 byParty:(unsigned long long)arg2 phase:(unsigned long long)arg3 success:(BOOL)arg4 forBundleID:(id)arg5 description:(id)arg6 ;
-(id)_initWithLog:(id)arg1 ;
-(void)_logScenario:(id)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5 ;
@end

