/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDictionary;

@interface PBSOSUpdateDescriptor : NSObject <NSSecureCoding, NSCopying> {

	BOOL _rampEnabled;
	NSString* _publisher;
	NSString* _productSystemName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _releaseType;
	NSDate* _releaseDate;
	unsigned long long _downloadSize;
	unsigned long long _installationSize;
	unsigned long long _unarchivedSize;
	unsigned long long _minimumSystemPartitionSize;
	unsigned long long _msuPrepareSize;
	unsigned long long _updateType;
	NSDictionary* _systemPartitionPadding;
	unsigned long long _action;

}

@property (nonatomic,retain) NSString * publisher;                                                                           //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSString * productSystemName;                                                                   //@synthesize productSystemName=_productSystemName - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                                                      //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;                                                                 //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                                                                         //@synthesize releaseType=_releaseType - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                                                                           //@synthesize releaseDate=_releaseDate - In the implementation block
@property (assign,nonatomic) unsigned long long downloadSize;                                                                //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) unsigned long long installationSize;                                                            //@synthesize installationSize=_installationSize - In the implementation block
@property (assign,nonatomic) unsigned long long minimumSystemPartitionSize;                                                  //@synthesize minimumSystemPartitionSize=_minimumSystemPartitionSize - In the implementation block
@property (assign,nonatomic) unsigned long long updateType;                                                                  //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) BOOL rampEnabled;                                                                               //@synthesize rampEnabled=_rampEnabled - In the implementation block
@property (nonatomic,retain) NSDictionary * systemPartitionPadding;                                                          //@synthesize systemPartitionPadding=_systemPartitionPadding - In the implementation block
@property (assign,nonatomic) unsigned long long unarchivedSize;                                                              //@synthesize unarchivedSize=_unarchivedSize - In the implementation block
@property (assign,setter=setMsuPrepareSize:,getter=msuPrepareSize,nonatomic) unsigned long long msuPrepareSize;              //@synthesize msuPrepareSize=_msuPrepareSize - In the implementation block
@property (assign,nonatomic) unsigned long long action;                                                                      //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(NSString *)productBuildVersion;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(unsigned long long)downloadSize;
-(void)setDownloadSize:(unsigned long long)arg1 ;
-(unsigned long long)updateType;
-(NSString *)productSystemName;
-(unsigned long long)preparationSize;
-(void)setPublisher:(NSString *)arg1 ;
-(void)setProductSystemName:(NSString *)arg1 ;
-(void)setReleaseType:(NSString *)arg1 ;
-(void)setUnarchivedSize:(unsigned long long)arg1 ;
-(void)setMsuPrepareSize:(unsigned long long)arg1 ;
-(void)setInstallationSize:(unsigned long long)arg1 ;
-(void)setMinimumSystemPartitionSize:(unsigned long long)arg1 ;
-(void)setRampEnabled:(BOOL)arg1 ;
-(void)setSystemPartitionPadding:(NSDictionary *)arg1 ;
-(NSString *)publisher;
-(NSString *)releaseType;
-(unsigned long long)unarchivedSize;
-(unsigned long long)msuPrepareSize;
-(unsigned long long)installationSize;
-(unsigned long long)minimumSystemPartitionSize;
-(BOOL)rampEnabled;
-(NSDictionary *)systemPartitionPadding;
-(BOOL)_hasValue:(id)arg1 ;
-(id)_buildCompareKey;
-(id)humanReadableUpdateName;
-(unsigned long long)totalRequiredFreeSpace;
-(BOOL)isValidDescriptor;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
@end

