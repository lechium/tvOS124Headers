/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface MBRestoreInfo : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _date;
	BOOL _wasCloudRestore;
	NSString* _deviceBuildVersion;
	NSString* _backupBuildVersion;

}

@property (readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) BOOL wasCloudRestore;                       //@synthesize wasCloudRestore=_wasCloudRestore - In the implementation block
@property (readonly) NSString * deviceBuildVersion;              //@synthesize deviceBuildVersion=_deviceBuildVersion - In the implementation block
@property (readonly) NSString * backupBuildVersion;              //@synthesize backupBuildVersion=_backupBuildVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setWasCloudRestore:(BOOL)arg1 ;
-(void)setDeviceBuildVersion:(NSString *)arg1 ;
-(void)setBackupBuildVersion:(NSString *)arg1 ;
-(BOOL)wasCloudRestore;
-(NSString *)backupBuildVersion;
-(NSString *)deviceBuildVersion;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)dictionaryRepresentation;
@end

