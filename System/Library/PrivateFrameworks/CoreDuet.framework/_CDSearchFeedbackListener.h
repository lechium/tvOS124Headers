/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@protocol _DKKnowledgeSaving;
@class NSString;

@interface _CDSearchFeedbackListener : NSObject <SFFeedbackListener> {

	NSString* _clientIdentifier;
	id<_DKKnowledgeSaving> _store;

}

@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving> store;               //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedbackListenerWithStore:(id)arg1 clientIdentifier:(id)arg2 ;
+(id)feedbackListener;
+(id)feedbackListenerWithClientIdentifier:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id<_DKKnowledgeSaving>)store;
-(void)setStore:(id<_DKKnowledgeSaving>)arg1 ;
@end
