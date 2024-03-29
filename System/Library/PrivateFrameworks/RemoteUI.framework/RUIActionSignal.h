/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface RUIActionSignal : NSObject {

	unsigned long long _topSignal;
	NSMutableArray* _subActions;

}

@property (assign,nonatomic) unsigned long long topSignal;              //@synthesize topSignal=_topSignal - In the implementation block
@property (nonatomic,retain) NSMutableArray * subActions;               //@synthesize subActions=_subActions - In the implementation block
+(id)stringForActionSignal:(unsigned long long)arg1 ;
+(id)signalWithType:(unsigned long long)arg1 ;
-(void)setTopSignal:(unsigned long long)arg1 ;
-(void)setSubActions:(NSMutableArray *)arg1 ;
-(unsigned long long)topSignal;
-(NSMutableArray *)subActions;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

