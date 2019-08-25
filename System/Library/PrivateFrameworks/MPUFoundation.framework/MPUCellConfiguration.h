/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@interface MPUCellConfiguration : NSObject
+(double)tableViewCellHeight;
+(void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2 ;
+(void)handleScrollViewDidScrollForCell:(id)arg1 inScrollView:(id)arg2 viewController:(id)arg3 ;
+(void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2 ;
+(void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5 ;
+(void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5 ;
+(void)configureCellForSizing:(id)arg1 ;
+(void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5 ;
+(id)mediaEntityPropertiesToFetch;
+(void)willDisplayCell:(id)arg1 inTableView:(id)arg2 withViewController:(id)arg3 atIndex:(unsigned long long)arg4 ;
+(void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(id)tableViewBackgroundColor;
+(id)tableViewSeparatorColor;
+(UIEdgeInsets)tableViewSeparatorInset;
+(long long)tableViewSeparatorStyle;
+(id)tableViewCellBackgroundColor;
+(Class)tableViewCellClass;
+(double)expandedTableViewCellHeight;
+(BOOL)wantsScrollViewDidScroll;
+(BOOL)wantsScrollViewDidScrollInScrollView;
+(BOOL)wantsScrollViewDidEndDecelerating;
+(id)reuseIdentifier;
@end

