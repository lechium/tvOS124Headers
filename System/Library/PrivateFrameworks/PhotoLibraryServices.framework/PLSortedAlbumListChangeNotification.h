/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLSortedAlbumList, PLAssetContainerListChangeNotification;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLSortedAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _backingNotification;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(BOOL)countDidChange;
-(id)albumList;
-(id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2 ;
-(BOOL)shouldReload;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)object;
@end

