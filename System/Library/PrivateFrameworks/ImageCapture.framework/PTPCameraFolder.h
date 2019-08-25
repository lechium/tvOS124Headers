/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ICCameraFolder.h>

@class NSString, NSMutableArray;

@interface PTPCameraFolder : ICCameraFolder {

	void* _ptpCameraFolderProperties;
	NSString* _path;
	NSMutableArray* _notifications;

}

@property (readonly) unsigned long long type; 
@property (readonly) unsigned storageID; 
@property (readonly) unsigned objHandle; 
@property (copy) id info; 
@property (retain) NSString * path;                        //@synthesize path=_path - In the implementation block
-(unsigned)objHandle;
-(unsigned)storageID;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned)arg5 objectHandle:(unsigned)arg6 ;
-(void)flushNotifications:(id)arg1 ;
-(BOOL)deleteItemFromCamera:(id)arg1 ;
-(void)refreshInfo;
-(void)enumerateContent;
-(void)dealloc;
-(unsigned long long)type;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)info;
-(void)setInfo:(id)arg1 ;
@end
