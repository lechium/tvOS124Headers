/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>
#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class MFLock, NSString;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {

	id<MFGuaranteedCollectingDataConsumer> _mainConsumer;
	MFLock* _consumerLock;
	BOOL _isDone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addDataConsumer:(id)arg1 ;
-(id)initWithMainConsumer:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(void)done;
-(long long)appendData:(id)arg1 ;
@end

