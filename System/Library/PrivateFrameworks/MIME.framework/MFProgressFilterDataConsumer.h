/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer {

	unsigned long long _expectedSize;
	unsigned long long _currentBytes;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy) id progressBlock;                       //@synthesize progressBlock=_progressBlock - In the implementation block
@property (readonly) unsigned long long expectedSize;              //@synthesize expectedSize=_expectedSize - In the implementation block
-(id)initWithConsumer:(id)arg1 expectedSize:(unsigned long long)arg2 ;
-(id)initWithConsumers:(id)arg1 expectedSize:(unsigned long long)arg2 ;
-(unsigned long long)expectedSize;
-(void)dealloc;
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
-(long long)appendData:(id)arg1 ;
@end
