/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIResponseKitTrainer.h>

@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>
+(id)sharedTrainer;
-(void)performTrainingForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg1 toDestination:(id)arg2 error:(id*)arg3 ;
-(id)_init;
@end

