/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface CKDFileWatcher : NSObject {

	int _fd;
	NSString* _path;
	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,retain) NSString * path;                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int fd;                                            //@synthesize fd=_fd - In the implementation block
+(id)queue;
-(void)setFd:(int)arg1 ;
-(int)fd;
-(void)dealloc;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
@end

