/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTRowAction : NSObject {

	/*^block*/id _handler;

}

@property (nonatomic,readonly) id handler; 
+(id)actionWithHandler:(/*^block*/id)arg1 ;
-(BOOL)deselectsRowOnSuccess;
-(/*^block*/id)defaultHandler;
-(id)handler;
@end

