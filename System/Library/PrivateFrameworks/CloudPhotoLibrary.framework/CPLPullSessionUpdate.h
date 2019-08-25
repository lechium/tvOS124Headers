/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate {

	CPLChangeBatch* _clientBatch;
	CPLChangeBatch* _cloudBatch;

}

@property (nonatomic,readonly) CPLChangeBatch * clientBatch;              //@synthesize clientBatch=_clientBatch - In the implementation block
@property (nonatomic,readonly) CPLChangeBatch * cloudBatch;               //@synthesize cloudBatch=_cloudBatch - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(id)initWithStore:(id)arg1 expandedClientBatch:(id)arg2 expandedCloudBatch:(id)arg3 ;
-(CPLChangeBatch *)clientBatch;
-(CPLChangeBatch *)cloudBatch;
-(id)statusDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

