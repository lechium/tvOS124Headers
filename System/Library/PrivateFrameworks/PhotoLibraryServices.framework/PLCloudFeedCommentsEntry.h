/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSString, NSOrderedSet, NSMutableOrderedSet;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (nonatomic,retain) NSString * entryCloudAssetGUID; 
@property (nonatomic,retain) NSOrderedSet * entryLikeComments; 
@property (nonatomic,retain) NSOrderedSet * entryComments; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableEntryLikeComments; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableEntryComments; 
+(id)entityName;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(NSMutableOrderedSet *)mutableEntryLikeComments;
-(NSMutableOrderedSet *)mutableEntryComments;
@end

