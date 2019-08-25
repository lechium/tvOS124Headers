/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 3:39:03 AM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDCFNetworkTaskMetrics : PBCodable <NSCopying> {

	unsigned long long _didCompleteWithError;
	long long _error;
	unsigned long long _numberOfRedirects;
	unsigned long long _numberOfRetries;
	unsigned long long _taskResume;
	unsigned long long _timestamp;
	long long _underlyingError;
	long long _underlyingErrorDomain;
	NSString* _activityUUID;
	int _schedulingTier;
	int _taskType;
	NSMutableArray* _transactionMetrics;
	BOOL _isBackground;
	BOOL _unused;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityUUID; 
@property (nonatomic,retain) NSString * activityUUID;                              //@synthesize activityUUID=_activityUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTaskResume; 
@property (assign,nonatomic) unsigned long long taskResume;                        //@synthesize taskResume=_taskResume - In the implementation block
@property (assign,nonatomic) BOOL hasDidCompleteWithError; 
@property (assign,nonatomic) unsigned long long didCompleteWithError;              //@synthesize didCompleteWithError=_didCompleteWithError - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfRetries; 
@property (assign,nonatomic) unsigned long long numberOfRetries;                   //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfRedirects; 
@property (assign,nonatomic) unsigned long long numberOfRedirects;                 //@synthesize numberOfRedirects=_numberOfRedirects - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) long long error;                                      //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingError; 
@property (assign,nonatomic) long long underlyingError;                            //@synthesize underlyingError=_underlyingError - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorDomain; 
@property (assign,nonatomic) long long underlyingErrorDomain;                      //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasTaskType; 
@property (assign,nonatomic) int taskType;                                         //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) BOOL hasIsBackground; 
@property (assign,nonatomic) BOOL isBackground;                                    //@synthesize isBackground=_isBackground - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionMetrics;                  //@synthesize transactionMetrics=_transactionMetrics - In the implementation block
@property (assign,nonatomic) BOOL hasSchedulingTier; 
@property (assign,nonatomic) int schedulingTier;                                   //@synthesize schedulingTier=_schedulingTier - In the implementation block
@property (assign,nonatomic) BOOL hasUnused; 
@property (assign,nonatomic) BOOL unused;                                          //@synthesize unused=_unused - In the implementation block
+(Class)transactionMetricsType;
-(BOOL)hasActivityUUID;
-(void)setTaskResume:(unsigned long long)arg1 ;
-(void)setHasTaskResume:(BOOL)arg1 ;
-(BOOL)hasTaskResume;
-(void)setDidCompleteWithError:(unsigned long long)arg1 ;
-(void)setHasDidCompleteWithError:(BOOL)arg1 ;
-(BOOL)hasDidCompleteWithError;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
-(void)setHasNumberOfRetries:(BOOL)arg1 ;
-(BOOL)hasNumberOfRetries;
-(void)setNumberOfRedirects:(unsigned long long)arg1 ;
-(void)setHasNumberOfRedirects:(BOOL)arg1 ;
-(BOOL)hasNumberOfRedirects;
-(void)setUnderlyingError:(long long)arg1 ;
-(void)setHasUnderlyingError:(BOOL)arg1 ;
-(BOOL)hasUnderlyingError;
-(void)setHasUnderlyingErrorDomain:(BOOL)arg1 ;
-(void)setHasTaskType:(BOOL)arg1 ;
-(BOOL)hasTaskType;
-(id)taskTypeAsString:(int)arg1 ;
-(int)StringAsTaskType:(id)arg1 ;
-(void)setIsBackground:(BOOL)arg1 ;
-(void)setHasIsBackground:(BOOL)arg1 ;
-(BOOL)hasIsBackground;
-(int)schedulingTier;
-(void)setSchedulingTier:(int)arg1 ;
-(void)setHasSchedulingTier:(BOOL)arg1 ;
-(BOOL)hasSchedulingTier;
-(id)schedulingTierAsString:(int)arg1 ;
-(int)StringAsSchedulingTier:(id)arg1 ;
-(void)setUnused:(BOOL)arg1 ;
-(void)setHasUnused:(BOOL)arg1 ;
-(BOOL)hasUnused;
-(unsigned long long)taskResume;
-(unsigned long long)didCompleteWithError;
-(unsigned long long)numberOfRetries;
-(unsigned long long)numberOfRedirects;
-(long long)underlyingError;
-(BOOL)unused;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSMutableArray *)transactionMetrics;
-(BOOL)hasError;
-(void)addTransactionMetrics:(id)arg1 ;
-(unsigned long long)transactionMetricsCount;
-(void)clearTransactionMetrics;
-(id)transactionMetricsAtIndex:(unsigned long long)arg1 ;
-(void)setTransactionMetrics:(NSMutableArray *)arg1 ;
-(int)taskType;
-(void)setTaskType:(int)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)isBackground;
-(void)setUnderlyingErrorDomain:(long long)arg1 ;
-(BOOL)hasUnderlyingErrorDomain;
-(long long)underlyingErrorDomain;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)error;
-(void)setError:(long long)arg1 ;
-(NSString *)activityUUID;
-(void)setActivityUUID:(NSString *)arg1 ;
@end
