/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGUserDefaults : NSObject
+(unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+(unsigned long long)minimumNumberOfCuratedAssetsForInterestingMoments;
+(unsigned long long)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
+(double)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
+(BOOL)enablePropertyLoadManagement;
+(BOOL)enableIdentifyingProperties;
+(BOOL)isAlwaysShowingHolidayCalendarEvents;
+(BOOL)isShowingHolidayCalendarEvents;
+(unsigned long long)maximumNumberOfTextFeaturesPerEvent;
+(BOOL)boundTextFeaturesPerEvent;
+(BOOL)isMemoriesLivingOnFeedbackEnabled;
+(BOOL)isPublicEventsEnabled;
+(void)_registerDefaults;
+(BOOL)isMemoriesNotificationDisabled;
+(void)initialize;
@end
