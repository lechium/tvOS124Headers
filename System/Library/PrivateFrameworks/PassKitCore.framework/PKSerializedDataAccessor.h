/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKFileDataAccessor.h>

@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor {

	NSData* _archiveData;

}
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeDiskRepresentation;
-(void)dealloc;
-(id)archiveData;
@end

