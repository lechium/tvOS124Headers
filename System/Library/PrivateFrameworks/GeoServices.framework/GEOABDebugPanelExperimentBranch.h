/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _branchLabel;
	NSString* _branchName;
	NSString* _experimentId;
	NSString* _experimentName;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                        //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentName; 
@property (nonatomic,retain) NSString * experimentName;                      //@synthesize experimentName=_experimentName - In the implementation block
@property (nonatomic,readonly) BOOL hasBranchLabel; 
@property (nonatomic,retain) NSString * branchLabel;                         //@synthesize branchLabel=_branchLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasBranchName; 
@property (nonatomic,retain) NSString * branchName;                          //@synthesize branchName=_branchName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasExperimentId;
-(NSString *)experimentId;
-(NSString *)experimentName;
-(NSString *)branchLabel;
-(NSString *)branchName;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setExperimentName:(NSString *)arg1 ;
-(void)setBranchLabel:(NSString *)arg1 ;
-(void)setBranchName:(NSString *)arg1 ;
-(BOOL)hasExperimentName;
-(BOOL)hasBranchLabel;
-(BOOL)hasBranchName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

