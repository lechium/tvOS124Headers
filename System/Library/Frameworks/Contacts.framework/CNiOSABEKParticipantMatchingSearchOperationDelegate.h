/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPredicateDelegate.h>

@class NSString;

@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject <ABPredicateDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end
