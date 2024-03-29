/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libsysdiagnose.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libsysdiagnose.dylib/libsysdiagnose.dylib-Structs.h>
@interface Libsysdiagnose : NSObject
+(id)setupConnection;
+(int)addErrorString:(id)arg1 WithCode:(id)arg2 forError:(id*)arg3 ;
+(BOOL)verifyReply:(id)arg1 withExpectedType:(xpc_type_sRef)arg2 forError:(id*)arg3 ;
+(void)createMetrics:(id*)arg1 fromResponse:(id)arg2 ;
+(id)getSysdiagnoseCrashLog;
+(id)createSysdiagnoseRequest:(id)arg1 ;
+(id)sendSysdiagnoseRequest:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressHandler:(/*^block*/id)arg4 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressHandler:(/*^block*/id)arg4 ;
+(id)fetchRemoteDiagnosticIDsWithError:(id*)arg1 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 ;
+(id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 andProgressHandler:(/*^block*/id)arg3 ;
+(BOOL)cancelActiveSysdiagnoseWithError:(id*)arg1 ;
+(id)fetchDiagnosticIDFromDeviceSource:(unsigned long long)arg1 WithMaxCount:(unsigned long long)arg2 withError:(id*)arg3 ;
@end

