/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CTCallCenter : NSObject {

	NSSet* _currentCalls;
	/*^block*/id _callEventHandler;

}

@property (retain,readonly) NSSet * currentCalls;              //@synthesize currentCalls=_currentCalls - In the implementation block
@property (nonatomic,copy) id callEventHandler;                //@synthesize callEventHandler=_callEventHandler - In the implementation block
-(id)callEventHandler;
-(void)setCallEventHandler:(id)arg1 ;
-(NSSet *)currentCalls;
@end

