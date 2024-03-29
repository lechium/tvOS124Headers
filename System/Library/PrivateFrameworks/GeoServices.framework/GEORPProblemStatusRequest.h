/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, NSMutableArray, GEOServicesState, NSString, GEORPUserCredentials;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {

	GEOABSecondPartyPlaceRequestClientMetaData* _abAssignmentMetadata;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	NSMutableArray* _problemIds;
	GEOServicesState* _servicesState;
	NSString* _statusNotificationId;
	GEORPUserCredentials* _userCredentials;

}

@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;                                         //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusNotificationId; 
@property (nonatomic,retain) NSString * statusNotificationId;                                                //@synthesize statusNotificationId=_statusNotificationId - In the implementation block
@property (nonatomic,retain) NSMutableArray * problemIds;                                                    //@synthesize problemIds=_problemIds - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities;                                   //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;                                       //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAbAssignmentMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abAssignmentMetadata;              //@synthesize abAssignmentMetadata=_abAssignmentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasServicesState; 
@property (nonatomic,retain) GEOServicesState * servicesState;                                               //@synthesize servicesState=_servicesState - In the implementation block
+(Class)problemIdType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(BOOL)hasClientCapabilities;
-(GEORPClientCapabilities *)clientCapabilities;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(void)setServicesState:(GEOServicesState *)arg1 ;
-(BOOL)hasServicesState;
-(GEOServicesState *)servicesState;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(BOOL)hasUserCredentials;
-(GEORPUserCredentials *)userCredentials;
-(void)addProblemId:(id)arg1 ;
-(void)setStatusNotificationId:(NSString *)arg1 ;
-(unsigned long long)problemIdsCount;
-(void)clearProblemIds;
-(id)problemIdAtIndex:(unsigned long long)arg1 ;
-(void)setAbAssignmentMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(BOOL)hasStatusNotificationId;
-(BOOL)hasAbAssignmentMetadata;
-(NSString *)statusNotificationId;
-(NSMutableArray *)problemIds;
-(void)setProblemIds:(NSMutableArray *)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abAssignmentMetadata;
-(void)populateAnalyticsMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

