/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMAPSDelegate;
@class NSString;

@interface FMAPSDelegateInfo : NSObject {

	NSString* _topic;
	id<FMAPSDelegate> _delegate;

}

@property (nonatomic,retain) NSString * topic;                               //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic,__weak) id<FMAPSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(void)setDelegate:(id<FMAPSDelegate>)arg1 ;
-(id<FMAPSDelegate>)delegate;
@end

