/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject {

	AVOutputContextManagerInternal* _ivars;

}
+(id)outputContextManagerForAllOutputContexts;
-(id)initWithOutputContextManagerImpl:(id)arg1 ;
-(void)outputContextManagerImplDidExpireWithReplacementImpl:(id)arg1 ;
-(void)outputContextManagerImpl:(id)arg1 observedFailureToConnectToOutputDevice:(id)arg2 reason:(id)arg3 ;
-(void)dealloc;
@end
