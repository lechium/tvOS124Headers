/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, CKRecordZone, NSMutableDictionary;

@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation {

	BOOL _isHandlingPCSOplockFailure;
	NSArray* _sourceZoneIDs;
	CKRecordZone* _targetZone;
	NSMutableDictionary* _zonePCSDataByZoneID;
	long long _numZoneSaveAttempts;
	long long _maxZoneSaveAttempts;

}

@property (nonatomic,retain) NSArray * sourceZoneIDs;                                //@synthesize sourceZoneIDs=_sourceZoneIDs - In the implementation block
@property (nonatomic,retain) CKRecordZone * targetZone;                              //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zonePCSDataByZoneID;              //@synthesize zonePCSDataByZoneID=_zonePCSDataByZoneID - In the implementation block
@property (assign) BOOL isHandlingPCSOplockFailure;                                  //@synthesize isHandlingPCSOplockFailure=_isHandlingPCSOplockFailure - In the implementation block
@property (assign,nonatomic) long long numZoneSaveAttempts;                          //@synthesize numZoneSaveAttempts=_numZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                          //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(BOOL)makeStateTransition;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(long long)maxZoneSaveAttempts;
-(long long)numZoneSaveAttempts;
-(void)setNumZoneSaveAttempts:(long long)arg1 ;
-(void)setTargetZone:(CKRecordZone *)arg1 ;
-(CKRecordZone *)targetZone;
-(NSArray *)sourceZoneIDs;
-(void)_fetchZonePCS;
-(void)_prepareTargetZonePCS;
-(BOOL)_saveTargetZone;
-(BOOL)isHandlingPCSOplockFailure;
-(void)_setPermanentOplockFailure;
-(void)_fetchPCSDataForZoneID:(id)arg1 ;
-(NSMutableDictionary *)zonePCSDataByZoneID;
-(void)_handleZoneSavedWithID:(id)arg1 responseCode:(id)arg2 ;
-(void)setIsHandlingPCSOplockFailure:(BOOL)arg1 ;
-(void)setSourceZoneIDs:(NSArray *)arg1 ;
-(void)setZonePCSDataByZoneID:(NSMutableDictionary *)arg1 ;
-(void)main;
@end

