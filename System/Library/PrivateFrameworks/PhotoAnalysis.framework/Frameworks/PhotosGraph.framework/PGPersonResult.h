/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol PGPersonResult <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@required
-(BOOL)isVerified;
-(NSString *)contactIdentifier;
-(NSString *)localIdentifier;
-(NSString *)keywordDescription;
-(long long)compareToPerson:(id)arg1;
-(NSDate *)birthdayDate;
-(BOOL)isInferredChild;

@end

