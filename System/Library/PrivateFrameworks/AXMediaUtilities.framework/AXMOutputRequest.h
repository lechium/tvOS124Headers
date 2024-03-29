/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableAttributedString, NSMutableArray, NSAttributedString, NSArray;

@interface AXMOutputRequest : NSObject {

	NSMutableAttributedString* _speechSequence;
	NSMutableArray* _soundFileURLs;
	BOOL _interruptsAndClearsQueue;

}

@property (nonatomic,readonly) NSAttributedString * speechSequence; 
@property (assign,nonatomic) BOOL interruptsAndClearsQueue;                      //@synthesize interruptsAndClearsQueue=_interruptsAndClearsQueue - In the implementation block
@property (nonatomic,readonly) NSArray * soundFileURLs; 
+(id)speechItemSeparator;
-(void)addSoundItemWithURL:(id)arg1 ;
-(NSAttributedString *)speechSequence;
-(void)addSpeechItem:(id)arg1 ;
-(NSArray *)soundFileURLs;
-(void)addSoundItemWithID:(long long)arg1 ;
-(BOOL)interruptsAndClearsQueue;
-(void)setInterruptsAndClearsQueue:(BOOL)arg1 ;
@end

