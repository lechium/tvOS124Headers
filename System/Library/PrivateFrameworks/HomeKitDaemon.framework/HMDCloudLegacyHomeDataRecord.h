/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCloudRecord.h>

@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (nonatomic,retain) NSData * dataVersion2; 
+(id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2 ;
-(id)recordType;
-(unsigned long long)objectEncoding;
-(id)extractObjectChange;
-(BOOL)encodeObjectChange:(id)arg1 ;
-(void)clearData;
-(NSData *)dataVersion2;
-(void)setDataVersion2:(NSData *)arg1 ;
-(id)data;
-(void)setData:(id)arg1 ;
@end
