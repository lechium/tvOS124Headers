/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol,PLPhotoAnalysisGraphServiceProtocol,PLPhotoAnalysisVisionServiceTaxonomyProtocol,PLPhotoAnalysisVisionServiceSceneClassificationProtocol,PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
@required
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;

@end

