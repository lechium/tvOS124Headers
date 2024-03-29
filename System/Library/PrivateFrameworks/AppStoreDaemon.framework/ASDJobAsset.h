/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData;

@interface ASDJobAsset : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isExternal;
	BOOL _isLocallyCacheable;
	BOOL _isZipStreamable;
	NSString* _assetType;
	NSString* _assetURL;
	NSNumber* _bytesTotal;
	NSData* _dPInfo;
	NSNumber* _expectedDiskspace;
	NSData* _hashArrayData;
	NSNumber* _hashType;
	NSNumber* _initialODRSize;
	NSNumber* _numberOfBytesToHash;
	NSData* _sinfs;
	NSString* _storeDownloadKey;
	NSString* _variantID;

}

@property (nonatomic,copy) NSString * assetType;                        //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy) NSString * assetURL;                         //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSNumber * bytesTotal;                       //@synthesize bytesTotal=_bytesTotal - In the implementation block
@property (nonatomic,copy) NSData * dPInfo;                             //@synthesize dPInfo=_dPInfo - In the implementation block
@property (nonatomic,copy) NSNumber * expectedDiskspace;                //@synthesize expectedDiskspace=_expectedDiskspace - In the implementation block
@property (nonatomic,copy) NSData * hashArrayData;                      //@synthesize hashArrayData=_hashArrayData - In the implementation block
@property (nonatomic,copy) NSNumber * hashType;                         //@synthesize hashType=_hashType - In the implementation block
@property (nonatomic,copy) NSNumber * initialODRSize;                   //@synthesize initialODRSize=_initialODRSize - In the implementation block
@property (assign,nonatomic) BOOL isExternal;                           //@synthesize isExternal=_isExternal - In the implementation block
@property (assign,nonatomic) BOOL isLocallyCacheable;                   //@synthesize isLocallyCacheable=_isLocallyCacheable - In the implementation block
@property (assign,nonatomic) BOOL isZipStreamable;                      //@synthesize isZipStreamable=_isZipStreamable - In the implementation block
@property (nonatomic,copy) NSNumber * numberOfBytesToHash;              //@synthesize numberOfBytesToHash=_numberOfBytesToHash - In the implementation block
@property (nonatomic,copy) NSData * sinfs;                              //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSString * storeDownloadKey;                 //@synthesize storeDownloadKey=_storeDownloadKey - In the implementation block
@property (nonatomic,copy) NSString * variantID;                        //@synthesize variantID=_variantID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)numberOfBytesToHash;
-(void)setAssetURL:(NSString *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(void)setBytesTotal:(NSNumber *)arg1 ;
-(void)setExpectedDiskspace:(NSNumber *)arg1 ;
-(void)setHashArrayData:(NSData *)arg1 ;
-(void)setHashType:(NSNumber *)arg1 ;
-(void)setNumberOfBytesToHash:(NSNumber *)arg1 ;
-(void)setDPInfo:(NSData *)arg1 ;
-(void)setInitialODRSize:(NSNumber *)arg1 ;
-(void)setIsLocallyCacheable:(BOOL)arg1 ;
-(void)setIsExternal:(BOOL)arg1 ;
-(void)setIsZipStreamable:(BOOL)arg1 ;
-(void)setStoreDownloadKey:(NSString *)arg1 ;
-(void)setVariantID:(NSString *)arg1 ;
-(NSString *)assetURL;
-(NSString *)assetType;
-(NSData *)sinfs;
-(void)setSinfs:(NSData *)arg1 ;
-(NSNumber *)bytesTotal;
-(NSData *)dPInfo;
-(NSNumber *)expectedDiskspace;
-(NSData *)hashArrayData;
-(NSNumber *)hashType;
-(NSNumber *)initialODRSize;
-(BOOL)isLocallyCacheable;
-(BOOL)isZipStreamable;
-(NSString *)storeDownloadKey;
-(NSString *)variantID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isExternal;
@end

