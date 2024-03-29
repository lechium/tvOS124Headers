/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, CPLFeatureVersionHistory, NSData, CPLMomentShare, CPLAccountFlags;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _assetCounts;
	CPLFeatureVersionHistory* _featureVersionHistory;
	NSData* _accountFlagsData;
	CPLMomentShare* _momentShare;

}

@property (nonatomic,copy) NSDictionary * assetCounts;                                      //@synthesize assetCounts=_assetCounts - In the implementation block
@property (nonatomic,retain) CPLFeatureVersionHistory * featureVersionHistory;              //@synthesize featureVersionHistory=_featureVersionHistory - In the implementation block
@property (nonatomic,readonly) CPLAccountFlags * accountFlags; 
@property (nonatomic,copy) NSData * accountFlagsData;                                       //@synthesize accountFlagsData=_accountFlagsData - In the implementation block
@property (nonatomic,retain) CPLMomentShare * momentShare;                                  //@synthesize momentShare=_momentShare - In the implementation block
+(BOOL)supportsSecureCoding;
-(CPLFeatureVersionHistory *)featureVersionHistory;
-(NSData *)accountFlagsData;
-(void)setAccountFlagsData:(NSData *)arg1 ;
-(NSDictionary *)assetCounts;
-(void)setAssetCounts:(NSDictionary *)arg1 ;
-(void)setFeatureVersionHistory:(CPLFeatureVersionHistory *)arg1 ;
-(id)prettyDescriptionWithAnchorDesciptionBlock:(/*^block*/id)arg1 ;
-(CPLAccountFlags *)accountFlags;
-(CPLMomentShare *)momentShare;
-(void)setMomentShare:(CPLMomentShare *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

