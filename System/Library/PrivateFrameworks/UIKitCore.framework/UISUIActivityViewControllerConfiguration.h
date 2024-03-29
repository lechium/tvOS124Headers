/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UISUISecurityContext;

@interface UISUIActivityViewControllerConfiguration : NSObject <NSSecureCoding> {

	BOOL _allowsEmbedding;
	BOOL _sourceIsManaged;
	BOOL _shouldMatchOnlyUserElectedExtensions;
	BOOL _shouldExcludeiCloudAddToDriveActivity;
	BOOL _shouldExcludeiCloudSharingActivity;
	BOOL _shouldPresentAirDropSection;
	BOOL _canExcludeExtensionActivities;
	BOOL _canShowShareSheetPlugIns;
	BOOL __unitTest_disableExcludingSourceApplicationFromOpenActivities;
	double _preferredWidth;
	NSArray* _hostActivityConfigurations;
	NSArray* _activityItemValueClassNames;
	NSArray* _activityTypesToCreateInShareService;
	UISUISecurityContext* _securityScopedURLsForMatching;
	NSArray* _activityItemValueExtensionMatchingDictionaries;
	NSArray* _includedActivityTypes;
	NSArray* _excludedActivityTypes;
	NSArray* _activityTypeOrder;
	long long _excludedActivityCategories;

}

@property (assign,nonatomic) double preferredWidth;                                                             //@synthesize preferredWidth=_preferredWidth - In the implementation block
@property (nonatomic,retain) NSArray * hostActivityConfigurations;                                              //@synthesize hostActivityConfigurations=_hostActivityConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * activityItemValueClassNames;                                             //@synthesize activityItemValueClassNames=_activityItemValueClassNames - In the implementation block
@property (nonatomic,retain) NSArray * activityTypesToCreateInShareService;                                     //@synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService - In the implementation block
@property (nonatomic,retain) UISUISecurityContext * securityScopedURLsForMatching;                              //@synthesize securityScopedURLsForMatching=_securityScopedURLsForMatching - In the implementation block
@property (nonatomic,retain) NSArray * activityItemValueExtensionMatchingDictionaries;                          //@synthesize activityItemValueExtensionMatchingDictionaries=_activityItemValueExtensionMatchingDictionaries - In the implementation block
@property (assign,nonatomic) BOOL allowsEmbedding;                                                              //@synthesize allowsEmbedding=_allowsEmbedding - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                              //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchOnlyUserElectedExtensions;                                         //@synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeiCloudAddToDriveActivity;                                        //@synthesize shouldExcludeiCloudAddToDriveActivity=_shouldExcludeiCloudAddToDriveActivity - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeiCloudSharingActivity;                                           //@synthesize shouldExcludeiCloudSharingActivity=_shouldExcludeiCloudSharingActivity - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentAirDropSection;                                                  //@synthesize shouldPresentAirDropSection=_shouldPresentAirDropSection - In the implementation block
@property (assign,nonatomic) BOOL canExcludeExtensionActivities;                                                //@synthesize canExcludeExtensionActivities=_canExcludeExtensionActivities - In the implementation block
@property (assign,nonatomic) BOOL canShowShareSheetPlugIns;                                                     //@synthesize canShowShareSheetPlugIns=_canShowShareSheetPlugIns - In the implementation block
@property (nonatomic,retain) NSArray * includedActivityTypes;                                                   //@synthesize includedActivityTypes=_includedActivityTypes - In the implementation block
@property (nonatomic,retain) NSArray * excludedActivityTypes;                                                   //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,retain) NSArray * activityTypeOrder;                                                       //@synthesize activityTypeOrder=_activityTypeOrder - In the implementation block
@property (assign,nonatomic) long long excludedActivityCategories;                                              //@synthesize excludedActivityCategories=_excludedActivityCategories - In the implementation block
@property (nonatomic,readonly) BOOL _unitTest_disableExcludingSourceApplicationFromOpenActivities;              //@synthesize _unitTest_disableExcludingSourceApplicationFromOpenActivities=__unitTest_disableExcludingSourceApplicationFromOpenActivities - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)sourceIsManaged;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(BOOL)canExcludeExtensionActivities;
-(void)setShouldMatchOnlyUserElectedExtensions:(BOOL)arg1 ;
-(void)setActivityItemValueExtensionMatchingDictionaries:(NSArray *)arg1 ;
-(NSArray *)activityItemValueExtensionMatchingDictionaries;
-(BOOL)shouldMatchOnlyUserElectedExtensions;
-(BOOL)shouldExcludeiCloudAddToDriveActivity;
-(BOOL)shouldExcludeiCloudSharingActivity;
-(NSArray *)excludedActivityTypes;
-(NSArray *)includedActivityTypes;
-(long long)excludedActivityCategories;
-(NSArray *)activityTypeOrder;
-(void)setShouldExcludeiCloudAddToDriveActivity:(BOOL)arg1 ;
-(void)setShouldExcludeiCloudSharingActivity:(BOOL)arg1 ;
-(void)setCanExcludeExtensionActivities:(BOOL)arg1 ;
-(void)setActivityTypeOrder:(NSArray *)arg1 ;
-(void)setIncludedActivityTypes:(NSArray *)arg1 ;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setExcludedActivityCategories:(long long)arg1 ;
-(BOOL)allowsEmbedding;
-(void)setPreferredWidth:(double)arg1 ;
-(void)setHostActivityConfigurations:(NSArray *)arg1 ;
-(void)setActivityItemValueClassNames:(NSArray *)arg1 ;
-(NSArray *)activityTypesToCreateInShareService;
-(void)setActivityTypesToCreateInShareService:(NSArray *)arg1 ;
-(void)setSecurityScopedURLsForMatching:(UISUISecurityContext *)arg1 ;
-(void)setAllowsEmbedding:(BOOL)arg1 ;
-(void)setCanShowShareSheetPlugIns:(BOOL)arg1 ;
-(double)preferredWidth;
-(NSArray *)hostActivityConfigurations;
-(NSArray *)activityItemValueClassNames;
-(UISUISecurityContext *)securityScopedURLsForMatching;
-(BOOL)shouldPresentAirDropSection;
-(void)setShouldPresentAirDropSection:(BOOL)arg1 ;
-(BOOL)canShowShareSheetPlugIns;
-(BOOL)_unitTest_disableExcludingSourceApplicationFromOpenActivities;
-(id)availableActivityItemValueClasses;
-(id)_contextForMatchingActivityItems:(id)arg1 activityItemValues:(id)arg2 activityItemValueClasses:(id)arg3 ;
-(id)contextForMatchingByActivityItemValueClasses;
-(id)contextForMatchingByActivityItems:(id)arg1 itemValues:(id)arg2 ;
@end

