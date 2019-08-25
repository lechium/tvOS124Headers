/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, RTVisit;

@interface RTVisitMonitorState : NSObject <NSSecureCoding, NSCopying> {

	BOOL _insideAnLoi;
	BOOL _insideAnLoiButStatTimeNotMet;
	BOOL _entryEdgeDetected;
	BOOL _checkedForHintNearEntryLocation;
	double _lastProcessedSample_s;
	double _potentialEntry_s;
	double _potentialExit_s;
	double _sumLat_deg;
	double _sumLon_deg;
	double _sumLat2_deg;
	double _sumLon2_deg;
	double _entrySampleLat_deg;
	double _entrySampleLon_deg;
	long long _dataPointCnt;
	long long _adaptionSampleCnt;
	double _lastProcessedSampleForAdaption_s;
	long long _outlierCnt;
	NSMutableArray* _tempOutliers;
	RTVisit* _lastVisitIncident;
	RTVisit* _lastLowConfidenceVisitIncident;
	long long _pendingReprocessRequestCount;
	long long _visitCallCnt;
	long long _lowConfidenceVisitStatus;

}

@property (assign,nonatomic) BOOL insideAnLoi;                                      //@synthesize insideAnLoi=_insideAnLoi - In the implementation block
@property (assign,nonatomic) BOOL insideAnLoiButStatTimeNotMet;                     //@synthesize insideAnLoiButStatTimeNotMet=_insideAnLoiButStatTimeNotMet - In the implementation block
@property (assign,nonatomic) double lastProcessedSample_s;                          //@synthesize lastProcessedSample_s=_lastProcessedSample_s - In the implementation block
@property (assign,nonatomic) double potentialEntry_s;                               //@synthesize potentialEntry_s=_potentialEntry_s - In the implementation block
@property (assign,nonatomic) double potentialExit_s;                                //@synthesize potentialExit_s=_potentialExit_s - In the implementation block
@property (assign,nonatomic) double sumLat_deg;                                     //@synthesize sumLat_deg=_sumLat_deg - In the implementation block
@property (assign,nonatomic) double sumLon_deg;                                     //@synthesize sumLon_deg=_sumLon_deg - In the implementation block
@property (assign,nonatomic) double sumLat2_deg;                                    //@synthesize sumLat2_deg=_sumLat2_deg - In the implementation block
@property (assign,nonatomic) double sumLon2_deg;                                    //@synthesize sumLon2_deg=_sumLon2_deg - In the implementation block
@property (assign,nonatomic) double entrySampleLat_deg;                             //@synthesize entrySampleLat_deg=_entrySampleLat_deg - In the implementation block
@property (assign,nonatomic) double entrySampleLon_deg;                             //@synthesize entrySampleLon_deg=_entrySampleLon_deg - In the implementation block
@property (assign,nonatomic) long long dataPointCnt;                                //@synthesize dataPointCnt=_dataPointCnt - In the implementation block
@property (assign,nonatomic) long long adaptionSampleCnt;                           //@synthesize adaptionSampleCnt=_adaptionSampleCnt - In the implementation block
@property (assign,nonatomic) double lastProcessedSampleForAdaption_s;               //@synthesize lastProcessedSampleForAdaption_s=_lastProcessedSampleForAdaption_s - In the implementation block
@property (assign,nonatomic) long long outlierCnt;                                  //@synthesize outlierCnt=_outlierCnt - In the implementation block
@property (nonatomic,retain) NSMutableArray * tempOutliers;                         //@synthesize tempOutliers=_tempOutliers - In the implementation block
@property (assign,nonatomic) BOOL entryEdgeDetected;                                //@synthesize entryEdgeDetected=_entryEdgeDetected - In the implementation block
@property (nonatomic,retain) RTVisit * lastVisitIncident;                           //@synthesize lastVisitIncident=_lastVisitIncident - In the implementation block
@property (nonatomic,retain) RTVisit * lastLowConfidenceVisitIncident;              //@synthesize lastLowConfidenceVisitIncident=_lastLowConfidenceVisitIncident - In the implementation block
@property (assign,nonatomic) long long pendingReprocessRequestCount;                //@synthesize pendingReprocessRequestCount=_pendingReprocessRequestCount - In the implementation block
@property (assign,nonatomic) long long visitCallCnt;                                //@synthesize visitCallCnt=_visitCallCnt - In the implementation block
@property (assign,nonatomic) BOOL checkedForHintNearEntryLocation;                  //@synthesize checkedForHintNearEntryLocation=_checkedForHintNearEntryLocation - In the implementation block
@property (assign,nonatomic) long long lowConfidenceVisitStatus;                    //@synthesize lowConfidenceVisitStatus=_lowConfidenceVisitStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dump;
-(BOOL)insideAnLoi;
-(BOOL)insideAnLoiButStatTimeNotMet;
-(double)lastProcessedSample_s;
-(double)potentialEntry_s;
-(double)potentialExit_s;
-(double)sumLat_deg;
-(double)sumLon_deg;
-(double)sumLat2_deg;
-(double)sumLon2_deg;
-(double)entrySampleLat_deg;
-(double)entrySampleLon_deg;
-(long long)dataPointCnt;
-(long long)adaptionSampleCnt;
-(double)lastProcessedSampleForAdaption_s;
-(long long)outlierCnt;
-(NSMutableArray *)tempOutliers;
-(BOOL)entryEdgeDetected;
-(RTVisit *)lastVisitIncident;
-(RTVisit *)lastLowConfidenceVisitIncident;
-(BOOL)checkedForHintNearEntryLocation;
-(void)setInsideAnLoi:(BOOL)arg1 ;
-(void)setInsideAnLoiButStatTimeNotMet:(BOOL)arg1 ;
-(void)setLastProcessedSample_s:(double)arg1 ;
-(void)setPotentialEntry_s:(double)arg1 ;
-(void)setPotentialExit_s:(double)arg1 ;
-(void)setSumLat_deg:(double)arg1 ;
-(void)setSumLon_deg:(double)arg1 ;
-(void)setSumLat2_deg:(double)arg1 ;
-(void)setSumLon2_deg:(double)arg1 ;
-(void)setEntrySampleLat_deg:(double)arg1 ;
-(void)setEntrySampleLon_deg:(double)arg1 ;
-(void)setDataPointCnt:(long long)arg1 ;
-(void)setAdaptionSampleCnt:(long long)arg1 ;
-(void)setLastProcessedSampleForAdaption_s:(double)arg1 ;
-(void)setOutlierCnt:(long long)arg1 ;
-(void)setTempOutliers:(NSMutableArray *)arg1 ;
-(void)setEntryEdgeDetected:(BOOL)arg1 ;
-(void)setLastVisitIncident:(RTVisit *)arg1 ;
-(void)setLastLowConfidenceVisitIncident:(RTVisit *)arg1 ;
-(long long)pendingReprocessRequestCount;
-(void)setPendingReprocessRequestCount:(long long)arg1 ;
-(long long)visitCallCnt;
-(void)setVisitCallCnt:(long long)arg1 ;
-(void)setCheckedForHintNearEntryLocation:(BOOL)arg1 ;
-(long long)lowConfidenceVisitStatus;
-(void)setLowConfidenceVisitStatus:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

