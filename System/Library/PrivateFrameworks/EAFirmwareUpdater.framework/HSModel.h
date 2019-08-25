/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSModelDelegate, OS_dispatch_queue;
@class NSObject;

@interface HSModel : NSObject {

	id<HSModelDelegate> delegate;
	NSObject*<OS_dispatch_queue> _queue;

}
-(BOOL)getHSModelForEngineMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 numHSModels:(unsigned long long)arg3 modelBuffer:(char*)arg4 length:(unsigned long long)arg5 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
@end

