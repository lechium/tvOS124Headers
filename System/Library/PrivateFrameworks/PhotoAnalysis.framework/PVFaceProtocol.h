/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData;


@protocol PVFaceProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) long long clusterSequenceNumber; 
@property (nonatomic,readonly) NSData * faceprintData; 
@property (assign,nonatomic) long long qualityMeasure; 
@required
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(void)setQualityMeasure:(long long)arg1;
-(NSString *)localIdentifier;
-(NSString *)personLocalIdentifier;
-(double)centerX;
-(double)centerY;
-(NSData *)faceprintData;
-(double)size;

@end

