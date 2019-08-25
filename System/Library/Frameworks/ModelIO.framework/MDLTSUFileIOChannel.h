/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLTSUReadChannel.h>
#import <libobjc.A.dylib/MDLTSUStreamWriteChannel.h>
#import <libobjc.A.dylib/MDLTSURandomWriteChannel.h>

@protocol OS_dispatch_queue, OS_dispatch_io;
@class NSObject, NSString;

@interface MDLTSUFileIOChannel : NSObject <MDLTSUReadChannel, MDLTSUStreamWriteChannel, MDLTSURandomWriteChannel> {

	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_io> _channel;
	BOOL _isClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initForReadingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id*)arg5 cleanupHandler:(/*^block*/id)arg6 ;
-(id)initWithType:(unsigned long long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(/*^block*/id)arg4 ;
-(id)initForStreamWritingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initForRandomWritingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initForRandomReadingWritingURL:(id)arg1 error:(id*)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)truncateToLength:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForReadingURL:(id)arg1 error:(id*)arg2 ;
-(id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initForStreamWritingURL:(id)arg1 error:(id*)arg2 ;
-(id)initForRandomWritingURL:(id)arg1 error:(id*)arg2 ;
-(id)initForRandomReadingWritingURL:(id)arg1 error:(id*)arg2 ;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)close;
-(BOOL)isValid;
@end
