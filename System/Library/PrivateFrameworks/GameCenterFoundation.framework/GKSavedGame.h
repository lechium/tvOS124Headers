/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL;

@interface GKSavedGame : NSObject <NSCopying> {

	NSString* _name;
	NSString* _deviceName;
	NSDate* _modificationDate;
	NSURL* _fileURL;

}

@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSString * deviceName;                  //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (retain) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)deviceName;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)fileURL;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
@end

