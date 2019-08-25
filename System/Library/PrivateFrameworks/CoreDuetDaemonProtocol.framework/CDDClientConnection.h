/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDDXPCConnection, CDDebug;

@interface CDDClientConnection : NSObject {

	CDDXPCConnection* _connection;
	CDDebug* _debug;
	unsigned long long _clientId;

}

@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
@property (readonly) unsigned long long clientId;                //@synthesize clientId=_clientId - In the implementation block
@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(unsigned long long)clientId;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 occurredWithValue:(id)arg3 cost:(long long)arg4 onDate:(id)arg5 risingEdge:(BOOL)arg6 fallingEdge:(BOOL)arg7 type:(int)arg8 error:(id*)arg9 replyHandler:(/*^block*/id)arg10 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 setCategory:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 associateToBudgetId:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)deleteAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)attributeId:(unsigned long long)arg1 backgroundLaunch:(id)arg2 risingEdge:(BOOL)arg3 fallingEdge:(BOOL)arg4 type:(int)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 limitCount:(unsigned long long)arg6 error:(id*)arg7 replyHandler:(/*^block*/id)arg8 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 statistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 cost:(long long)arg7 onDate:(id)arg8 risingEdge:(BOOL)arg9 fallingEdge:(BOOL)arg10 error:(id*)arg11 replyHandler:(/*^block*/id)arg12 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 error:(id*)arg7 replyHandler:(/*^block*/id)arg8 ;
-(BOOL)budgetsForAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)remoteFocalAppWithId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)getLocalAppBundleId:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)bundleIdChange:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 meteredWithValue:(id)arg3 costDictionary:(id)arg4 onDate:(id)arg5 risingEdge:(BOOL)arg6 fallingEdge:(BOOL)arg7 type:(int)arg8 meterToken:(unsigned long long)arg9 error:(id*)arg10 replyHandler:(/*^block*/id)arg11 ;
-(BOOL)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 deviceIdentifier:(id)arg6 temporalLeeway:(double)arg7 limitCount:(unsigned long long)arg8 error:(id*)arg9 replyHandler:(/*^block*/id)arg10 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 deviceIdentifier:(id)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 historyOfValue:(id)arg3 forWindow:(id)arg4 filter:(long long)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 replyHandler:(/*^block*/id)arg8 ;
-(BOOL)resetAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 type:(int)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)setAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)resetAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)requestForecastFromDevice:(unsigned)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 value:(id)arg4 historyWindow:(id)arg5 format:(long long)arg6 error:(id*)arg7 replyHandler:(/*^block*/id)arg8 ;
-(BOOL)readRemoteRequestResult:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)requestStatisticFromDevice:(unsigned)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 statistic:(int)arg4 historyWindow:(id)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(BOOL)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 maxFraction:(double)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 uint64Value1:(unsigned long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)sendMessageWithType:(long long)arg1 valueKey:(id)arg2 uint64Value:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 int64Value1:(long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 valueKey3:(id)arg6 uint64Value3:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(BOOL)budgetsForAttributeId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 typeField:(unsigned long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 type:(unsigned long long)arg6 integerId:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(BOOL)versionWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)message:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(BOOL)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 limitCount:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 deviceIdentifier:(id)arg5 temporalLeeway:(double)arg6 limitCount:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(BOOL)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 maxFraction:(double)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(BOOL)idForPool:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)deletePool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)readPool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)compareAndSwapPool:(unsigned long long)arg1 compareValue:(long long)arg2 swapValue:(long long)arg3 type:(unsigned long long)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(BOOL)decrementPool:(unsigned long long)arg1 decrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)incrementPool:(unsigned long long)arg1 incrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)readTrendingAppsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)readLiveAppsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)registerTrendableApp:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)deregisterTrendableApp:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)bundleIdEntriesOlderThanDate:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)deleteBundleId:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)deleteAttributeId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)setDebugBitmap:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)deleteAllDatabaseEntriesOlderThanDate:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)appsLaunchedSince:(id)arg1 butNotPrewarmedSince:(id)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)registerAttribute:(id)arg1 withType:(int)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)idForAttribute:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)idForAttribute:(id)arg1 clientId:(long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)attributeId:(unsigned long long)arg1 occurredWithValue:(id)arg2 cost:(long long)arg3 onDate:(id)arg4 risingEdge:(BOOL)arg5 fallingEdge:(BOOL)arg6 type:(int)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(BOOL)attributeNamesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)poolNamesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)deleteDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)attributeId:(unsigned long long)arg1 associateToBudgetId:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)attributeId:(unsigned long long)arg1 setCategory:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)attributeId:(unsigned long long)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 deviceIdentifier:(id)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(BOOL)attributeId:(unsigned long long)arg1 meteredWithValue:(id)arg2 costDictionary:(id)arg3 onDate:(id)arg4 risingEdge:(BOOL)arg5 fallingEdge:(BOOL)arg6 type:(int)arg7 meterToken:(unsigned long long)arg8 error:(id*)arg9 replyHandler:(/*^block*/id)arg10 ;
-(BOOL)attributeId:(unsigned long long)arg1 historyOfValue:(id)arg2 forWindow:(id)arg3 filter:(long long)arg4 maximumElements:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)resetAttributeId:(unsigned long long)arg1 type:(int)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)getDevicesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)getDeviceFromDescription:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)readSystemDataFromDevice:(unsigned)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)broadcastSystemDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)setAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)resetAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)requestSystemDataFromDevice:(unsigned)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)requestForecastFromDevice:(unsigned)arg1 attributeId:(unsigned long long)arg2 value:(id)arg3 historyWindow:(id)arg4 format:(long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(BOOL)requestStatisticFromDevice:(unsigned)arg1 attributeId:(unsigned long long)arg2 statistic:(int)arg3 historyWindow:(id)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(BOOL)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 cost:(long long)arg6 onDate:(id)arg7 risingEdge:(BOOL)arg8 fallingEdge:(BOOL)arg9 error:(id*)arg10 replyHandler:(/*^block*/id)arg11 ;
-(BOOL)setNonAppBundlId:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)setActiveBundles:(id)arg1 startTimestamps:(id)arg2 endTimestamps:(id)arg3 event:(unsigned long long)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(BOOL)requestAdmissionLogFromDevice:(unsigned)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(CDDebug *)debug;
-(id)init;
-(CDDXPCConnection *)connection;
@end

