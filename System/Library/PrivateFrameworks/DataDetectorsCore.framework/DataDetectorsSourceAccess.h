/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DataDetectorsSourceAccessProtocol.h>

@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol> {

	SCD_Struct_Da2 _auditToken;
	int _clientpid;
	unsigned _clientuid;
	BOOL _privacyUserReadEntitled;
	long long _privacyUserReadEntitlementChecked;
	BOOL _privacyUserWriteEntitled;
	long long _privacyUserWriteEntitlementChecked;
	BOOL _privacySystemWriteEntitled;
	long long _privacySystemWriteEntitlementChecked;

}

@property (assign) SCD_Struct_Da2 auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign) int processIdentifier;                  //@synthesize clientpid=_clientpid - In the implementation block
@property (assign) unsigned userIdentifier;                //@synthesize clientuid=_clientuid - In the implementation block
-(void)setAuditToken:(SCD_Struct_Da2)arg1 ;
-(void)fileForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)filesForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(BOOL)privacyUserReadEntitled;
-(BOOL)privacyUserWriteEntitled;
-(BOOL)privacySystemWriteEntitled;
-(id)fileHandleForSourceRead:(int)arg1 resourceType:(unsigned long long)arg2 ;
-(BOOL)clientCanWriteSource:(int)arg1 ;
-(BOOL)pushSourcesContent:(id)arg1 forSource:(int)arg2 signature:(id)arg3 ;
-(unsigned)userIdentifier;
-(void)setUserIdentifier:(unsigned)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(int)processIdentifier;
-(SCD_Struct_Da2)auditToken;
@end

