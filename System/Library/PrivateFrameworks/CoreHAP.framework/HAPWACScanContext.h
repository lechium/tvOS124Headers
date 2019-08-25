/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HAPWACScanner;

@interface HAPWACScanContext : HMFObject {

	HAPWACScanner* _originator;
	/*^block*/id _completion;
	CFRunLoopRef _runLoop;

}

@property (assign,nonatomic,__weak) HAPWACScanner * originator;              //@synthesize originator=_originator - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) CFRunLoopRef runLoop;                           //@synthesize runLoop=_runLoop - In the implementation block
-(HAPWACScanner *)originator;
-(void)setOriginator:(HAPWACScanner *)arg1 ;
-(CFRunLoopRef)runLoop;
-(void)setRunLoop:(CFRunLoopRef)arg1 ;
-(void)dealloc;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

