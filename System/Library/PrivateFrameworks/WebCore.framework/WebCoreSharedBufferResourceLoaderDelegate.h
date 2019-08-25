/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class NSData, NSString;

@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	ImageDecoderAVFObjC* _parent;
	long long _expectedContentSize;
	RetainPtr<NSData>* _data;
	BOOL _complete;
	Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16>* _requests;
	Lock _dataLock;

}

@property (readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enqueueRequest:(id)arg1 ;
-(void)fulfillPendingRequests;
-(BOOL)canFulfillRequest:(id)arg1 ;
-(void)fulfillRequest:(id)arg1 ;
-(void)setExpectedContentSize:(long long)arg1 ;
-(void)updateData:(id)arg1 complete:(BOOL)arg2 ;
-(id)initWithParent:(ImageDecoderAVFObjC*)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
-(NSData *)data;
@end

