/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertAction.h>

@interface BEAlertAction : UIAlertAction {

	long long _tag;
	/*^block*/id _actionHandler;

}

@property (assign,nonatomic) long long tag;               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) id actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
-(id)initWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(/*^block*/id)arg4 ;
-(void)doActionHandler;
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
@end
