/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface VUICLogObjectManager : NSObject {

	NSObject*<OS_os_log> _defaultLogObject;

}

@property (nonatomic,retain) NSObject*<OS_os_log> defaultLogObject;              //@synthesize defaultLogObject=_defaultLogObject - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_os_log>)defaultLogObject;
-(void)setDefaultLogObject:(NSObject*<OS_os_log>)arg1 ;
@end

