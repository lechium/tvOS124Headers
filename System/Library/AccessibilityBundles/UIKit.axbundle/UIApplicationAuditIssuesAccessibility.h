/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIApplicationAuditIssuesAccessibility_super.h>

@interface UIApplicationAuditIssuesAccessibility : __UIApplicationAuditIssuesAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
+(id)_axAuditFindFrontmostViewControllerForHierarchy:(id)arg1 ;
+(void)_axAuditCaptureReferenceToCellsForViewHierarchy:(id)arg1 ;
+(BOOL)_axAuditSwizzleAwayContentSize:(BOOL)arg1 ;
+(id)_axAuditGetAllFontSizes;
+(void)_axAuditUIKitShouldReportFontSize:(id)arg1 ;
+(void)_axAuditSpinRunloopForDuration:(double)arg1 ;
+(id)_accessibilityGetAllSubviews:(id)arg1 withFiltering:(BOOL)arg2 ;
+(void)_axAuditUpdateRowHeightForTableAndCollectionViewsOfElements:(id)arg1 ;
+(void)_axAuditRemoveUIViewsFromArray:(id)arg1 usingFilter:(/*^block*/id)arg2 ;
+(void)_axAuditUpdateReferenceOfCellsForViewHierarchy:(id)arg1 forFontSize:(id)arg2 ;
+(void)_axAuditStoreFontForElement:(id)arg1 intoDictionary:(id)arg2 forCurrentFont:(id)arg3 ;
+(void)_axAuditCheckElementForClipping:(id)arg1 storeIntoSet:(id)arg2 ;
+(id)_axAuditDereferenceCellsForViewHierarchy:(id)arg1 ;
+(void)_axAuditRemoveUnsupportedCategories:(id)arg1 ;
+(id)_axAuditFindElementsNotSupportingDynamicText:(id)arg1 ;
+(id)_axAuditGetTextFromObject:(id)arg1 ;
+(id)_axAuditFindDescendantInaccessibleElements:(id)arg1 ;
+(id)_axAuditFindAllTablesInHierarchyForView:(id)arg1 ;
+(id)_axAuditFindAllCollectionViewsInHierarchyForView:(id)arg1 ;
+(id)_axAuditFindAllTablesInHierarchyForElements:(id)arg1 ;
+(id)_axAuditFindAllCollectionViewsInHierarchyForElements:(id)arg1 ;
+(id)_axAuditGetFontForElement:(id)arg1 ;
+(BOOL)_axAuditElementIsClipping:(id)arg1 ;
+(BOOL)_axAuditShouldElementBeCheckedForClipping:(id)arg1 ;
+(id)_axAuditFindClosestAccessibleAncestor:(id)arg1 ;
+(id)_axAuditGetIndexPathsDictionaryForCaptureActionForView:(id)arg1 ;
+(id)_axAuditGetIndexPathsDictionaryForUpdateActionForView:(id)arg1 ;
+(id)_axAuditGetOriginalContentOffsetForView:(id)arg1 ;
+(id)_axAuditGetAllTableAndCollectionViewsForHierarchy:(id)arg1 ;
+(id)_axAuditHelperToFindRelevantSubviewsOfCellView:(id)arg1 ;
+(id)_axAuditCreateElementInfoDictionariesForSubviews:(id)arg1 ;
+(void)_axAuditForHierarchy:(id)arg1 withTableOrCollectionViews:(id)arg2 performAction:(id)arg3 performBlockOnEachCell:(/*^block*/id)arg4 ;
+(id)_axAuditMatchReferenceSubviews:(id)arg1 againstNewSubviews:(id)arg2 ;
+(void)_axAuditUpdateFontsForReferenceMatches:(id)arg1 forFontSize:(id)arg2 ;
+(void)_axAuditUpdateClippingStatusForReferenceMatches:(id)arg1 ;
+(void)_axAuditStoreFontsIntoDictionary:(id)arg1 forReferenceMatches:(id)arg2 ;
+(void)_axAuditStoreClippedElementsIntoSet:(id)arg1 forReferenceMatches:(id)arg2 ;
+(BOOL)_axAuditSetSwizzledImp:(/*function pointer*/void*)arg1 orOrigImp:(/*function pointer*/void*)arg2 forMethod:(objc_methodRef)arg3 withSwizzling:(BOOL)arg4 ;
+(id)_axAuditGetCellReferenceMapTable;
+(id)_axAuditGetFontAttrFromAttributedString:(id)arg1 ;
@end

