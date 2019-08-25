/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPhotoLibrary.h>

@interface PLSharedPhotoLibrary : PLPhotoLibrary
+(id)_sharedPhotoLibrary;
+(id)sharedPhotoLibrary;
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)concurrencyType;
-(void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 ;
-(void)_assetsdHasNoXPCTransactions:(id)arg1 ;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

