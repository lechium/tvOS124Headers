/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {

	id _primaryTarget;
	NSMutableSet* _allTargets;

}
-(BOOL)addActivityTarget:(id)arg1 ;
-(BOOL)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
-(void)dealloc;
-(id)allTargets;
-(id)displayName;
@end

