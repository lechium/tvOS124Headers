/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFileHandle.h>

@protocol OS_dispatch_source, OS_dispatch_data, OS_dispatch_queue, OS_dispatch_io;
@class NSObject;

@interface NSConcreteFileHandle : NSFileHandle {

	CFRunLoopSourceRef _source;
	CFRunLoopRef _rl;
	unsigned short _activity;
	int _error;
	int _resultSocket;
	NSObject*<OS_dispatch_source> _dsrc;
	NSObject*<OS_dispatch_data> _resultData;
	NSObject*<OS_dispatch_queue> _fhQueue;
	NSObject*<OS_dispatch_io> _readChannel;
	/*^block*/id _readabilityHandler;
	/*^block*/id _writeabilityHandler;
	NSObject*<OS_dispatch_source> _readMonitoringSource;
	NSObject*<OS_dispatch_source> _writeMonitoringSource;
	NSObject*<OS_dispatch_queue> _monitoringQueue;
	int _fd;
	AS _flags;

}
-(id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 ;
-(id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(id)availableData;
-(id)readDataToEndOfFile;
-(unsigned long long)offsetInFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(void)_closeOnDealloc;
-(void)_locked_clearHandler:(/*^block*/id*)arg1 forSource:(id*)arg2 ;
-(void)_cancelDispatchSources;
-(void)performActivity:(long long)arg1 modes:(id)arg2 ;
-(void)readInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)waitForDataInBackgroundAndNotifyForModes:(id)arg1 ;
-(id)_monitor:(int)arg1 ;
-(unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char*)arg2 ;
-(void)readInBackgroundAndNotify;
-(void)readToEndOfFileInBackgroundAndNotify;
-(void)acceptConnectionInBackgroundAndNotify;
-(void)waitForDataInBackgroundAndNotify;
-(int)fileDescriptor;
-(void)writeData:(id)arg1 ;
-(unsigned long long)seekToEndOfFile;
-(void)closeFile;
-(id)initWithFileDescriptor:(int)arg1 ;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)setPort:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(id)port;
@end

