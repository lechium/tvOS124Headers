/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIDictationConnectionFilterState : NSObject {

	CFStringRef _transform;
	/*^block*/id _pendingDictationCommand;

}

@property (assign,nonatomic) CFStringRef transform;                 //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy) id pendingDictationCommand;              //@synthesize pendingDictationCommand=_pendingDictationCommand - In the implementation block
-(void)dealloc;
-(void)setTransform:(CFStringRef)arg1 ;
-(CFStringRef)transform;
-(void)setPendingDictationCommand:(id)arg1 ;
-(id)pendingDictationCommand;
@end

