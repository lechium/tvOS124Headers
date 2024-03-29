/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NSUUID, PBCodable;

@interface NWActivityEpilogueStatistics : NSObject {

	unsigned _awdMetricID;
	NSUUID* _externallyVisibleActivityUUID;
	NSUUID* _externallyVisibleParentUUID;
	PBCodable* _awdReport;
	nw_activity_epilogue_report_s _report;

}

@property (assign,nonatomic) nw_activity_epilogue_report_s report;                //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                               //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                                //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,readonly) unsigned domain; 
@property (nonatomic,readonly) unsigned label; 
@property (nonatomic,readonly) BOOL retry; 
@property (nonatomic,readonly) NSUUID * activityUUID; 
@property (nonatomic,readonly) NSUUID * parentUUID; 
@property (nonatomic,readonly) unsigned long long durationMsecs; 
@property (nonatomic,readonly) unsigned fragmentsQuenched; 
@property (nonatomic,readonly) int completionReason; 
@property (nonatomic,retain) NSUUID * externallyVisibleActivityUUID;              //@synthesize externallyVisibleActivityUUID=_externallyVisibleActivityUUID - In the implementation block
@property (nonatomic,retain) NSUUID * externallyVisibleParentUUID;                //@synthesize externallyVisibleParentUUID=_externallyVisibleParentUUID - In the implementation block
-(int)completionReason;
-(unsigned long long)durationMsecs;
-(unsigned)fragmentsQuenched;
-(void)setReport:(nw_activity_epilogue_report_s)arg1 ;
-(nw_activity_epilogue_report_s)report;
-(BOOL)retry;
-(NSUUID *)parentUUID;
-(void)setExternallyVisibleActivityUUID:(NSUUID *)arg1 ;
-(NSUUID *)externallyVisibleActivityUUID;
-(void)setExternallyVisibleParentUUID:(NSUUID *)arg1 ;
-(NSUUID *)externallyVisibleParentUUID;
-(PBCodable *)awdReport;
-(unsigned)awdMetricID;
-(id)initWithNWActivityEpilogueReport:(nw_activity_epilogue_report_s*)arg1 length:(unsigned long long)arg2 ;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(unsigned)domain;
-(unsigned)label;
-(NSUUID *)activityUUID;
@end

