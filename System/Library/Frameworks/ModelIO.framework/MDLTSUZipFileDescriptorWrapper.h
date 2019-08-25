/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, MDLTSUReadChannel;
@class NSObject;

@interface MDLTSUZipFileDescriptorWrapper : NSObject {

	NSObject*<OS_dispatch_group> _accessGroup;
	int _fileDescriptor;
	id<MDLTSUReadChannel> _readChannel;

}

@property (nonatomic,readonly) int fileDescriptor;                             //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,readonly) id<MDLTSUReadChannel> readChannel;              //@synthesize readChannel=_readChannel - In the implementation block
-(int)fileDescriptor;
-(id)initWithFileDescriptor:(int)arg1 queue:(id)arg2 ;
-(id<MDLTSUReadChannel>)readChannel;
-(void)waitForAccessToEnd;
-(void)beginAccess;
-(void)endAccess;
-(id)init;
-(void)dealloc;
@end

