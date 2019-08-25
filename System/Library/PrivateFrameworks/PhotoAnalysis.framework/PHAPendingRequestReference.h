/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAGraphServiceWorker, NSString;

@interface PHAPendingRequestReference : NSObject {

	PHAGraphServiceWorker* _worker;
	NSString* _label;

}

@property (__weak) PHAGraphServiceWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (retain) NSString * label;                            //@synthesize label=_label - In the implementation block
-(void)setWorker:(PHAGraphServiceWorker *)arg1 ;
-(PHAGraphServiceWorker *)worker;
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

