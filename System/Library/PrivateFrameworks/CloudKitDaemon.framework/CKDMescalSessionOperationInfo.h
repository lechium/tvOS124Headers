/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKDMescalSession;

@interface CKDMescalSessionOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	int _serverVersion;
	CKDMescalSession* _session;

}

@property (assign,nonatomic) int serverVersion;                       //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,retain) CKDMescalSession * session;              //@synthesize session=_session - In the implementation block
-(void)setSession:(CKDMescalSession *)arg1 ;
-(CKDMescalSession *)session;
-(int)serverVersion;
-(void)setServerVersion:(int)arg1 ;
@end
